#include "filters.h"
#include <iostream>

using namespace std;

pixel Obter_intensidade(Image *img, size_t i, size_t j){
    pixel r,g,b,intensidade;
    r = get_channel(img,i,j,RED);
    g = get_channel(img,i,j,GREEN);
    b = get_channel(img,i,j,BLUE);
    intensidade = round(0.299 * r + 0.587 * g + 0.114 * b);
    return intensidade;
}

void Truncar(pixel p){
    if(p < 0){
        p = 0;
    }
    if(p > 255){
        p = 255;
    }
}

void quick_sort (pixel *a, int n) {
    int i, j, p, t;
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (a[i] < p)
            i++;
        while (p < a[j])
            j--;
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    quick_sort(a, i);
    quick_sort(a + i, n - i);
}

int media (pixel *a, int n){
    int i,s,m;
    s = 0;
    for(i = 0; i < n;i++){
        s = s + a[i];
    }
    m = s/n;
}

size_t Binario8_bits(int n,int i){
    int indice = 0;
    int n_bits = log(n)/log(2);
    pixel bit[n_bits];
    pixel aux = n;
    while(aux > 1){
        bit[indice] = aux%2;
        aux = aux/2;
        indice++;
    }
    bit[indice] = aux;
    if(indice < 7){
        for(int complemento = indice+1; complemento < 8; complemento++){
            bit[complemento] = 0;
        }
    }

    return bit[i];
}

Image *Padding(Image *img, int n){
    Image *pad = createImage(img->width + (n - 1),img->height + (n-1));
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < pad->width; i++){
        for(j = 0; j < pad->height; j++){
            set_pixel(pad,i,j,0,0,0);
        }
    }
    for(i = 0;i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(pad,i + ((n-1)/2),j + ((n-1)/2),r,g,b);
        }
    }

    return pad;
}

Image *Bit_plane0(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,0);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Bit_plane1(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,1);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return  output;
}

Image *Bit_plane2(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,2);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Bit_plane3(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,3);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Bit_plane4(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,4);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Bit_plane5(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,5);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Bit_plane6(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,6);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Bit_plane7(Image *img){
    Image *output = createImage(img->width,img->height);
    pixel c,bit;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            bit = Binario8_bits(c,7);
            if(bit == 1){
                set_pixel(output,i,j,c,c,c);
            }
            else{
                set_pixel(output,i,j,0,0,0);
            }
        }
    }
    return output;
}

Image *Extrair_Plano_de_Bit(Image * img, int plano){
    Image *output = createImage(img->width,img->height);
    if(plano == 0){
        output = Bit_plane0(img);
    }
    if(plano == 1){
        output = Bit_plane1(img);
    }
    if(plano == 2){
        output = Bit_plane2(img);
    }
    if(plano == 3){
        output = Bit_plane3(img);
    }
    if(plano == 4){
        output = Bit_plane4(img);
    }
    if(plano == 5){
        output = Bit_plane5(img);
    }
    if(plano == 6){
        output = Bit_plane6(img);
    }
    if(plano == 7){
        output = Bit_plane7(img);
    }
    return output;
}

Image *Blur(Image *img, int n){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    double i,j,x,y;
    int indice,totalr,totalg,totalb;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            indice = 0;totalr = 0;totalg = 0;totalb = 0;
            for(x = i - ((n-1)/2); x <= i + ((n-1)/2); x++){
                for(y = j - ((n-1)/2); y <= j + ((n-1)/2); y++){
                    if(x >= 0 && x < img->width && y >= 0 && y < img->height){
                        r = get_channel(img,x,y,RED);
                        g = get_channel(img,x,y,GREEN);
                        b = get_channel(img,x,y,BLUE);
                        totalr = totalr + r;
                        totalg = totalg + g;
                        totalb = totalb + b;
                        indice++;
                    }
                }
            }
            totalr = round(totalr/indice);
            totalg = round(totalg/indice);
            totalb = round(totalb/indice);
            set_pixel(saida,i,j,totalr,totalg,totalb);
        }
    }
    return saida;
}

Image *Alterar_contraste(Image *img, int n){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    int nr,ng,nb;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            nr = r + n;
            ng = g + n;
            nb = b + n;
            if(nr > 255){
                nr = 255;
            }
            else if(nr < 0){
                nr = 0;
            }
            if(ng > 255){
                ng = 255;
            }
            else if(ng < 0){
                ng = 0;
            }
            if(nb > 255){
                nb = 255;
            }
            else if(nb < 0){
                nb = 0;
            }
            set_pixel(saida,i,j,nr,ng,nb);
        }
    }
    return saida;
}

Image *Alterar_RGB(Image *img, int delta_r,int delta_g,int delta_b){
    Image *output = createImage(img->width,img->height);
    pixel r,g,b;
    int rs,gs,bs;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            rs = r + delta_r;
            gs = g + delta_g;
            bs = b + delta_b;
            if(rs < 0){
                rs = 0;
            }
            if(gs < 0){
                gs = 0;
            }
            if(bs < 0){
                bs = 0;
            }
            if(rs > 255){
                rs = 255;
            }
            if(gs > 255){
                gs = 255;
            }
            if(bs > 255){
                bs = 255;
            }
            set_pixel(output,i,j,rs,gs,bs);
        }
    }
    return output;
}

Image *Diferenca(Image *img1, Image *img2){
    Image *saida = createImage(img1->width,img1->height);
    pixel r1,r2,g1,g2,b1,b2,rd,gd,bd;
    size_t i,j;
    for(i = 0; i < img1->width; i++){
        for(j = 0; j < img1->height; j++){
            r1 = get_channel(img1,i,j,RED);
            g1 = get_channel(img1,i,j,GREEN);
            b1 = get_channel(img1,i,j,BLUE);
            r2 = get_channel(img2,i,j,RED);
            g2 = get_channel(img2,i,j,GREEN);
            b2 = get_channel(img2,i,j,BLUE);
            if(r2 < r1){
                rd = r1 - r2;
            }
            else{
                rd = 0;
            }
            if(g2 < g1){
                gd = g1 - g2;
            }
            else{
                gd = 0;
            }
            if(b2 < b1){
                bd = b1 - b2;
            }
            else{
                bd = 0;
            }
            set_pixel(saida,i,j,rd,gd,bd);
        }
    }
    return saida;
}

void directProduct(Image *m1, Image *m2,  Image *output) {
    for (int i = 0; i < m1->width; i++) {
        for (int j = 0; j < m1->height; j++) {
            pixel p1[3];
            pixel p2[3];
            get_pixel(m1, i, j, p1);
            get_pixel(m2, i, j, p2);

            set_pixel(output, i, j, p1[0] * p2[0], p1[1] * p2[1], p1[2] * p2[2]);
        }
    }
}

pixel Encontrar_maximo(Image *img){
    pixel c;
    pixel max = 0;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            if(c > max){
                max = c;
            }
        }
    }
    return max;
}

pixel Encontrar_minimo(Image *img){
    pixel c;
    pixel min = 255;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            if(c < min){
                min = c;
            }
        }
    }
    return min;
}

Image *Contrast_Stretching(Image *img, pixel min, pixel max){
    Image *output = createImage(img->width,img->height);
    pixel c,cs,min_entrada,max_entrada;
    size_t i,j;
    min_entrada = Encontrar_minimo(img);
    max_entrada = Encontrar_maximo(img);
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            cs = ((c - min_entrada) * ((max - min)/(max_entrada - min_entrada))) + min;
            if(cs > 255){
                cs = 255;
            }
            if(cs < 0){
                cs = 0;
            }
            set_pixel(output,i,j,cs,cs,cs);
        }
    }
    return output;
}

Image *Cortar(Image *img,int largura_inicial,int largura_final,int altura_inicial,int altura_final){
    Image *saida = createImage(largura_final - largura_inicial + 1,altura_final - altura_inicial + 1);
    pixel r,g,b;
    size_t i,j;
    for(i = largura_inicial; i <= largura_final; i++){
        for(j = altura_inicial; j <= altura_final; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(saida,i - largura_inicial,j - altura_inicial,r,g,b);
        }
    }
    return saida;
}

