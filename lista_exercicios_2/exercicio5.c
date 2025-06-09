#include <stdio.h>

/*
5)	Faça um programa que peça dois números inteiros positivos, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função ou o operador de potência da linguagem. (faça esse programa utilizando o while)
*/

int main() {
    int base, expoente, resultado = 1, contador = 0;

    // Solicitando os valores da base e do expoente
    printf("Digite a base (inteiro positivo): ");
    scanf("%d", &base);

    printf("Digite o expoente (inteiro positivo): ");
    scanf("%d", &expoente);

    // Verificando se são valores positivos
    if (base < 0 || expoente < 0) {
        printf("Erro: a base e o expoente devem ser inteiros positivos.\n");
        return 1;
    }

    // Calcula a potência usando multiplicação repetida com while
    while (contador < expoente) {
        resultado *= base;
        contador++;
    }

   
    printf("\nResultado: %d^%d = %d\n", base, expoente, resultado);

    return 0;
}
