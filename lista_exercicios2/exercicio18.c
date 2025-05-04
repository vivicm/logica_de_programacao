#include <stdio.h>
#include <math.h> // Para usar a função sqrt()

int main() {
    int n, i;
    double soma = 0, media, desvio_padrao = 0;

    // Solicita o número de provas
    printf("Digite o número de provas: ");
    scanf("%d", &n);

    // Cria um vetor para armazenar as notas
    double notas[n];

    // Entrada das notas
    printf("Digite as notas das %d provas:\n", n);
    for (i = 0; i < n; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / n;

    // Cálculo do desvio padrão
    for (i = 0; i < n; i++) {
        desvio_padrao += pow(notas[i] - media, 2);
    }
    desvio_padrao = sqrt(desvio_padrao / n);

    // Exibe a média e o desvio padrão
    printf("\nA média das notas é: %.2lf\n", media);
    printf("O desvio padrão das notas é: %.2lf\n", desvio_padrao);

    return 0;
}
