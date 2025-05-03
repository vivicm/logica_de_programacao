#include <stdio.h>

//14.Faça um programa que peça um número inteiro para o usuário e mostra a tabuada desse número.

int main() {
    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("\nTabuada de %d:\n", numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}