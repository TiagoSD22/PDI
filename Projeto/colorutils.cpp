#include"colorutils.h"
#include <cmath>

void RGB2YCbCr(pixel r,pixel g,pixel b,int &y, int &cb, int &cr){
    y = round((0.257 * r) + (0.504 * g) + (0.098 * b) + 16);
    cb = round(128 -(0.148 * r) - (0.291 * g) + (0.439 * b));
    cr = round(128 + (0.439 * r) - (0.368 * g) - (0.071 * b));
}

void YCbCr2RGB(int y, int cb, int cr, pixel &r, pixel &g, pixel &b){
    r = round(y + (1.402 * (cr - 128)));
    g = round(y - (0.71414 * (cr - 128)) - (0.34414 * (cb - 128)));
    b = round(y + (1.772 * (cb - 128)));
    if(r > 255){
        r = 255;
    }
    if(g > 255){
        g = 255;
    }
    if(b > 255){
        b = 255;
    }
    if(r < 0){
        r = 0;
    }
    if(g < 0){
        g = 0;
    }
    if(b < 0){
        b = 0;
    }
}

void RGB2HSI(pixel R, pixel G, pixel B, float &H, float &S, float &I){
    float r,g,b, h = 0.0f, min;
    r = (float)R/(R + G + B);
    g = (float)G/(R + G + B);
    b = (float)B/(R + G + B);
    I = (float)(R + G + B)/(3 * 255);
    if(I > 1){
        I = 1;
    }
    if(I < 0){
        I = 0;
    }
    I = roundf(I * 1000)/1000;
    if(I == 0){
        S = 0;
    }
    else{
        min = r;
        if(g < min){
            min = g;
        }
        if(b < min){
            min = b;
        }
        S = 1 - 3 * min;
    }
    if(S < 0){
        S = 0;
    }
    if(S > 1){
        S = 1;
    }
    S = roundf(S * 1000)/1000;
    if(S == 0){
        H = 0;
    }
    else{
        if(b > g){
            H = (2 * M_PI) - (double)acos((r - g/2 - b/2)/sqrt(pow(r,2) + pow(g,2) + pow(b,2) - r*g - r*b - g*b));
        }
        else{
            H = (double)acos((r - g/2 - b/2)/sqrt(pow(r,2) + pow(g,2) + pow(b,2) - r*g - r*b - g*b));
        }
    }
    if(h != h){
        h = 0;
    }
    H = H * 180/M_PI;
}

void HSI2RGB(float H, float S, float I, pixel &R, pixel &G, pixel &B){
    I = I * 255;
    float r,g,b,min, h =  0.0f;

    if(H == 0 || H == 360){
        R = round(I + (2 * I * S));
        G = round(I - (I * S));
        B = round(I - (I * S));
    }
    if(H > 0 && H < 120){
        R = round(I + ((I * S * cos(H * M_PI/180))/cos((60 * M_PI/180) - (H * M_PI/180))));
        G = round(I + (I * S * ((1 - (cos(H * M_PI/180))/cos((60 * M_PI/180) - (H * M_PI/180))))));
        B = round(I - (I * S));
    }
    if(h == 120){
        r = round(I - (I * S));
        g = round(I + (2 * I * S));
        b = round(I - (I * S));
    }
    if(h > 120 && h < 240){
        R = round(I - (I * S));
        G = round(I + (I * S * (cos((H * M_PI/180) - (120 * M_PI/180))/cos(M_PI - (H * M_PI/180)))));
        B = round(I + (I * S * ((1 - (cos((H * M_PI/180) - (120 * M_PI/180)))/cos(M_PI - (H * M_PI/180))))));
    }
    if(H == 240){
        R = round(I - (I * S));
        G = round(I - (I * S));
        B = round(I + (2 * I * S));
    }
    if(H > 240 && H < 360){
        R = round(I + (I * S * ((1 - (cos((H * M_PI/180) - (240 * M_PI/180)))/cos((300 * M_PI/180) - (H * M_PI/180))))));
        G = round(I - (I * S));
        B = round(I + (I * S * (cos((H * M_PI/180) - (240 * M_PI/180))/cos((300 * M_PI/180) - (H * M_PI/180)))));
    }
    if(R > 255){
        R = 255;
    }
    if(G > 255){
        G = 255;
    }
    if(B > 255){
        B = 255;
    }
    if(R < 0){
        R = 0;
    }
    if(G < 0){
        G = 0;
    }
    if(B < 0){
        B = 0;
    }
}

