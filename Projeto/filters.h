#ifndef FILTERS_H
#define FILTERS_H

#include "image.h"
#include "time.h"
#include <cmath>


#define My_pi 3.14159265359

pixel Obter_intensidade(Image *img, size_t i, size_t j);
void Truncar(pixel p);
void quick_sort (pixel *a, int n);
int media (pixel *a, int n);
size_t Binario8_bits(int n,int i);
Image *Padding(Image *img, int n);
Image *Alterar_contraste(Image *img, int n);
Image *Alterar_RGB(Image *img, int delta_r, int delta_g, int delta_b);
Image *Alterar_YCbCr(Image *img, int delta_y, int delta_cb, int delta_cr);
Image *Alterar_HSI(Image *img, float delta_h, float delta_s, float delta_i);
Image *Alterar_CMYK(Image *img, float ic,float im,float iy,float ik);
Image *Bit_plane0(Image *img);
Image *Bit_plane1(Image *img);
Image *Bit_plane2(Image *img);
Image *Bit_plane3(Image *img);
Image *Bit_plane4(Image *img);
Image *Bit_plane5(Image *img);
Image *Bit_plane6(Image *img);
Image *Bit_plane7(Image *img);
Image *Extrair_Plano_de_Bit(Image * img, int plano);
Image *Blur(Image *img, int n);
Image *Diferenca(Image *img1, Image *img2);
pixel Encontrar_maximo(Image *img);
pixel Encontrar_minimo(Image *img);
Image *Contrast_Stretching(Image *img, pixel min,pixel max);
Image *Cortar(Image *img, int largura_inicial, int largura_final, int altura_inicial, int altura_final);
Image *Equalizar_local_histograma(Image *img,int v_min, int v_max);
Image *Equalizar_histograma(Image *img);
Image *Escala_de_cinza(Image *img);
Image *Emboss(Image *img);
Image *Gamma(Image *img, float valor_gamma);
Image *Glass(Image *img, int delta_x, int delta_y);
Image *Horizontal_flip(Image *img);
Image *Laplaciana(Image *img);
Image *Limiar(Image *img, int valor_limiar);
Image *Maximo(Image *img, int n);
Image *Mediana(Image *img, int n);
Image *Minimo(Image *img,int n);
Image *Mono_canal(Image *img, const char *c);
void directProduct(Image *m1, Image *m2,  Image *output);
Image *Multiplicacao(Image *img,int k);
Image *Negativo(Image *img);
Image *Prewitt(Image *img);
Image *Redimensionar(Image *img, int new_width,int new_height);
Image *Roberts(Image *img);
Image *Rotacao(Image *img, float angulo);
Image *Rotacionar_Horario(Image *img);
Image *Rotacionar_AntiHorario(Image *img);
Image *Sepia(Image *img,int limiar);
Image *Simple_Color_balance(Image *img);
Image *Simple_Channel_equalization(Image *img, const char *c, int min, int max);
Image *Sobel(Image *img);
Image *Soma(Image *img1, Image *img2);
Image *Soma2(Image *img1, Image *img2);
Image *Swirl(Image *img, float angulo);
Image *Translacao(Image *img, double delta_i, double delta_j);
Image *Vertical_flip(Image *img);
Image *Warping(Image *img,float a,float b,float c,float d,float e,float f,float g,float h);
Image *Wave(Image *img, short wave);
Image *Nitidez(Image *img,float k);
Image *Pencil_draw(Image *img);
Image *Color_Filter1(Image *img);
Image *Cartoon(Image *img, int limiar);
Image *oil_painting(Image *img,int level,int n);
Image *Glass_style(Image *img, int raio);
Image *halftone2(Image *img);
Image *halftone(Image *img);
Image *Pixelate(Image *img,int n);
Image *Solarize(Image *img, int limiarr,int limiarg,int limiarb);
Image *Parabola(Image *img);
Image *Rainbow(Image *img);
Image *Kirsch(Image *img);
int ConversorRGB2YCbCr(pixel r,pixel g,pixel b,int opcao);
int ConversorYCbCr2RGB(float y, float cb, float cr, int opcao);
float ConversorRGB2HSI(pixel R,pixel G,pixel B,size_t opcao);
float ConversorHSI2RGB(float h,float s,float intensity,int opcao);
float ConversorRGB2CMYK(pixel R,pixel G,pixel B,size_t opcao);
float ConversorCMYK2RGB(float c,float m,float y,float k,size_t opcao);
Image* BLIScale(Image *scrImg, float scalex, float scaley);
void AND(Image *A, Image *B, Image *out);
void OR(Image *A, Image *B, Image *out);
#endif // FILTERS_H


