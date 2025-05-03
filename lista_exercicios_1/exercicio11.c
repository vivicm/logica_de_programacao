#include <stdio.h>
 //11. Faça um programa que, dados 3 números inteiros, mostre na tela esses números em ordem crescente.


int main(){

    int nmaior; 
    int nmeio;  
    int nmenor; 
    
        printf("Digite o primeiro numero: ");
        scanf("%d", &nmenor);
        
        printf("Digite o segundo numero: ");
        scanf("%d", &nmeio);
        
        printf("Digite o terceiro numero: ");
        scanf("%d", &nmaior);
    

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