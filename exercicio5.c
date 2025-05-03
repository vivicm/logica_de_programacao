#include <stdio.h>
#include <ctype.h> // Para toupper()

int main() {
    char letra;
    int n, i, j;

    printf("Digite a letra inicial do seu nome (A, B, C, D, E, F, H, I, L, O, U, V, X, Y, Z): ");
    scanf(" %c", &letra);
    letra = toupper(letra); // Converte para maiúscula

    printf("Digite um número maior que 5: ");
    scanf("%d", &n);

    if (n <= 5) {
        printf("Número inválido! Digite um número maior que 5.\n");
        return 1;
    }

    printf("\n");

    switch (letra) {
        case 'A':
            for (i = 0; i < n; i++) {
                for (j = 0; j <= i; j++) {
                    if (j == 0 || j == i || i == n / 2) printf("x");
                    else printf(" ");
                }
                printf("\n");
            }
            break;

        case 'B':
            for (i = 0; i < n; i++) {
                printf("x");
                for (j = 1; j < n / 2; j++) {
                    if (i == 0 || i == n - 1 || i == n / 2 || j == n / 2 - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'C':
            for (i = 0; i < n; i++) {
                printf("x");
                for (j = 1; j < n; j++) {
                    if (i == 0 || i == n - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'D':
            for (i = 0; i < n; i++) {
                printf("x");
                for (j = 1; j < n / 2; j++) {
                    if (i == 0 || i == n - 1 || j == n / 2 - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'E':
            for (i = 0; i < n; i++) {
                printf("x");
                for (j = 1; j < n / 2; j++) {
                    if (i == 0 || i == n / 2 || i == n - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'F':
            for (i = 0; i < n; i++) {
                printf("x");
                for (j = 1; j < n / 2; j++) {
                    if (i == 0 || i == n / 2)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'H':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n / 2; j++) {
                    if (j == 0 || j == n / 2 - 1 || i == n / 2)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'I':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n / 2; j++) {
                    if (i == 0 || i == n - 1)
                        printf("x");
                    else if (j == n / 4)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'L':
            for (i = 0; i < n; i++) {
                printf("x");
                for (j = 1; j < n / 2; j++) {
                    if (i == n - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'O':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n / 2; j++) {
                    if ((i == 0 || i == n - 1) && j > 0 && j < n / 2 - 1)
                        printf("x");
                    else if (j == 0 || j == n / 2 - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'U':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n / 2; j++) {
                    if ((j == 0 || j == n / 2 - 1) && i != n - 1)
                        printf("x");
                    else if (i == n - 1 && j > 0 && j < n / 2 - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'V':
            for (i = 0; i < n; i++) {
                for (j = 0; j <= n; j++) {
                    if (j == i && i <= n / 2)
                        printf("x");
                    else if (j == n - i && i <= n / 2)
                        printf("x");
                    else if (i > n / 2 && (j == n / 2))
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'X':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (j == i || j == n - i - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'Y':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if ((i <= n / 2 && (j == i || j == n - i - 1)) || (i > n / 2 && j == n / 2))
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        case 'Z':
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (i == 0 || i == n - 1 || j == n - i - 1)
                        printf("x");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Letra não suportada ainda.\n");
    }

    return 0;
}
