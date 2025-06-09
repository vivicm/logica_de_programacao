#include <stdio.h>

/*6)	Faça um programa que peça um número inteiro e mostre a tabuada desse número na tela. Faça utilizando o for. (Essa tarefa poderia ser feita utilizando o while? Por quê?)*/

int main() {
    int numero;

    printf("Digite um número inteiro para ver sua tabuada: ");
    scanf("%d", &numero);


    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