Image *Equalizar_local_histograma(Image *img,int v_min, int v_max){
    Image *hist_loc_eqz = createImage(img->width,img->height);

    pixel c,quantidade_cor[256];
    size_t i,j,x;
    float probabilidade_cor[256];

    for(x = 0; x <= 255; x++){
        quantidade_cor[x] = 0;
    }

    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
           c = Obter_intensidade(img,i,j);
           quantidade_cor[c]++;
        }
    }

    for(x = 0; x < 256; x++){
        probabilidade_cor[x] = ((float)quantidade_cor[x]/(img->width*img->height));
    }

    float S = 0;
    int nova_cor[256];
    for(int x = 0; x < 256; x++){
        S = S + probabilidade_cor[x];
        nova_cor[x] = 255 * S;
    }

    for (i = 0; i < img->width; i++) {
        for (j = 0; j < img->height; j++) {
            c = Obter_intensidade(img,i,j);
            if(c >= v_min && c <= v_max){
                set_pixel(hist_loc_eqz,i,j,nova_cor[c],nova_cor[c],nova_cor[c]);
            }
            else{
                set_pixel(hist_loc_eqz,i,j,c,c,c);
            }
        }
    }

    return hist_loc_eqz;
}

Image *Equalizar_histograma(Image *img){
    Image *hist_eqz = createImage(img->width,img->height);

    pixel c,quantidade_cor[256];
    size_t i,j,x;
    float probabilidade_cor[256];

    for(x = 0; x <= 255; x++){
        quantidade_cor[x] = 0;
    }

    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
           c = Obter_intensidade(img,i,j);
           quantidade_cor[c]++;
        }
    }

    for(x = 0; x < 256; x++){
        probabilidade_cor[x] = ((float)quantidade_cor[x]/(img->width*img->height));
    }

    float S = 0;
    int nova_cor[256];
    for(int x = 0; x < 256; x++){
        S = S + probabilidade_cor[x];
        nova_cor[x] = 255 * S;
    }

    for (i = 0; i < img->width; i++) {
        for (j = 0; j < img->height; j++) {
            c = Obter_intensidade(img,i,j);
            set_pixel(hist_eqz,i,j,nova_cor[c],nova_cor[c],nova_cor[c]);
        }
    }

    return hist_eqz;
}

Image *Escala_de_cinza(Image *img){
    Image *cinza = createImage(img->width,img->height);
    pixel c;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            set_pixel(cinza,i,j,c,c,c);
        }
    }

    return cinza;
}

Image *Emboss(Image *img){
    Image *emboss = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    int x,y,re,ge,be;
    //int emboss_mask[3][3] = {{2,0,0},{0,-1,0},{0,0,-1}};
    int emboss_mask[3][3] = {{-1,-1,0},{-1,0,1},{0,1,1}};

    for (i = 1; i < img->width - 1; i++) {
        for (j = 1; j < img->height - 1; j++) {
           re = 0;ge = 0;be = 0;
           for(x = - 1; x <= 1; x++){
                for(y = - 1; y <= 1; y++){
                    r = get_channel(img,i + x,j + y,RED);
                    g = get_channel(img,i + x,j + y,GREEN);
                    b = get_channel(img,i + x,j + y,BLUE);
                    re = re + r * emboss_mask[1 + y][1 + x];
                    ge = ge + g * emboss_mask[1 + y][1 + x];
                    be = be + b * emboss_mask[1 + y][1 + x];
                }
           }
           re = re + 128;
           ge = ge + 128;
           be = be + 128;
           if(re > 255){
               re = 255;
           }
           if(re < 0){
               re = 0;
           }
           if(ge > 255){
               ge = 255;
           }
           if(ge < 0){
               ge = 0;
           }
           if(be > 255){
               be = 255;
           }
           if(be < 0){
               be = 0;
           }
           set_pixel(emboss,i,j,re,ge,be);
       }
    }

    return emboss;
}

Image *Gamma(Image *img, float valor_gamma){
    Image *gamma = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            r = round(255 * ((double)pow((round(r)/255),(double)valor_gamma)));
            g = round(255 * ((double)pow((round(g)/255),(double)valor_gamma)));
            b = round(255 * (pow((double)(round(b)/255),(double)valor_gamma)));
            set_pixel(gamma,i,j,r,g,b);
        }
    }

    return gamma;
}

Image *Horizontal_flip(Image *img){
    Image *flip = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(flip,(img->width - 1) - i,j,r,g,b);
        }
    }
    return flip;
}

Image *Laplaciana(Image *img){
    Image *laplace = createImage(img->width,img->height);
    pixel r,g,b,cor_r,cor_g,cor_b;
    size_t i,j;
    int x,y,rl,gl,bl;
    int v_min_r = 0,v_min_g = 0,v_min_b = 0,v_max_r = 255,v_max_g = 255,v_max_b = 255;
    int laplaciana[3][3] = {{-1,-1,-1},{-1,8,-1},{-1,-1,-1}};

    for(i = 1; i < img->width - 1; i++){
        for(j = 1; j < img->height - 1; j++){
            rl = 0;
            gl = 0;
            bl = 0;
            for(x = -1; x <= 1; x++){
                for(y = -1; y <= 1; y++){
                    r = get_channel(img,i + x, j + y,RED);
                    g = get_channel(img,i + x, j + y,GREEN);
                    b = get_channel(img,i + x, j + y,BLUE);
                    rl = rl + r * laplaciana[1 + y][1 + x];
                    gl = gl + g * laplaciana[1 + y][1 + x];
                    bl = bl + b * laplaciana[1 + y][1 + x];
                }
            }
            if(rl < v_min_r){
                v_min_r = rl;
            }
            if(rl > v_max_r){
                v_max_r = rl;
            }
            if(gl < v_min_g){
                v_min_g = gl;
            }
            if(gl > v_max_g){
                v_max_g = gl;
            }
            if(bl < v_min_b){
                v_min_b = bl;
            }
            if(bl > v_max_b){
                v_max_b = bl;
            }
        }
    }

    for(i = 1; i < img->width -1; i++){
        for(j = 1; j < img->height - 1; j++){
            rl = 0;
            gl = 0;
            bl = 0;
            for(x = -1; x <= 1; x++){
                for(y = -1; y <= 1; y++){
                    r = get_channel(img,i + x, j + y,RED);
                    g = get_channel(img,i + x, j + y,GREEN);
                    b = get_channel(img,i + x, j + y,BLUE);
                    rl = rl + r * laplaciana[1 + y][1 + x];
                    gl = gl + g * laplaciana[1 + y][1 + x];
                    bl = bl + b * laplaciana[1 + y][1 + x];
                }
            }
            cor_r = (rl - v_min_r) * 255/(v_max_r - v_min_r);
            cor_g = (gl - v_min_g) * 255/(v_max_g - v_min_g);
            cor_b = (bl - v_min_b) * 255/(v_max_b - v_min_b);
            set_pixel(laplace,i,j,cor_r,cor_g,cor_b);
        }
    }

    return laplace;
}

Image *Limiar(Image *img, int valor_limiar){
    Image *limiar = createImage(img->width,img->height);
    pixel c;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            if(c >= valor_limiar){
                c = 255;
            }
            else{
                c = 0;
            }
            set_pixel(limiar,i,j,c,c,c);
        }
    }

    return limiar;
}

Image *Maximo(Image *img, int n){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    double i,j,x,y;
    int maximor,maximog,maximob;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            maximor = 0;maximog = 0;maximob = 0;
            for(x = i - ((n-1)/2); x <= i + ((n-1)/2); x++){
                for(y = j - ((n-1)/2); y <= j + ((n-1)/2); y++){
                    if(x >= 0 && x < img->width && y >= 0 && y < img->height){
                        r = get_channel(img,x,y,RED);
                        g = get_channel(img,x,y,GREEN);
                        b = get_channel(img,x,y,BLUE);
                        if(r > maximor){
                            maximor = r;
                        }
                        if(g > maximog){
                            maximog = g;
                        }
                        if(b > maximob){
                            maximob = b;
                        }
                    }
                }
            }
            set_pixel(saida,i,j,maximor,maximog,maximob);
        }
    }
    return saida;
}

Image *Mediana(Image *img, int n){
    Image *saida = createImage(img->width,img->height);
    pixel r[n*n],g[n*n],b[n*n];
    double i,j,x,y;
    int indice;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            indice = 0;
            for(x = i - ((n-1)/2); x <= i + ((n-1)/2); x++){
                for(y = j - ((n-1)/2); y <= j + ((n-1)/2); y++){
                    if(x >= 0 && x < img->width && y >= 0 && y < img->height){
                        r[indice] = get_channel(img,x,y,RED);
                        g[indice] = get_channel(img,x,y,GREEN);
                        b[indice] = get_channel(img,x,y,BLUE);
                        indice++;
                    }
                }
            }
            quick_sort(r,n*n);quick_sort(g,n*n);quick_sort(b,n*n);
            int m = (n-1)/2;
            set_pixel(saida,i,j,r[2*m*(m+1)],g[2*m*(m+1)],b[2*m*(m+1)]);
        }
    }

    return saida;
}

