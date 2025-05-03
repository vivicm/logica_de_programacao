#include <stdio.h> 

int main() {
    int numero;             
    int positivos = 0;      
    int negativos = 0;       

    printf("Digite números inteiros (0 para parar):\n");

    while (1) { // Loop infinito até o usuário digitar 0
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero > 0) {
            positivos++; 
        } else {
            negativos++; 
        }
    }

    printf("\nTotal de números positivos: %d\n", positivos);
    printf("Total de números negativos: %d\n", negativos);

    // Compara os totais e informa qual grupo foi maior
    if (positivos > negativos) {
        printf("Foram digitados mais números positivos.\n");
    } else if (negativos > positivos) {
        printf("Foram digitados mais números negativos.\n");
    } else {
        printf("Foi digitada a mesma quantidade de números positivos e negativos.\n");
    }

    return 0; 
}