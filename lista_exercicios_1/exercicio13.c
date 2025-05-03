#include <stdio.h>
#include <string.h>

int main() {
    char sexo[10];
    float peso, altura, tmb;
    int idade;

    printf("Você é homem ou mulher? ");
    scanf("%s", sexo);

    if (strcmp(sexo, "homem") != 0 && strcmp(sexo, "mulher") != 0) {
        printf("Sexo inválido. Por favor, digite 'homem' ou 'mulher'.\n");
        return 1;
    }

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em cm: ");
    scanf("%f", &altura);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //calculando a TMB
    
    if (strcmp(sexo, "homem") == 0) {
        tmb = 66 + (13.7 * peso) + (5 * altura) - (6.8 * idade);
    } else {
        tmb = 655 + (9.6 * peso) + (1.8 * altura) - (4.7 * idade);
    }

    printf("Sua Taxa Metabólica Basal (TMB) é aproximadamente %.2f calorias por dia.\n", tmb);

    return 0;
}