Image *Minimo(Image *img, int n){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    double i,j,x,y;
    int minimor,minimog,minimob;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            minimor = 255;minimog = 255;minimob = 255;
            for(x = i - ((n-1)/2); x <= i + ((n-1)/2); x++){
                for(y = j - ((n-1)/2); y <= j + ((n-1)/2); y++){
                    if(x >= 0 && x < img->width && y >= 0 && y < img->height){
                        r = get_channel(img,x,y,RED);
                        g = get_channel(img,x,y,GREEN);
                        b = get_channel(img,x,y,BLUE);
                        if(r < minimor){
                            minimor = r;
                        }
                        if(g < minimog){
                            minimog = g;
                        }
                        if(b < minimob){
                            minimob = b;
                        }
                    }
                }
            }
            set_pixel(saida,i,j,minimor,minimog,minimob);
        }
    }
    return saida;
}

Image *Mono_canal(Image *img, const char *c){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            if(strcmp(c,"R") == 0){
                set_pixel(saida,i,j,r,0,0);
            }
            if(strcmp(c,"G") == 0){
                set_pixel(saida,i,j,0,g,0);
            }
            if(strcmp(c,"B") == 0){
                set_pixel(saida,i,j,0,0,b);
            }
        }
    }
    return saida;
}

Image *Multiplicacao(Image *img,int k){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    int rs,gs,bs;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
           r = get_channel(img,i,j,RED);
           g = get_channel(img,i,j,GREEN);
           b = get_channel(img,i,j,BLUE);
           rs = r * k;
           gs = g * k;
           bs = b * k;
           if(rs > 255){
               rs = 255;
           }
           if(gs > 255){
               gs = 255;
           }
           if(bs > 255){
               bs = 255;
           }
           set_pixel(saida,i,j,rs,gs,bs);
        }
    }
    return saida;
}

Image *Negativo(Image *img){
    Image *negativo = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(negativo,i,j,255 - r, 255 - g, 255 - b);
        }
    }

    return negativo;
}

Image *Prewitt(Image *img){
    Image *prewitt = createImage(img->width,img->height);
    pixel r,g,b,cor_p_r,cor_p_g,cor_p_b;
    size_t i,j;
    int x,y,gxr,gxg,gxb,gyr,gyg,gyb;
    int prewittx[3][3] = {{-1,0,1},{-1,0,1},{-1,0,1}};
    int prewitty[3][3] = {{-1,-1,-1},{0,0,0},{1,1,1}};

    for (i = 1; i < img->width - 1; i++) {
        for (j = 1; j < img->height - 1; j++) {
           gxr = 0;gxg = 0;gxb = 0;
           gyr = 0;gyg = 0;gyb = 0;
           for(x = - 1; x <= 1; x++){
                for(y = - 1; y <= 1; y++){
                    r = get_channel(img,i + x,j + y,RED);
                    g = get_channel(img,i + x,j + y,GREEN);
                    b = get_channel(img,i + x,j + y,BLUE);
                    gxr = gxr + r * prewittx[1 + y][1 + x];
                    gxg = gxg + g * prewittx[1 + y][1 + x];
                    gxb = gxb + b * prewittx[1 + y][1 + x];
                    gyr = gyr + r * prewitty[1 + y][1 + x];
                    gyg = gyg + g * prewitty[1 + y][1 + x];
                    gyb = gyb + b * prewitty[1 + y][1 + x];
                }
           }
           cor_p_r = sqrt(pow((double)gxr,2) + pow((double)gyr,2));
           cor_p_g = sqrt(pow((double)gxg,2) + pow((double)gyg,2));
           cor_p_b = sqrt(pow((double)gxb,2) + pow((double)gyb,2));
           if(cor_p_r > 255){
               cor_p_r = 255;
           }
           if(cor_p_r < 0){
               cor_p_r = 0;
           }
           if(cor_p_g > 255){
               cor_p_g = 255;
           }
           if(cor_p_g < 0){
               cor_p_g = 0;
           }
           if(cor_p_b > 255){
               cor_p_b = 255;
           }
           if(cor_p_b < 0){
               cor_p_b = 0;
           }
           set_pixel(prewitt,i,j,cor_p_r,cor_p_g,cor_p_b);
       }
    }

    return prewitt;
}

Image *Redimensionar(Image *img,int new_width,int new_height){
    Image *saida = createImage(new_width,new_height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < new_width; i++){
        for(j = 0; j < new_height; j++){
            r = get_channel(img,((i * (img->width - 1))/(new_width - 1)),((j * (img->height - 1))/(new_height - 1)),RED);
            g = get_channel(img,((i * (img->width - 1))/(new_width - 1)),((j * (img->height - 1))/(new_height - 1)),GREEN);
            b = get_channel(img,((i * (img->width - 1))/(new_width - 1)),((j * (img->height - 1))/(new_height - 1)),BLUE);
            set_pixel(saida,i,j,r,g,b);
        }
    }
    return saida;
}

Image *Roberts(Image *img){
    Image *roberts = createImage(img->width,img->height);
    pixel r,g,b,cor_r_r,cor_r_g,cor_r_b;
    size_t i,j;
    int x,y,gxr,gxg,gxb,gyr,gyg,gyb;
    int robertsx[3][3] = {{0,0,0},{0,-1,0},{0,0,1}};
    int robertsy[3][3] = {{0,0,0},{0,0,-1},{0,1,0}};

    for (i = 1; i < img->width - 1; i++) {
        for (j = 1; j < img->height - 1; j++) {
           gxr = 0;gxg = 0;gxb = 0;
           gyr = 0;gyg = 0;gyb = 0;
           for(x = - 1; x <= 1; x++){
                for(y = - 1; y <= 1; y++){
                    r = get_channel(img,i + x,j + y,RED);
                    g = get_channel(img,i + x,j + y,GREEN);
                    b = get_channel(img,i + x,j + y,BLUE);
                    gxr = gxr + r * robertsx[1 + y][1 + x];
                    gxg = gxg + g * robertsx[1 + y][1 + x];
                    gxb = gxb + b * robertsx[1 + y][1 + x];
                    gyr = gyr + r * robertsy[1 + y][1 + x];
                    gyg = gyg + g * robertsy[1 + y][1 + x];
                    gyb = gyb + b * robertsy[1 + y][1 + x];
                }
           }
           cor_r_r = sqrt(pow((double)gxr,2) + pow((double)gyr,2));
           cor_r_g = sqrt(pow((double)gxg,2) + pow((double)gyg,2));
           cor_r_b = sqrt(pow((double)gxb,2) + pow((double)gyb,2));
           if(cor_r_r > 255){
               cor_r_r = 255;
           }
           if(cor_r_r < 0){
               cor_r_r = 0;
           }
           if(cor_r_g > 255){
               cor_r_g = 255;
           }
           if(cor_r_g < 0){
               cor_r_g = 0;
           }
           if(cor_r_b > 255){
               cor_r_b = 255;
           }
           if(cor_r_b < 0){
               cor_r_b = 0;
           }
           set_pixel(roberts,i,j,cor_r_r,cor_r_g,cor_r_b);
       }
    }

    return roberts;
}

Image *Rotacao(Image *img,float angulo){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    int i_centro = (img->width - 1)/2;
    int j_centro = (img->height -1)/2;
    float new_i,new_j;
    angulo = angulo * My_pi/180;
    for(i = 0; i < img->width;i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            new_i = i_centro + i * cos(angulo) - i_centro * cos(angulo) - j * sin(angulo) + j_centro * sin(angulo);
            new_j = j_centro + i * sin(angulo) - i_centro * sin(angulo) + j * cos(angulo) - j_centro * cos(angulo);
            if(new_i >= 0 && new_i < img->width && new_j >= 0 && new_j < img->height){
                set_pixel(saida,new_i,new_j,r,g,b);
            }
        }
    }
    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            pixel c = Obter_intensidade(saida,i,j);
            if(c == 0){
                r = get_channel(saida,i,j+1,RED);
                g = get_channel(saida,i,j+1,GREEN);
                b = get_channel(saida,i,j+1,BLUE);
                set_pixel(saida,i,j,r,g,b);
            }
        }
    }
    return saida;
}

