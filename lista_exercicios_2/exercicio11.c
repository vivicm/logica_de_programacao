#include <stdio.h>

/*11)	Faça um programa que peça a razão e primeiro termo de uma PA (progressão aritmética). Peça um número inteiro positivo n e mostra os n primeiros termos dessa PA.*/

int main() {
    int primeiro_termo, razao, n, i;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &primeiro_termo);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite o número de termos que deseja ver (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O número de termos deve ser positivo.\n");
        return 1;
    }

    printf("\nOs %d primeiros termos da PA são:\n", n);
    for (i = 0; i < n; i++) {
        int termo_atual = primeiro_termo + i * razao;
        printf("%d ", termo_atual);
    }

    printf("\n");

    return 0;
}
