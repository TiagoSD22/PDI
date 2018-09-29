#include "detectface.h"
#include <iostream>
#include "filters.h"
#include "operators.h"

using namespace std;

vector<Point> getNeighborhood4(Image *img, int x, int y) {
    vector<Point> res;
    if (x-1 >= 0) {
        Point p(x-1, y);
        res.push_back(p);
    }

    if (x+1 < img->width) {
        Point p(x+1, y);
        res.push_back(p);
    }


    if (y-1 >= 0) {
        Point p(x, y-1);
        res.push_back(p);
    }

    if (y+1 < img->height) {
        Point p(x, y+1);
        res.push_back(p);
    }
    return res;
}


vector<Point> getNeighborhoodD(Image *img, int x, int y) {
    vector<Point> res;


    if (x-1 >= 0 && y-1 >= 0) {
        Point p(x-1, y-1);
        res.push_back(p);
    }


    if (x-1 >= 0 && y+1 < img->height) {
        Point p(x-1, y+1);
        res.push_back(p);
    }

    if (x+1 < img->width && y-1 >= 0) {
        Point p(x+1, y-1);
        res.push_back(p);
    }

    if (x+1 < img->width && y+1 < img->height) {
        Point p(x+1, y+1);
        res.push_back(p);
    }

    return res;
}

vector<Point> getNeighborhood8(Image *img, int x, int y) {
    vector<Point> res;

    vector<Point> n4 = getNeighborhood4(img, x, y);
    res.insert(res.begin(), n4.begin(), n4.end());
    n4 = getNeighborhoodD(img, x, y);
    res.insert(res.end(), n4.begin(), n4.end());
    return res;
}


Bounding* nextNoBlackRegion(Image *input, int &x, int &y, int **schedule) {
    pixel p[3];

    get_pixel(input, x, y, p);
    deque<Point> bu;

    if (schedule[x][y] == 0 && p[0] != 0) {
        Point pos(x, y);
        bu.push_back(pos);
        schedule[x][y] = 1;
    } else {
        return nullptr;
    }


    int min[2] = {input->width, input->height};
    int max[2] = {-1,-1};

    while (!bu.empty()) {

        Point p = bu.back();
        bu.pop_back();

        if (p.x > max[0]) {
            max[0] = p.x;
        }

        if (p.x < min[0]) {
            min[0] = p.x;
        }

        if (p.y > max[1]) {
            max[1] = p.y;
        }

        if (p.y < min[1]) {
            min[1] = p.y;
        }

        vector<Point> n8 = getNeighborhood8(input, p.x, p.y);
        for (int i = 0; i < n8.size(); i++) {
            Point pn = n8.at(i);
            pixel px[3];

            get_pixel(input, pn.x, pn.y, px);

            if (px[0] != 0 && schedule[pn.x][pn.y] == 0) {
                schedule[pn.x][pn.y] = 1;
                bu.push_back(pn);
            }
        }
    }


    return new Bounding(min[0], min[1], max[0], max[1]);
}

bool testEyeMouthFeature(Pointf lefty, Pointf righty, Pointf mouth) {

    float dys = ((lefty.x-righty.x) * (lefty.x-righty.x)) + ((lefty.y-righty.y) * (lefty.y-righty.y));
    float dylmo = ((lefty.x-mouth.x) * (lefty.x-mouth.x)) + ((lefty.y-mouth.y) * (lefty.y-mouth.y));
    float dyrmo = ((mouth.x-righty.x) * (mouth.x-righty.x)) + ((mouth.y-righty.y) * (mouth.y-righty.y));

    float pmin = 0.7f;
    float pmax = 1.5f;

    if ((dys >= pmin * dylmo && dys <= pmax * dylmo) || (dys >= pmin * dyrmo && dys <= pmax * dyrmo)) {
        return true;
    } else {
        return false;
    }
}