Image *Rotacionar_Horario(Image *img){
    Image *saida = createImage(img->height,img->width);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(saida,(img->height - 1) - j,i,r,g,b);
        }
    }
    return saida;
}

Image *Rotacionar_AntiHorario(Image *img){
    Image *saida = createImage(img->height,img->width);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(saida,j,(img->width - 1) - i,r,g,b);
        }
    }
    return saida;
}

Image *Sepia(Image *img,int mag){
    Image *sepia = createImage(img->width,img->height);
    pixel c,rs,gs,bs;
    size_t i,j;
    double r,g,b,limiar1,limiar2,limiar3,limiar4,tom;
    limiar1 = (mag * 255)/100;
    limiar2 = 7 *limiar1/6;
    limiar3 = limiar1/6;
    limiar4 = limiar1/7;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            c = Obter_intensidade(img,i,j);
            if(c > limiar1){
                tom = 255;
            }
            else{
                tom = c + 255 - limiar1;
            }
            r = tom;
            if(c > limiar2){
                tom = 255;
            }
            else{
                tom = c + 255 - limiar2;
            }
            g = tom;
            if(c < limiar3){
                tom = 0;
            }
            else{
                tom = c - limiar3;
            }
            b = tom;
            tom = limiar4;
            if(g < tom){
                g = tom;
            }
            if(b < tom){
                b = tom;
            }
            set_pixel(sepia,i,j,r,g,b);
        }
    }

    return sepia;
}

Image *Simple_Color_balance(Image *img){
    Image *balanceada = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j,x;
    pixel quantidade_r[256],quantidade_g[256],quantidade_b[256];
    float probabilidade_r[256],probabilidade_g[256],probabilidade_b[256];

    for(x = 0; x <= 255; x++){
        quantidade_r[x] = 0;
        quantidade_g[x] = 0;
        quantidade_b[x] = 0;
    }

    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
           r = get_channel(img,i,j,RED);
           g = get_channel(img,i,j,GREEN);
           b = get_channel(img,i,j,BLUE);
           quantidade_r[r]++;
           quantidade_g[g]++;
           quantidade_b[b]++;
        }
    }

    for(x = 0; x < 256; x++){
        probabilidade_r[x] = ((float)quantidade_r[x]/(img->width*img->height));
        probabilidade_g[x] = ((float)quantidade_g[x]/(img->width*img->height));
        probabilidade_b[x] = ((float)quantidade_b[x]/(img->width*img->height));
    }

    float Sr = 0,Sg = 0,Sb = 0;
    int novo_r[256],novo_g[256],novo_b[256];
    for(int x = 0; x < 256; x++){
        Sr = Sr + probabilidade_r[x];
        Sg = Sg + probabilidade_g[x];
        Sb = Sb + probabilidade_b[x];
        novo_r[x] = 255 * Sr;
        novo_g[x] = 255 * Sg;
        novo_b[x] = 255 * Sb;
    }

    for (i = 0; i < img->width; i++) {
        for (j = 0; j < img->height; j++) {
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(balanceada,i,j,novo_r[r],novo_g[g],novo_b[b]);
        }
    }
    return balanceada;
}

Image *Simple_Channel_equalization(Image *img, const char *c, int min, int max){
    Image *balanceada = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j,x;
    pixel quantidade_r[256],quantidade_g[256],quantidade_b[256];
    float probabilidade_r[256],probabilidade_g[256],probabilidade_b[256];

    for(x = 0; x <= 255; x++){
        quantidade_r[x] = 0;
        quantidade_g[x] = 0;
        quantidade_b[x] = 0;
    }

    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
           r = get_channel(img,i,j,RED);
           g = get_channel(img,i,j,GREEN);
           b = get_channel(img,i,j,BLUE);
           quantidade_r[r]++;
           quantidade_g[g]++;
           quantidade_b[b]++;
        }
    }

    for(x = 0; x < 256; x++){
        probabilidade_r[x] = ((float)quantidade_r[x]/(img->width*img->height));
        probabilidade_g[x] = ((float)quantidade_g[x]/(img->width*img->height));
        probabilidade_b[x] = ((float)quantidade_b[x]/(img->width*img->height));
    }

    float Sr = 0,Sg = 0,Sb = 0;
    int novo_r[256],novo_g[256],novo_b[256];
    for(int x = 0; x < 256; x++){
        Sr = Sr + probabilidade_r[x];
        Sg = Sg + probabilidade_g[x];
        Sb = Sb + probabilidade_b[x];
        novo_r[x] = 255 * Sr;
        novo_g[x] = 255 * Sg;
        novo_b[x] = 255 * Sb;
    }

    for (i = 0; i < img->width; i++) {
        for (j = 0; j < img->height; j++) {
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            if(strcmp(c,"R") == 0){
                if(r >= min && r <= max){
                    set_pixel(balanceada,i,j,novo_r[r],g,b);
                }
                else{
                    set_pixel(balanceada,i,j,r,g,b);
                }
            }
            if(strcmp(c,"G") == 0){
                if(g >= min && g <= max){
                    set_pixel(balanceada,i,j,r,novo_g[g],b);
                }
                else{
                    set_pixel(balanceada,i,j,r,g,b);
                }
            }
            if(strcmp(c,"B") == 0){
                if(b >= min && b <= max){
                    set_pixel(balanceada,i,j,r,g,novo_b[b]);
                }
                else{
                    set_pixel(balanceada,i,j,r,g,b);
                }
            }
        }
    }
    return balanceada;
}

Image *Sobel(Image *img){
    Image *sobel = createImage(img->width,img->height);
    pixel r,g,b,cor_s_r,cor_s_g,cor_s_b;
    size_t i,j;
    int x,y,gxr,gxg,gxb,gyr,gyg,gyb;
    int sobelx[3][3] = {{-1,-2,-1},{0,0,0},{1,2,1}};
    int sobely[3][3] = {{-1,0,1},{-2,0,2},{-1,0,1}};

    for (i = 1; i < img->width - 1; i++) {
        for (j = 1; j < img->height - 1; j++) {
           gxr = 0;gxg = 0;gxb = 0;
           gyr = 0;gyg = 0;gyb = 0;
           for(x = - 1; x <= 1; x++){
                for(y = - 1; y <= 1; y++){
                    r = get_channel(img,i + x,j + y,RED);
                    g = get_channel(img,i + x,j + y,GREEN);
                    b = get_channel(img,i + x,j + y,BLUE);
                    gxr = gxr + r * sobelx[1 + y][1 + x];
                    gxg = gxg + g * sobelx[1 + y][1 + x];
                    gxb = gxb + b * sobelx[1 + y][1 + x];
                    gyr = gyr + r * sobely[1 + y][1 + x];
                    gyg = gyg + g * sobely[1 + y][1 + x];
                    gyb = gyb + b * sobely[1 + y][1 + x];
                }
           }
           cor_s_r = sqrt(pow((double)gxr,2) + pow((double)gyr,2));
           cor_s_g = sqrt(pow((double)gxg,2) + pow((double)gyg,2));
           cor_s_b = sqrt(pow((double)gxb,2) + pow((double)gyb,2));
           if(cor_s_r > 255){
               cor_s_r = 255;
           }
           if(cor_s_r < 0){
               cor_s_r = 0;
           }
           if(cor_s_g > 255){
               cor_s_g = 255;
           }
           if(cor_s_g < 0){
               cor_s_g = 0;
           }
           if(cor_s_b > 255){
               cor_s_b = 255;
           }
           if(cor_s_b < 0){
               cor_s_b = 0;
           }
           set_pixel(sobel,i,j,cor_s_r,cor_s_g,cor_s_b);
       }
    }

    return sobel;
}

Image *Soma(Image *img1, Image *img2){
    Image *soma = createImage(img1->width,img1->height);
    pixel r1,g1,b1,r2,g2,b2,rs,gs,bs;
    size_t i,j;
    for(i = 0; i < img1->width; i++){
        for(j = 0; j < img1->height; j++){
            r1 = get_channel(img1,i,j,RED);
            g1 = get_channel(img1,i,j,GREEN);
            b1 = get_channel(img1,i,j,BLUE);
            r2 = get_channel(img2,i,j,RED);
            g2 = get_channel(img2,i,j,GREEN);
            b2 = get_channel(img2,i,j,BLUE);
            rs = (r1 + r2)/2;
            gs = (g1 + g2)/2;
            bs = (b1 + b2)/2;
            set_pixel(soma,i,j,rs,gs,bs);
        }
    }

    return soma;
}

