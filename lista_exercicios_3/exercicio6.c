#include <stdio.h>
#include <math.h>

//6)	Crie um array com 8 números inteiros não negativos. A partir dele, crie um array (do tipo float) contendo a raiz quadrada de cada elemento do primeiro array. Utilize a biblioteca math.h e a função sqrt para realizar essa tarefa.

float array[8] = {25, 121, 49, 169, 225, 16, 361, 400};
float raiz[8];
int i;
int tam = 8;

int main(){

    for(i = 0; i < tam; i++){

        printf("%3.f ", array[i]);
        raiz[i] = sqrt(array[i]);
    }

    printf("\n");

    for(i = 0; i < tam; i++){

        
       printf("%3.f ", raiz[i]);
    }
    return 0;
}