vector< Bounding* > detectFaces(Image *input,  float eyeMinArea, float eyeMaxArea,
                                float minFaceWidth, float minFaceHeight) {
    Image *in = input;
    Image *ou = createImage(in->width, in->height);
    vector < Bounding* > faces;
    Skin_ColorModels(in, ou);
    erosion(ou, in, 3);
    erosion(in, ou, 3);
    dilation(ou, in, 3);
    copyimg(in, ou);
    //erosion(ou, ou, 3);
    //erosion(ou, ou, 3);
    //dilation(ou, ou, 3);
    //dilation(ou, ou, 3);
    //dilation(ou, ou, 3);

    int wp = (int)(minFaceWidth * in->width);
    int hp = (int)(minFaceHeight * in->height);
    int eyemin = (int)(eyeMinArea * in->width);
    int eyemax = (int)(eyeMaxArea * in->height);

    vector< Bounding* > r = getSkinRegions(in, wp, hp);

    for (size_t i = 0; i < r.size(); i++){
        Bounding *b = r.at(i);

        vector< Bounding* > regions = getPixelColorRegion(ou, b, 0, 0, 0);
        vector<Pointf> points;

        for (int j = 0; j < regions.size(); j++) {
            Bounding *br  = regions.at(j);
        cout<<"ENTROU AQUI"<<endl;
            int area = br->width() * br->height();

            if ( area <= eyemax && area >= eyemin) {
                points.push_back(Pointf(br->xCenter(), br->yCenter()));
            }
            delete br;
            br = nullptr;
        }

        if (points.size() >= 3) {
            Pointf p1 = points.at(0);
            Pointf p2 = points.at(1);
            Pointf p3 = points.at(2);
            Pointf yl(0,0), yr(0,0), m(0,0);
            bool faceDetected = false;
            if (testEyeMouthFeature(p1, p2, p3)){
                yl = p1;
                yr = p2;
                m = p3;
                faceDetected = true;
            } else if (testEyeMouthFeature(p1, p3, p2)) {
                yl = p1;
                yr = p3;
                m = p2;
                faceDetected = true;
            } else if (testEyeMouthFeature(p3, p2, p1)) {
                yl = p3;
                yr = p2;
                m = p1;
                faceDetected = true;
            }


            if (faceDetected) {


                if (yl.x > yr.x) {
                    Pointf tmp = yl;
                    yl = yr;
                    yr = tmp;
                }

                int x1, y1, x2, y2, x3, y3, x4, y4;
                float dik = yl.dist(yr);

               // float dij = yl.dist(m);
                //float djk = yr.dist(m);

                 x1 = x4 = (int)(yl.x - 0.33 * dik);
                 //cout<<yl.x<<", "<<x1<<endl;
                 x2 = x3 = (int)(yr.x + 0.33 * dik);
                 y1 = y2 = (int)(yl.y + 0.33 * dik);
                 y3 = y4 = (int)(yr.y - 0.33 * dik);


                faces.push_back(new Bounding(x1, y1, x2, y3));
            }

        }
        delete b;
        b = nullptr;
    }

    deleteImage(ou);
    return faces;
}



vector< Bounding* > getPixelColorRegion(Image *img, Bounding *b, pixel R, pixel G, pixel B) {

    int **schedule = new int*[img->width];
    for (size_t i = 0; i < img->width; i++) {
        schedule[i] = new int[img->height];
        for (size_t j = 0; j < img->height; j++) {
            schedule[i][j] = 0;
        }
    }

    deque <Point> st;

    int x = b->xmin;
    int y = b->ymin;

    vector < Bounding* > regions;


    while (true) {
        Point p(x, y);
        pixel px[3];
        Point min(b->xmax, b->ymax);
        Point max(b->xmin, b->ymin);
        bool contains = false;

        get_pixel(img, p.x, p.y, px);
        if (schedule[p.x][p.y] == 0 && px[0]==R && px[1] == G && px[2] == B) {
            st.push_back(p);
            schedule[p.x][p.y] = 1;
        }

        while (!st.empty()) {
            Point c = st.back();
            st.pop_back();
            contains = true;

            if (c.x < min.x) {
                min.x = c.x;
            }

            if (c.y < min.y) {
                min.y = c.y;
            }


            if (c.x > max.x) {
                max.x = c.x;
            }

            if (c.y > max.y) {
                max.y = c.y;
            }

            vector<Point> n8 = getNeighborhood8(img, c.x, c.y);

            for (size_t i = 0; i < n8.size(); i++) {
                Point cn = n8.at(i);
                if (b->in(cn.x,cn.y)) {
                    pixel px[3];
                    get_pixel(img, cn.x, cn.y, px);

                    if (schedule[cn.x][cn.y] == 0 && px[0]==R && px[1] == G && px[2] == B) {
                        st.push_back(cn);
                        schedule[cn.x][cn.y] = 1;
                    }
                }
            }
        }
        if (contains) {
            regions.push_back(new Bounding(min.x, min.y, max.x, max.y));
        }
        x++;
        if (x > b->xmax) {
            x = b->xmin;
            y++;
        }
        if (y > b->ymax) {
            break;
        }
    }

    return regions;
}


vector< Bounding* > getSkinRegions(Image *in, int wp, int hp) {
    Image *ou = createImage(in->width, in->height);
    vector< Bounding* > re;
    Skin_RGB(in, ou);

    int **schedule = new int*[ou->width];
    for (int i = 0; i < ou->width; i++) {
        schedule[i] = new int[ou->height];
        for (int j = 0; j < ou->height; j++) {
            schedule[i][j] = 0;
        }
    }


    int x = 0;
    int y = 0;

    Bounding *b = nextNoBlackRegion(ou, x, y, schedule);

    while (true) {
        while (b == nullptr) {
            x++;
            if ( x >= ou->width) {
                x = 0;
                y++;
            }
            if (y >= ou->height) {
                break;
            }

            b = nextNoBlackRegion(ou, x, y, schedule);

        }

        if (b != nullptr && b->width() >= wp  && b->height() >= hp) {
            //draw_rect(ou, b, 255, 0, 0);
            if ( (b->xmax+1) < (ou->width)) {
                x = b->xmax+1;
                y = b->ymin;
            } else {
                x = 0;
                y = b->ymax+1;
            }
            re.push_back(b);
        } else {
            if (b != nullptr) {
                delete b;
            }
        }
        b = nullptr;

        if (y >= ou->height){
            break;
        }
    }

    for (size_t i = 0; i < ou->width; i++) {
        delete [] schedule[i];
    }
    delete [] schedule;


    deleteImage(ou);
    return re;
}

