#include <stdio.h>

/*9)	Faça um programa que peça um número inteiro e determine se esse número é um número primo. (Um número é primo se ele for divisível somente por ele mesmo e por 1).*/

int main() {
    int numero, i, ehPrimo = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    //  os casos menores que 2
    if (numero < 2) {
        ehPrimo = 0; // Números menores que 2 não são primos
    } else {
        // Verifica se o número tem algum divisor além de 1 e ele mesmo
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

 
    if (ehPrimo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
