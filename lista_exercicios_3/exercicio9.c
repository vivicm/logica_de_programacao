#include <stdio.h>
#include <math.h>
#define MAX 8

float array[MAX] = {79, 48, 52, 24, 68, 12, 32, 82};
float cima[MAX], baixo[MAX];
int i;
tam = 8;

int main(){
    printf("Elementos da array principal:\n");
    for(i = 0; i < tam; i++){

        printf("%3.f ", array[i]);
        cima[i] = ceil(sqrt(array[i]));
        baixo[i] = floor(sqrt(array[i]));


    }

    printf("\nValores das raizes quadradas arredondadas para baixo dos elementos principais:\n");
    
    for(i = 0; i < tam; i++){

        printf("%3.f ", cima[i]);


    }

    printf("\nValores das raizes quadradas arredondadas para baixo dos elementos principais:\n");
    
    for(i = 0; i < tam; i++){

        printf("%3.f ", baixo[i]);


    }

    return 0;
}