Image *Soma2(Image *img1, Image *img2){
    Image *soma = createImage(img1->width,img1->height);
    pixel r1,g1,b1,r2,g2,b2,rs,gs,bs;
    size_t i,j;
    for(i = 0; i < img1->width; i++){
        for(j = 0; j < img1->height; j++){
            r1 = get_channel(img1,i,j,RED);
            g1 = get_channel(img1,i,j,GREEN);
            b1 = get_channel(img1,i,j,BLUE);
            r2 = get_channel(img2,i,j,RED);
            g2 = get_channel(img2,i,j,GREEN);
            b2 = get_channel(img2,i,j,BLUE);
            rs = r1 + r2;
            gs = g1 + g2;
            bs = b1 + b2;
            if(rs > 255){
                rs = 255;
            }
            if(gs > 255){
                gs = 255;
            }
            if(bs > 255){
                bs = 255;
            }
            set_pixel(soma,i,j,rs,gs,bs);
        }
    }

    return soma;
}

Image *Translacao(Image *img, double delta_i, double delta_j){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    double new_i,new_j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            new_i = i + delta_i;
            new_j = j + delta_j;
            if(new_i >= img->width){
                new_i = new_i - (img->width);
            }
            if(new_i < 0){
                new_i = (img->width + delta_i) + i;
            }
            if(new_j >= img->height){
                new_j = new_j - (img->height);
            }
            if(new_j < 0){
                new_j = (img->height + delta_j) + j;
            }
            set_pixel(saida,new_i,new_j,r,g,b);
        }
    }
    return saida;
}

Image *Vertical_flip(Image *img){
    Image *flip = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            set_pixel(flip,i,(img->height - 1) - j,r,g,b);
        }
    }
    return flip;
}

Image *Wave(Image *img, short wave){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    double new_x,new_y;
    double xo,yo;
    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            xo = wave * sin(2 * My_pi * j/128);
            yo = wave * cos(2 * My_pi * i/128);
            new_x = (i + xo);
            new_y = (j + yo);
            if(new_x < 0 || new_x >= img->width){
                new_x = i;
            }
            if(new_y < 0 || new_y >= img->height){
                new_y = j;
            }
            set_pixel(saida,new_x,new_y,r,g,b);
        }
    }
    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            pixel c = Obter_intensidade(saida,i,j);
            if(c == 0){
                r = get_channel(saida,i,j+1,RED);
                g = get_channel(saida,i,j+1,GREEN);
                b = get_channel(saida,i,j+1,BLUE);
                set_pixel(saida,i,j,r,g,b);
            }
        }
    }
    return saida;
}

Image *Warping(Image *img,float a,float b,float c,float d,float e,float f,float g,float h){
    Image *saida = createImage(img->width,img->height);
    pixel R,G,B;
    size_t i,j,new_i,new_j;
    for(i = 0; i < img->width;i++){
        for(j = 0; j < img->height; j++){
            R = get_channel(img,i,j,RED);
            G = get_channel(img,i,j,GREEN);
            B = get_channel(img,i,j,BLUE);
            new_i = (a*i + b*j + c)/(g*i + h*j + 1);
            new_j = (d*i + e*j + f)/(g*i + h*j + 1);
            if(new_i >= 0 && new_i < img->width && new_j >= 0 && new_j < img->height){
                set_pixel(saida,new_i,new_j,R,G,B);
            }
        }
    }
    return saida;
}

Image *Nitidez(Image *img,float k){
    Image *saida = createImage(img->width,img->height);
    saida = Soma2(img,Multiplicacao(Diferenca(img,Blur(img,3)),k));
    return saida;
}

Image *Pencil_draw(Image *img){
    Image *saida = Nitidez(Negativo(Escala_de_cinza(Prewitt(img))),10);
    return saida;
}

Image *Cartoon(Image *img,int limiar){
    Image *saida = Nitidez(Gamma(Soma(Limiar(Nitidez(Limiar(Negativo(Escala_de_cinza(Sobel(img))),limiar),100),limiar),img),3),1);
    return saida;
}

Image *Color_Filter1(Image *img){
    Image *saida = Soma(Simple_Color_balance(img),img);
    return saida;
}

int ConversorRGB2YCbCr(pixel r,pixel g,pixel b,int opcao){
    int y,cb,cr;
    y = round((0.257 * r) + (0.504 * g) + (0.098 * b) + 16);
    cb = round(128 -(0.148 * r) - (0.291 * g) + (0.439 * b));
    cr = round(128 + (0.439 * r) - (0.368 * g) - (0.071 * b));
    if(opcao == 1){
        return y;
    }
    if(opcao == 2){
        return cb;
    }
    if(opcao == 3){
        return cr;
    }
}

int ConversorYCbCr2RGB(float y, float cb, float cr, int opcao){
    int r,g,b;
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
    if(opcao == 1){
        return r;
    }
    if(opcao == 2){
        return g;
    }
    if(opcao == 3){
        return b;
    }
}

float ConversorRGB2HSI(pixel R,pixel G,pixel B,size_t opcao){
    float r,g,b,min;
    r = (float)R/(R + G + B);
    g = (float)G/(R + G + B);
    b = (float)B/(R + G + B);
    float h,s,intensity;
    intensity = (float)(R + G + B)/(3 * 255);
    if(intensity > 1){
        intensity = 1;
    }
    if(intensity < 0){
        intensity = 0;
    }
    intensity = roundf(intensity * 1000)/1000;
    if(intensity == 0){
        s = 0;
    }
    else{
        min = r;
        if(g < min){
            min = g;
        }
        if(b < min){
            min = b;
        }
        s = 1 - 3 * min;
    }
    if(s < 0){
        s = 0;
    }
    if(s > 1){
        s = 1;
    }
    s = roundf(s * 1000)/1000;
    if(s == 0){
        h = 0;
    }
    else{
        if(b > g){
            h = (2 * My_pi) - (double)acos((r - g/2 - b/2)/sqrt(pow(r,2) + pow(g,2) + pow(b,2) - (r*g + r*b + g*b)));
        }
        else{
            h = (double)acos((r - g/2 - b/2)/sqrt(pow(r,2) + pow(g,2) + pow(b,2) - (r*g + r*b + g*b)));
        }
    }
    if(h != h){
        h = 0;
    }
    h = round(h * 180/My_pi);
    if(opcao == 1){
        return h;
    }
    if(opcao == 2){
        return s;
    }
    if(opcao == 3){
        return intensity;
    }
}

float ConversorHSI2RGB(float h,float s,float intensity,int opcao){
    pixel r,g,b;
    intensity = intensity * 255;
    if(h == 0 || h == 360){
        r = round(intensity + (2 * intensity * s));
        g = round(intensity - (intensity * s));
        b = round(intensity - (intensity * s));
    }
    if(h > 0 && h < 120){
        r = round(intensity + ((intensity * s * cos(h * My_pi/180))/cos((60 * My_pi/180) - (h * My_pi/180))));
        g = round(intensity + (intensity * s * ((1 - (cos(h * My_pi/180))/cos((60 * My_pi/180) - (h * My_pi/180))))));
        b = round(intensity - (intensity * s));
    }
    if(h == 120){
        r = round(intensity - (intensity * s));
        g = round(intensity + (2 * intensity * s));
        b = round(intensity - (intensity * s));
    }
    if(h > 120 && h < 240){
        r = round(intensity - (intensity * s));
        g = round(intensity + (intensity * s * (cos((h * My_pi/180) - (120 * My_pi/180))/cos(My_pi - (h * My_pi/180)))));
        b = round(intensity + (intensity * s * ((1 - (cos((h * My_pi/180) - (120 * My_pi/180)))/cos(My_pi - (h * My_pi/180))))));
    }
    if(h == 240){
        r = round(intensity - (intensity * s));
        g = round(intensity - (intensity * s));
        b = round(intensity + (2 * intensity * s));
    }
    if(h > 240 && h < 360){
        r = round(intensity + (intensity * s * ((1 - (cos((h * My_pi/180) - (240 * My_pi/180)))/cos((300 * My_pi/180) - (h * My_pi/180))))));
        g = round(intensity - (intensity * s));
        b = round(intensity + (intensity * s * (cos((h * My_pi/180) - (240 * My_pi/180))/cos((300 * My_pi/180) - (h * My_pi/180)))));
    }
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
    if(opcao == 1){
        return r;
    }
    if(opcao == 2){
        return g;
    }
    if(opcao == 3){
        return b;
    }
}

