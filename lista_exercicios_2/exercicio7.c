#include <stdio.h>

/*7)	Faça um programa que peça um número inteiro positivo n e mostre os n primeiros números da sequência de Fibonacci.*/

int main() {
    int numero;


    printf("Digite um número inteiro para ver a tabuada: ");
    scanf("%d", &numero);

    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
