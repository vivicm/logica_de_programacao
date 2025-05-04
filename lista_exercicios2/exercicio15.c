#include <stdio.h>
#include <math.h> // Para usar pow()

int main() {
    int terceiro_termo, razao, n, i;
    double primeiro_termo, termo_atual, soma = 0;

    // Entrada de dados
    printf("Digite o terceiro termo da PG: ");
    scanf("%d", &terceiro_termo);

    printf("Digite a razão da PG: ");
    scanf("%d", &razao);

    printf("Digite o número de termos (maior que 3): ");
    scanf("%d", &n);

    // Validação
    if (n <= 3) {
        printf("Erro: o número de termos deve ser maior que 3.\n");
        return 1;
    }

    // Cálculo do primeiro termo com base no terceiro termo e na razão (a3 = a1 * r^2)
    primeiro_termo = (double)terceiro_termo / (razao * razao);

    printf("\nOs %d primeiros termos da PG são:\n", n);

    // Cálculo e exibição dos termos + soma
    for (i = 0; i < n; i++) {
        termo_atual = primeiro_termo * pow(razao, i);
        printf("%.2lf ", termo_atual);
        soma += termo_atual;
    }

    printf("\n\nA soma dos %d primeiros termos da PG é: %.2lf\n", n, soma);

    return 0;
}
