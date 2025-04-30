#include <stdio.h>
 //11. Faça um programa que, dados 3 números inteiros, mostre na tela esses números em ordem crescente.


int main(){

    int nmaior = 1; //c
    int nmeio = 3; //b 
    int nmenor = 2; //a
    /*
        printf("Digite o primeiro número: ");
        scanf("%d", &a);
        
        printf("Digite o segundo número: ");
        scanf("%d", &b);
        
        printf("Digite o terceiro número: ");
        scanf("%d", &c);
    */

    if (nmenor < nmeio && nmenor < nmaior) {
        if (nmeio < nmaior)
            printf("Ordem crescente: %d, %d, %d\n", nmenor, nmeio, nmaior);
        else
            printf("Ordem crescente: %d, %d, %d\n", nmenor, nmaior, nmeio);
    } else if (nmeio < nmenor && nmeio < nmaior) {
        if (nmenor < nmaior)
            printf("Ordem crescente: %d, %d, %d\n", nmeio, nmenor, nmaior);
        else
            printf("Ordem crescente: %d, %d, %d\n", nmeio, nmaior, nmenor);
    } else {
        if (nmenor < nmeio)
            printf("Ordem crescente: %d, %d, %d\n", nmaior, nmenor, nmeio);
        else
            printf("Ordem crescente: %d, %d, %d\n", nmaior, nmeio, nmenor);
    }


    return 0;
}