float ConversorRGB2CMYK(pixel R,pixel G,pixel B,size_t opcao){
    float r,g,b,c,m,y,k,max;
    r = (float)R/255;
    g = (float)G/255;
    b = (float)B/255;
    max = r;
    if(g > max){
        max = g;
    }
    if(b > max){
        max = b;
    }
    k = 1 - max;
    c = (1 - r - k)/(1 - k);
    m = (1 - g - k)/(1 - k);
    y = (1 - b - k)/(1 - k);
    k = roundf(k * 1000)/1000;
    c = roundf(c * 1000)/1000;
    m = roundf(m * 1000)/1000;
    y = roundf(y * 1000)/1000;
    if(opcao == 1){
        return c;
    }
    if(opcao == 2){
        return m;
    }
    if(opcao == 3){
        return y;
    }
    if(opcao == 4){
        return k;
    }
}

float ConversorCMYK2RGB(float c,float m,float y,float k,size_t opcao){
    pixel r,g,b;
    r = round(255 * (1 - c) * (1 - k));
    g = round(255 * (1 - m) * (1 - k));
    b = round(255 * (1 - y) * (1 - k));
    if(opcao == 1){
        return r;
    }
    if(opcao == 2){
        return g;
    }
    if(opcao == 3){
        return b;
    }
}

Image *Alterar_HSI(Image *img, float delta_h, float delta_s, float delta_i){
    Image *output = createImage(img->width,img->height);
    pixel r,g,b;
    float rs,gs,bs;
    float h,s,intensity;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            h = ConversorRGB2HSI(r,g,b,1);
            s = ConversorRGB2HSI(r,g,b,2);
            intensity = ConversorRGB2HSI(r,g,b,3);
            h = h + delta_h;
            s = s + delta_s;
            intensity = intensity + delta_i;
            if(h < 0){
                h = 360 + h;
            }
            if(h > 360){
                h = h - 360;
            }
            if(s > 1){
                s = 1;
            }
            if(s < 0){
                s = 0;
            }
            if(intensity > 1){
                intensity = 1;
            }
            if(intensity < 0){
                intensity = 0;
            }
            rs = ConversorHSI2RGB(h,s,intensity,1);
            gs = ConversorHSI2RGB(h,s,intensity,2);
            bs = ConversorHSI2RGB(h,s,intensity,3);
            set_pixel(output,i,j,rs,gs,bs);
        }
    }
    return output;
}

Image *Alterar_YCbCr(Image *img, int delta_y,int delta_cb,int delta_cr){
    Image *output = createImage(img->width,img->height);
    pixel r,g,b;
    float rs,gs,bs;
    float y,cb,cr;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            y = ConversorRGB2YCbCr(r,g,b,1);
            cb = ConversorRGB2YCbCr(r,g,b,2);
            cr = ConversorRGB2YCbCr(r,g,b,3);
            y = y + delta_y;
            cb = cb + delta_cb;
            cr = cr + delta_cr;
            if(y > 255){
                y = 255;
            }
            if(cb > 255){
                cb = 255;
            }
            if(cr > 255){
                cr = 255;
            }
            if(y < 0){
                y = 0;
            }
            if(cb < 0){
                cb = 0;
            }
            if(cr < 0){
                cr = 0;
            }
            rs = ConversorYCbCr2RGB(y,cb,cr,1);
            gs = ConversorYCbCr2RGB(y,cb,cr,2);
            bs = ConversorYCbCr2RGB(y,cb,cr,3);
            set_pixel(output,i,j,rs,gs,bs);
        }
    }
    return output;
}

Image *Alterar_CMYK(Image *img, float ic, float im, float iy, float ik){
    Image *output = createImage(img->width,img->height);
    pixel r,g,b,rs,gs,bs;
    float c,m,y,k;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            c = ConversorRGB2CMYK(r,g,b,1);
            m = ConversorRGB2CMYK(r,g,b,2);
            y = ConversorRGB2CMYK(r,g,b,3);
            k = ConversorRGB2CMYK(r,g,b,4);
            c = c + ic;
            m = m + im;
            y = y + iy;
            k = k + ik;
            if(m > 1){
                m = 1;
            }
            if(k > 1){
                k = 1;
            }
            if(y > 1){
                y = 1;
            }
            if(c > 1){
                c = 1;
            }
            if(c < 0){
                c = 0;
            }
            if(m < 0){
                m = 0;
            }
            if(y < 0){
                y = 0;
            }
            if(k < 0){
                k = 0;
            }
            rs = ConversorCMYK2RGB(c,m,y,k,1);
            gs = ConversorCMYK2RGB(c,m,y,k,2);
            bs = ConversorCMYK2RGB(c,m,y,k,3);
            set_pixel(output,i,j,rs,gs,bs);
        }
    }
    return output;
}

Image *oil_painting(Image *img,int level,int n){
    Image *saida = createImage(img->width,img->height);
    Image *pad = Padding(img,n);
    pixel r,g,b,r_saida,g_saida,b_saida;
    int contador[level],cor_atual,sumr[level],sumg[level],sumb[level],max,max_indice,cor;
    size_t i,j,x,y;
    for(i = (n-1)/2; i < pad->width-((n-1)/2); i++){
        for(j = (n-1)/2; j < pad->height-((n-1)/2); j++){
            max = 0;
            for(cor = 0; cor < level; cor++){
                contador[cor] = 0;sumr[cor] = 0;sumg[cor] = 0;sumb[cor] = 0;
            }
            for(x = i-((n-1)/2);x <= i+((n-1)/2); x++){
                for(y = j-((n-1)/2);y <= j+((n-1)/2); y++){
                        r = get_channel(pad,x,y,RED);
                        g = get_channel(pad,x,y,GREEN);
                        b = get_channel(pad,x,y,BLUE);
                        cor_atual = (int)(((r + g + b)/3) * level)/255;
                        contador[cor_atual]++;
                        if(contador[cor_atual] > max){
                            max = contador[cor_atual];
                            max_indice = cor_atual;
                        }
                        sumr[cor_atual] = sumr[cor_atual] + r;
                        sumg[cor_atual] = sumg[cor_atual] + g;
                        sumb[cor_atual] = sumb[cor_atual] + b;
                }
            }
            //cout<<max<<" "<<max_indice<<" "<<sumr[max_indice]<<" "<<sumg[max_indice]<<" "<<sumb[max_indice]<<endl;
            r_saida = sumr[max_indice]/max;
            g_saida = sumg[max_indice]/max;
            b_saida = sumb[max_indice]/max;
            set_pixel(saida,i - ((n-1)/2),j - ((n-1)/2),r_saida,g_saida,b_saida);
        }
    }

    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            pixel C = Obter_intensidade(saida,i,j);
            if(C == 0){
                C = Obter_intensidade(img,i,j);
                set_pixel(saida,i,j,C,C,C);
            }
        }
    }
    return saida;
}

Image *Glass_style(Image *img, int raio){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    int x,y,dx,dy;
    srand((time(NULL)));
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            dx = rand()%(raio + 1);
            dy = rand()%(raio + 1);
            x = i + dx;
            y = j + dy;
            if(x < 0){
                x = 0;
            }
            if(y < 0){
                y = 0;
            }
            if(x > img->width - 1){
                x = img->width - 1;
            }
            if(y > img->height - 1){
                y = img->height - 1;
            }
            set_pixel(saida,x,y,r,g,b);
        }
    }
    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            pixel c = Obter_intensidade(saida,i,j);
            if(c == 0){
                r = get_channel(img,i,j+1,RED);
                g = get_channel(img,i,j+1,GREEN);
                b = get_channel(img,i,j+1,BLUE);
                set_pixel(saida,i,j,r,g,b);
            }
        }
    }
    return saida;
}

