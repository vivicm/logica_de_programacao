#include <stdio.h>
#include <math.h>

/*
8. Faça um programa que peça 4 valores positivos e calcula:
    a. A média aritmética simples.
    b. A média geométrica.
    c. A média harmônica
*/
int main() {
    int v1;
    int v2;
    int v3;
    int v4;


     printf("Digite 4 valores inteiros separados por um espaco\n");
    scanf("%d%d%d%d", &v1, &v2, &v3, &v4);


    //calculando media aritmetica simples


    printf("A média aritmetica simples desses números e igual a %d\n", (v1 + v2 + v3 +v4)/4);



    //calulando a media geometrica

    double media_geometrica;
    double base = v1 * v2 * v3 * v4;
    media_geometrica = pow( base, 1.0/4.0);
    printf("A média geometrica desses números e igual a %lf\n", media_geometrica );


    //calulando a média harmônica

    double soma_inversos;

    soma_inversos = 1/(float)v1 + 1/(float)v2 + 1/(float)v3 + 1/(float)v4;

    printf("A media harmonica desses numeros e: %lf\n", 4/soma_inversos);


    return 0;
}