#include <stdio.h>

/*13)	Faça um programa que peça a razão e quarto termo de uma PA (progressão aritmética). Peça um número inteiro positivo n e mostra a soma dos n primeiros termos dessa PA.*/

int main() {
    int quarto_termo, razao, n;
    int primeiro_termo, soma, i;

    // Entrada dos dados
    printf("Digite o quarto termo da PA: ");
    scanf("%d", &quarto_termo);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    // Validação
    if (n <= 0) {
        printf("Erro: o número de termos deve ser positivo.\n");
        return 1;
    }

    // Calcula o primeiro termo da PA
    primeiro_termo = quarto_termo - 3 * razao;

    // Fórmula da soma dos n primeiros termos de uma PA: Sn = n/2 * (2a + (n - 1) * r)
    soma = n * (2 * primeiro_termo + (n - 1) * razao) / 2;

    // Exibe a soma
    printf("\nA soma dos %d primeiros termos da PA é: %d\n", n, soma);

    return 0;
}
