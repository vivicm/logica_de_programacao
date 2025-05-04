#include <stdio.h>

/*10)	 Faça um programa que peça dois números inteiros positivos e mostra o máximo divisor comum (MDC) e o mínimo múltiplo comum (MMC) desses números.*/

// Função para calcular o MDC usando o algoritmo de Euclides
int calcularMDC(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, mdc, mmc;

  
    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);

    // Verifica se os números são positivos
    if (num1 <= 0 || num2 <= 0) {
        printf("Os dois números devem ser inteiros positivos.\n");
        return 1;
    }

    // Cálculo do MDC
    mdc = calcularMDC(num1, num2);

    // Cálculo do MMC 
    mmc = (num1 * num2) / mdc;

    // Mostra os resultados
    printf("\nMáximo Divisor Comum (MDC) de %d e %d: %d\n", num1, num2, mdc);
    printf("Mínimo Múltiplo Comum (MMC) de %d e %d: %d\n", num1, num2, mmc);

    return 0;
}
