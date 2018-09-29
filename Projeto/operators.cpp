#include "operators.h"

//------------------------------DILATION
Image* dilation(Image *input, Image *output, int maskSize)
{

    int t = maskSize ;
    int ind = (t-1)/2 , v = t*t, k;
    pixel med;
    pixel r[v];

    for(uint i = 0 ; i< input->width; i++){
        for(uint j = 0; j< input->height; j++){
            k = 0;
            med = 0;

            for(int ix= -ind ; ix <= ind ; ix++){
                for(int jx= -ind ; jx <= ind ; jx++){
                   if(((i+ix) >= 0) && ((j+jx) >= 0) && ((i+ix) <= input->width) && ((j+jx) <= input->height) ){
                     r[k] = get_channel(input, i+ix, j+jx, RED);
                     k++;
            }}}

            //ordena no vetor
            for( int q=0 ; q<k ; q++){
                for( int w=q+1 ; w<k ; w++){
                    if(r[q] > r[w]){
                        pixel aux = r[q];
                        r[q] = r[w];
                        r[w] = aux;
            }}}

                k--;

            set_pixel(output, i, j, r[k] , r[k], r[k]);

    }}

}

//------------------------------EROSION

void erosion(Image *input, Image *output, int maskSize)
{

    int t = maskSize ;
    int ind = (t-1)/2 , v = t*t, k;
    pixel med;
    pixel r[v];

    for(uint i = 0 ; i< input->width; i++){
        for(uint j = 0; j< input->height; j++){
            k = 0;
            med = 0;

            for(int ix= -ind ; ix <= ind ; ix++){
                for(int jx= -ind ; jx <= ind ; jx++){
                   if(((i+ix) >= 0) && ((j+jx) >= 0) && ((i+ix) <= input->width) && ((j+jx) <= input->height) ){
                     r[k] = get_channel(input, i+ix, j+jx, RED);
                     k++;
            }}}

            //ordena no vetor
            for( int q=0 ; q<k ; q++){
                for( int w=q+1 ; w<k ; w++){
                    if(r[q] > r[w]){
                        pixel aux = r[q];
                        r[q] = r[w];
                        r[w] = aux;
            }}}

                k--;

            set_pixel(output, i, j, r[0] , r[0], r[0]);

    }}

}
