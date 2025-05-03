#include <stdio.h>
#include <ctype.h> // Para toupper()

int main() {
    char letra;
    int n, i, j;

    // Entrada da letra
    printf("Digite a letra inicial do seu nome (A, B ou C): ");
    scanf(" %c", &letra);
    letra = toupper(letra); // Converte para maiúscula

    // Entrada do tamanho
    printf("Digite um número maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("Número inválido! Digite um número maior que 5.\n");
        return 1;
    }

    printf("\n");

    if (letra == 'A') {
        int meio = n / 2;
        for (i = 0; i < n; i++) {
            for (j = 0; j <= i; j++) {
                if (j == 0 || j == i || i == meio) {
                    printf("x");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (letra == 'B') {
        for (i = 0; i < n; i++) {
            printf("x"); // Primeira coluna sempre x
            for (j = 1; j < n / 2; j++) {
                if ((i == 0 || i == n - 1 || i == n / 2)) {
                    printf("x"); // Linhas do topo, meio e fim
                } else if (j == n / 2 - 1) {
                    printf("x"); // Borda direita
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    } else if (letra == 'C') {
        for (i = 0; i < n; i++) {
            printf("x"); // Primeira coluna sempre x
            for (j = 1; j < n; j++) {
                if (i == 0 || i == n - 1) {
                    printf("x"); // Topo e base
                } else {
                    printf(" "); // Espaço interno
                }
            }
            printf("\n");
        }
    } else {
        printf("Letra não suportada ainda. Tente A, B ou C.\n");
    }

    return 0;
}
