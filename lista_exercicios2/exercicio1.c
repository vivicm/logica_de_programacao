#include <stdio.h>

/*1)	Faça um programa que peça números inteiros ao usuário e calcula a média dos valores digitados. O programa deverá parar quando o usuário digitar um número negativo (que não deverá ser incluído no cálculo).*/

int main(){ 

    int v1;
    int v2;
    int v3;
    
    printf("Digite tres valores, separe-os dando um espaco\n");
    scanf("%d%d%d" , &v1, &v2, &v3);

    if(v1 != 0 && v2 != 0 && v3 != 0){
    printf("media aritmetica = %d\n",  (v1 + v2 + v3) / 3);
} else{
    printf("voce digitou 0, insira os numeros novamente sem nenhum valor nulo");
}

    return 0;
}