Image *halftone(Image *img){
    img = Gamma(img,0.5);
    Image *saida = createImage(img->width,img->height);
    pixel r[4],g[4],b[4],c[4],k[4];
    size_t i,j;
    int valor;
    r[0] = 0;r[1] = 0;r[2] = 0;r[3] = 0;g[0] = 0;g[1] = 0;g[2] = 0;g[3] = 0;b[0] = 0;b[1] = 0;b[2] = 0;b[3] = 0;
    for(i = 0; i < img->width; i = i + 2){
        for(j = 0; j < img->height; j = j + 2){
            r[0] = get_channel(img,i,j,RED);
            r[1] = get_channel(img,i+1,j,RED);
            r[2] = get_channel(img,i,j+1,RED);
            r[3] = get_channel(img,i+1,j+1,RED);
            g[0] = get_channel(img,i,j,GREEN);
            g[1] = get_channel(img,i+1,j,GREEN);
            g[2] = get_channel(img,i,j+1,GREEN);
            g[3] = get_channel(img,i+1,j+1,GREEN);
            b[0] = get_channel(img,i,j,BLUE);
            b[1] = get_channel(img,i+1,j,BLUE);
            b[2] = get_channel(img,i,j+1,BLUE);
            b[3] = get_channel(img,i+1,j+1,BLUE);
            c[0] = Obter_intensidade(img,i,j);
            c[1] = Obter_intensidade(img,i+1,j);
            c[2] = Obter_intensidade(img,i,j+1);
            c[3] = Obter_intensidade(img,i+1,j+1);
            k[0] = ConversorRGB2CMYK(r[0],g[0],b[0],4);
            k[1] = ConversorRGB2CMYK(r[1],g[1],b[1],4);
            k[2] = ConversorRGB2CMYK(r[2],g[2],b[2],4);
            k[3] = ConversorRGB2CMYK(r[3],g[3],b[3],4);
            valor = c[0] + c[1] + c[2] + c[3];
            if(valor > 1024/8){
                set_pixel(saida,i,j,r[0],g[0],b[0]);
            }
            else{
                set_pixel(saida,i,j,k[0],k[0],k[0]);
            }
            if(valor > (3 * 1024)/8){
                set_pixel(saida,i+1,j+1,r[3],g[3],b[3]);
            }
            else{
                set_pixel(saida,i+1,j+1,k[3],k[3],k[3]);
            }
            if(valor > (5 * 1024)/8){
                set_pixel(saida,i,j+1,r[2],g[2],b[2]);
            }
            else{
                set_pixel(saida,i,j+1,k[2],k[2],k[2]);
            }
            if(valor > (7 * 1024)/8){
                set_pixel(saida,i+1,j,r[1],g[1],b[1]);
            }
            else{
                set_pixel(saida,i+1,j,k[1],k[1],k[1]);
            }
        }
    }
    return saida;
}

Image *halftone2(Image *img){
    Image *saida = createImage(img->width,img->height);
    pixel c[4];
    size_t i,j;
    int valor;
    for(i = 0; i < img->width; i = i + 2){
        for(j = 0; j < img->height; j = j + 2){
            c[0] = Obter_intensidade(img,i,j);
            c[1] = Obter_intensidade(img,i+1,j);
            c[2] = Obter_intensidade(img,i,j+1);
            c[3] = Obter_intensidade(img,i+1,j+1);
            valor = c[0] + c[1] + c[2] + c[3];
            if(valor > 1024/8){
                set_pixel(saida,i,j,255,255,255);
            }
            else{
                set_pixel(saida,i,j,0,0,0);
            }
            if(valor > (3 * 1024)/8){
                set_pixel(saida,i+1,j+1,255,255,255);
            }
            else{
                set_pixel(saida,i+1,j+1,0,0,0);
            }
            if(valor > (5 * 1024)/8){
                set_pixel(saida,i,j+1,255,255,255);
            }
            else{
                set_pixel(saida,i,j+1,0,0,0);
            }
            if(valor > (7 * 1024)/8){
                set_pixel(saida,i+1,j,255,255,255);
            }
            else{
                set_pixel(saida,i+1,j,0,0,0);
            }
        }
    }
    return saida;
}

Image *Pixelate(Image *img,int n){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    int valorr,valorg,valorb,indice;
    double i,j,x,y;
    for(i = 0; i < img->width; i = i + n){
        for(j = 0; j < img->height; j = j + n){
            valorr = 0;valorg = 0;valorb = 0;indice = 0;
            for(x = i-((n-1)/2); x <= i+((n-1)/2); x++){
                for(y = j-((n-1)/2); y <= j+((n-1)/2); y++){
                    if(x >= 0 && x < img->width && y >= 0 && y < img->height){
                        r = get_channel(img,x,y,RED);
                        g = get_channel(img,x,y,GREEN);
                        b = get_channel(img,x,y,BLUE);
                        valorr = valorr + r;
                        valorg = valorg + g;
                        valorb = valorb + b;
                        indice++;
                    }
                }
            }
            valorr = round(valorr/(indice));
            valorg = round(valorg/(indice));
            valorb = round(valorb/(indice));
            for(x = i-((n-1)/2); x <= i+((n-1)/2); x++){
                for(y = j-((n-1)/2); y <= j+((n-1)/2); y++){
                    if(x >= 0 && x < img->width && y >= 0 && y < img->height){
                        set_pixel(saida,x,y,valorr,valorg,valorb);
                    }
                }
            }
        }
    }
    return saida;
}

Image *Solarize(Image *img,int limiarr,int limiarg,int limiarb){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b,rs,gs,bs;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            if(r > limiarr){
                rs = 255 - r;
            }
            else{
                rs = r;
            }
            if(g > limiarg){
                gs = 255 - g;
            }
            else{
                gs = g;
            }
            if(b > limiarb){
                bs = 255 - b;
            }
            else{
                bs = b;
            }
            Truncar(rs);
            Truncar(gs);
            Truncar(bs);
            set_pixel(saida,i,j,rs,gs,bs);
        }
    }
    return saida;
}

Image *Parabola(Image *img){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    double rs,gs,bs;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
             r = get_channel(img,i,j,RED);
             g = get_channel(img,i,j,GREEN);
             b = get_channel(img,i,j,BLUE);
             rs = (r/128) - 1;
             gs = (g/128) - 1;
             bs = (b/128) - 1;
             r = 255 * (1 - (rs * rs));
             g = 255 * (1 - (gs * gs));
             b = 255 * (1 - (bs * bs));
             Truncar(r);
             Truncar(g);
             Truncar(b);
             set_pixel(saida,i,j,r,g,b);
        }
    }
    return saida;
}

Image *Rainbow(Image *img){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            if(j < img->height/6){
                set_pixel(saida,i,j,r,40,0);
            }
            else{
                if(j < 2 * img->height/6){
                    set_pixel(saida,i,j,r,g,0);
                }
                else{
                    if(j < 3 * img->height/6){
                        r = r * 2;
                        g = g * 2;
                        if( r > 255){
                             r = 255;
                        }
                        if(g > 255){
                             g = 255;
                        }
                        set_pixel(saida,i,j,r,g,0);
                    }
                    else{
                        if(j < 4 * img->height/6){
                            set_pixel(saida,i,j,0,g,b);
                        }
                        else{
                            if(j < 5 * img->height/6){
                                set_pixel(saida,i,j,0,0,b);
                            }
                            else{
                                set_pixel(saida,i,j,r,0,b);
                            }
                        }
                    }
                }
            }
        }
    }
    return Alterar_HSI(saida,-20,0,0);
}

//As funções a seguir ainda não estão funcionando de forma adequada...
void Rotacionar(int n[3][3]){
    int aux[3][3];
    aux[0][0] = n[0][0];
    aux[1][0] = n[1][0];
    aux[2][0] = n[2][0];
    aux[2][1] = n[2][1];
    n[0][0] = n[0][1];
    n[0][1] = n[0][2];
    n[0][2] = n[1][2];
    n[1][0] = aux[0][0];
    n[1][1] = n[1][1];
    n[1][2] = n[2][2];
    n[2][0] = aux[1][0];
    n[2][1] = aux[2][0];
    n[2][2] = aux[2][1];
}

