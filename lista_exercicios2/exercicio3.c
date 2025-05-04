#include <stdio.h>

/*3)	Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.*/

int main(){
    int nota;

    printf("De uma nota entre 0 e 10\n");
    scanf("%d", &nota);
    if(0 <= nota && nota <= 10){
    printf("você inseriu um numero valido - uma nota entre 0 e 10");
    } else{
     while(nota < 0 ||  nota > 10){
     printf("você inseriu um numero invalido\n");
     printf("digite uma nota entre 0 e 10");
     scanf("%d", &nota);

     }
    }
  

    return 0;
}