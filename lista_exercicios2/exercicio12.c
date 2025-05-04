#include <stdio.h>

int main() {
    int terceiro_termo, razao, n, primeiro_termo, i;

    // Entrada dos dados
    printf("Digite o terceiro termo da PA: ");
    scanf("%d", &terceiro_termo);

    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    printf("Digite o número de termos (maior que 3): ");
    scanf("%d", &n);

    // Validação
    if (n <= 3) {
        printf("Erro: o número de termos deve ser maior que 3.\n");
        return 1;
    }

    // Cálculo do primeiro termo com base no terceiro termo
    primeiro_termo = terceiro_termo - 2 * razao;

    // Saída: mostra os n primeiros termos
    printf("\nOs %d primeiros termos da PA são:\n", n);
    for (i = 0; i < n; i++) {
        int termo_atual = primeiro_termo + i * razao;
        printf("%d ", termo_atual);
    }

    printf("\n");

    return 0;
}
