#include <stdio.h>
#define MAX 8
//10)	 Faça um programa que lê 8 números inteiros, calcula a média desses números e exiba os números que estão acima da média.

/* codigozinho que calcula a media
 int v1;
    int v2;
    int v3;
    
    printf("Digite tres valores, separe-os dando um espaco\n");
    scanf("%d%d%d" , &v1, &v2, &v3);
    //printf("Valores: %d, %d, %d\n",  v1, v2, v3);
    printf("media aritmetica = %d\n",  (v1 + v2 + v3) / 3);
*/

int array[MAX] = {2, 4, 6, 8, 10, 12, 14, 16};
int i;
int tam = 8;
int soma = 0;
//int media;

int main(){
    printf("Elementos da array: ");
    for(i = 0; i < tam; i++){

        printf("%d ", array[i]);
        soma += array[i];
    }

    printf("\nSoma dos elementos: %d", soma);
    printf("\nMedia aritmetica dos elementos: %d",  (soma) / 8);

    return 0;
}