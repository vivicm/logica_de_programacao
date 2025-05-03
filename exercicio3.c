#include <stdio.h> 

int main() {
    char unidade;           
    float temperatura;      
    float convertida;      

   
    printf("A temperatura está em Celsius (C) ou Fahrenheit (F)? ");
    scanf(" %c", &unidade);


    printf("Digite o valor da temperatura: ");
    scanf("%f", &temperatura);

    // Verificando a unidade e fazendo a conversão:
    if (unidade == 'C' || unidade == 'c') {
        // Fórmula: F = C * 9/5 + 32
        convertida = temperatura * 9.0 / 5.0 + 32;
        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", temperatura, convertida);
    } else if (unidade == 'F' || unidade == 'f') {
        // Fórmula: C = (F - 32) * 5/9
        convertida = (temperatura - 32) * 5.0 / 9.0;
        printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperatura, convertida);
    } else {
        // Entrada inválida
        printf("Unidade inválida! Use apenas 'C' ou 'F'.\n");
    }

    return 0;
}