Image *Kirsch(Image *img){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b,cor_s_r,cor_s_g,cor_s_b;
    pixel rk[8],gk[8],bk[8];
    int max_r = 0,max_g = 0,max_b = 0,min_r = 0,min_g = 0,min_b = 0;
    size_t i,j,l;
    int x,y,gr,gg,gb;
    int kirsch[3][3] = {{5,5,5},{-3,0,-3},{-3,-3,-3}};
    for (i = 1; i < img->width - 1; i++) {
        for (j = 1; j < img->height - 1; j++) {
            for(l = 0; l < 8; l++){
                gr = 0;gg = 0;gb = 0;
                    for(x = - 1; x <= 1; x++){
                        for(y = - 1; y <= 1; y++){
                            r = get_channel(img,i + x,j + y,RED);
                            g = get_channel(img,i + x,j + y,GREEN);
                            b = get_channel(img,i + x,j + y,BLUE);
                            gr = gr + r * kirsch[1 + y][1 + x];
                            gg = gg + g * kirsch[1 + y][1 + x];
                            gb = gb + b * kirsch[1 + y][1 + x];
                        }
                    }
                    rk[l] = gr;
                    gk[l] = gg;
                    bk[l] = gb;
                    Rotacionar(kirsch);
             }
            quick_sort(rk,8);
            quick_sort(gk,8);
            quick_sort(bk,8);
            if(rk[7] > max_r){
                max_r = rk[7];
            }
            if(gk[7] > max_g){
                max_g = gk[7];
            }
            if(bk[7] > max_b){
                max_b = bk[7];
            }
            if(rk[0] < min_r){
                min_r = rk[0];
            }
            if(gk[0] < min_g){
                min_g = gk[0];
            }
            if(bk[0] < min_b){
                min_b = bk[0];
            }
        }
    }
    for (i = 1; i < img->width - 1; i++) {
        for (j = 1; j < img->height - 1; j++) {
            for(l = 0; l < 8; l++){
                gr = 0;gg = 0;gb = 0;
                    for(x = - 1; x <= 1; x++){
                        for(y = - 1; y <= 1; y++){
                            r = get_channel(img,i + x,j + y,RED);
                            g = get_channel(img,i + x,j + y,GREEN);
                            b = get_channel(img,i + x,j + y,BLUE);
                            gr = gr + r * kirsch[1 + y][1 + x];
                            gg = gg + g * kirsch[1 + y][1 + x];
                            gb = gb + b * kirsch[1 + y][1 + x];
                        }
                    }
                    rk[l] = gr;
                    gk[l] = gg;
                    bk[l] = gb;
                    Rotacionar(kirsch);
             }
            quick_sort(rk,8);
            quick_sort(gk,8);
            quick_sort(bk,8);
            cor_s_r = 255/(max_r - min_r) * rk[3] - min_r;
            cor_s_g = 255/(max_g - min_g) * gk[3] - min_g;
            cor_s_b = 255/(max_b - min_b) * bk[3] - min_b;
            set_pixel(saida,i,j,cor_s_r,cor_s_g,cor_s_b);
        }
    }
    return saida;
}

Image *Glass(Image *img,int delta_x,int delta_y){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    int new_x,new_y;
    size_t i,j;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            if(i%2 == 0){
            new_x = i + delta_x;
            }
            else{
                new_x = i - delta_x;
            }
            if(j%2 == 0){
            new_y = j + delta_y;
            }
            else{
                new_y = j - delta_y;
            }
            if(new_x < 0 || new_x >= img->width){
                new_x = i;
            }
            if(new_y < 0 || new_y >= img->height){
                new_y = j;
            }
            set_pixel(saida,new_x,new_y,r,g,b);
        }
    }
    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            pixel c = Obter_intensidade(saida,i,j);
            if(c == 0){
                r = get_channel(saida,i,j+1,RED);
                g = get_channel(saida,i,j+1,GREEN);
                b = get_channel(saida,i,j+1,BLUE);
                set_pixel(saida,i,j,r,g,b);
            }
        }
    }
    return saida;
}

Image *Swirl(Image *img,float angulo){
    Image *saida = createImage(img->width,img->height);
    pixel r,g,b;
    size_t i,j;
    int new_x,new_y;
    int i_centro = (img->width - 1)/2;
    int j_centro = (img->height - 1)/2;
    float raio;
    angulo = angulo * My_pi/180;
    for(i = 0; i < img->width; i++){
        for(j = 0; j < img->height; j++){
            r = get_channel(img,i,j,RED);
            g = get_channel(img,i,j,GREEN);
            b = get_channel(img,i,j,BLUE);
            int x = i - i_centro;
            int y = j - j_centro;
            double theta = atan2((double)y,(double)x);
            double radius = sqrt(x*x + y*y);
            new_x = i_centro + (radius * cos(theta + (angulo * radius)));
            new_y = j_centro + (radius * sin(theta + (angulo * radius)));
            if(new_x >= 0 && new_x < img->width && new_y >= 0 && new_y < img->height){
                set_pixel(saida,new_x,new_y,r,g,b);
            }
        }
    }
    for(i = 0; i < saida->width; i++){
        for(j = 0; j < saida->height; j++){
            pixel c = Obter_intensidade(saida,i,j);
            if(c == 0){
                r = get_channel(saida,i,j+1,RED);
                g = get_channel(saida,i,j+1,GREEN);
                b = get_channel(saida,i,j+1,BLUE);
                set_pixel(saida,i,j,r,g,b);
            }
        }
    }
    return saida;
}

//Seção em construção

//BEGIN::CONTRIBUICOES DE GILZAMIR GOMES
/**
 * @brief BLIScale scale image by bilinear interpolation.
 * @param scrImg image to scale
 * @param scalex scale on x
 * @param scaley scale on y
 * @return
 */
Image* BLIScale(Image *scrImg, float scalex, float scaley) {
    size_t w = scrImg->width * scalex;
    size_t h = scrImg->height * scaley;
    Image *nimg = createImage(w, h);
    clearImage(nimg, 0,0,0);
    for (size_t i = 0; i < scrImg->width; i++) {
        for (size_t j = 0; j < scrImg->height; j++) {
            size_t si = i * scalex;
            size_t sj = j * scaley;
            pixel R, G, B;
            R = get_channel(scrImg, i, j, RED);
            G = get_channel(scrImg, i, j, GREEN);
            B = get_channel(scrImg, i, j, BLUE);
            set_pixel(nimg, si, sj, R, G, B);
        }
    }

    for (size_t i = 0; i < w; i++) {
        for (size_t j = 0; j < h; j++) {
            float si = i/(float)scalex;
            float sj = j/(float)scaley;

            size_t a[2] = {(size_t)floor(si), (size_t)floor(sj)};
            size_t b[2] = {(size_t)ceil(si), (size_t)floor(sj)};
            size_t c[2] = {(size_t)floor(si), (size_t)ceil(sj)};
            size_t d[2] = {(size_t)ceil(si), (size_t)ceil(sj)};

            pixel ca[3], cb[3], cc[3], cd[3];
            get_pixel(scrImg, a[0], a[1], ca);
            get_pixel(scrImg, b[0], b[1], cb);
            get_pixel(scrImg, c[0], c[1], cc);
            get_pixel(scrImg, d[0], d[1], cd);


            float u = 1.0f;
            if (b[0] != a[0]) {
                u =  (si - a[0])/(float)(b[0]-a[0]);
            }

            float v = 1.0f;
            if (d[0] != c[0]) {
                v = (si - c[0])/(float)(d[0]-c[0]);
            }

            pixel r1[3];
            r1[0] = (1-u) * ca[0] + u * cb[0];
            r1[1] = (1-u) * ca[1] + u * cb[1];
            r1[2] = (1-u) * ca[2] + u * cb[2];

            pixel r2[3];
            r2[0] = (1-v) * cc[0] + v * cd[0];
            r2[1] = (1-v) * cc[1] + v * cd[1];
            r2[2] = (1-v) * cc[2] + v * cd[2];

            float t =  0.5;
            if (v != u) {
                t = (si-u)/(v-u);
            }
            pixel R = (pixel)((1-t) * r1[0] + t * r2[0] + 0.5);
            pixel G = (pixel)((1-t) * r1[1] + t * r2[1] + 0.5);
            pixel B = (pixel)((1-t) * r1[2] + t * r2[2] + 0.5);
            set_pixel(nimg, i, j, R, G, B);
        }
    }

    return nimg;
}


void OR(Image *A, Image *B, Image *out){
    for (int i = 0; i < A->width; i++) {
        for (int j = 0; j < A->height; j++) {

            pixel a = get_channel(A, i, j, RED);
            pixel b = get_channel(B, i, j, RED);
            pixel c = 0;

            if (a > 0 || b > 0) {
                c = 255;
            }

            set_pixel(out, i, j, c, c, c);
        }
    }
}

void AND(Image *A, Image *B, Image *out){
    for (int i = 0; i < A->width; i++) {
        for (int j = 0; j < A->height; j++) {

            pixel a = get_channel(A, i, j, RED);
            pixel b = get_channel(B, i, j, RED);

            pixel c = 0;


            if (a > 0 && b > 0) {
                c = 255;
            }

            set_pixel(out, i, j, c, c, c);
        }
    }
}

//END::CONTRIBUICOES DE GILZAMIR GOMES


