#include <stdio.h>

//10. Faça um programa que, dados 3 números inteiros, mostre na tela o maior deles.

int main() {
    int v1 = 1;
    int v2 = 2;
    int v3 = 3;
    
    int numero_maior = v3;

    if(v2 > numero_maior){
        numero_maior = v2;
    }
    else{
        if(v3 > numero_maior){
        numero_maior = v3;
        }
    }
    
    printf("O maior numero e: %d", numero_maior);


    return 0;
}