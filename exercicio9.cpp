#include <stdio.h>
#include <math.h>

/*
9. Faça um programa que peça 4 números reais e calcula:
    a. A média aritmética simples.
    b. A variância desses dados.
    c. O desvio padrão desses dados.
*/

int main(){
    float v1;
    float v2;
    float v3;
    float v4;


    printf("Digite 4 valores inteiros separados por um espaco\n");
    scanf("%f%f%f%f", &v1, &v2, &v3, &v4);

     //calculando media aritmetica simples
    float m = (v1 + v2 + v3 + v4)/4;

    printf("A média aritmetica simples desses números e igual a %f\n", m);

    //diferencas ao quadrado
    float d1 = pow((v1 - m), 2.0);
    float d2 = pow((v2 - m), 2.0);
    float d3 = pow((v3 - m), 2.0);
    float d4 = pow((v4 - m), 2.0);

    //soma das diferenças
    float soma_diferencas;
    soma_diferencas = d1 + d2 + d3 +d4;

    float variancia = soma_diferencas/3;

    printf("A variancia amostral econtrada utilizando esses numeros e: %f\n", variancia);

    //calculando o desvio padrão

    float desvio_padrao;
    desvio_padrao = pow(variancia, 0.5);

    printf("O desvio padrão encotrado utilizando esses numeros e %f", desvio_padrao);


    return 0;
}