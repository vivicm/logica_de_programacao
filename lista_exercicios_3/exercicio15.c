#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//15)	 Faça um programa que dados LINHAS, o número de linhas, e COLUNAS, o número de colunas, preencha uma matriz de ordem LINHAS x COLUNAS com números inteiros aleatórios variando entre 0 e 10. Utilize a biblioteca stdlib.h e as funções rand e srand para executar essa tarefa.

int l = 3;
int c = 3;
int linhas;
int colunas;
int matriz[3][3];

/*void num_linhas_colunas(){
    printf("Digite um valor para ser o numero de linhas e depois um valor para ser o numero de colunas da sua matriz");
    scanf("%d", &linhas);
    scanf("%d", &colunas);
}
    Tentativa mal-sucedida de pedir o n de linhas e colunas pro usuário
*/

int main(){

    srand(time(NULL));
    //num_linhas_colunas();

    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            matriz[l][c] = rand() %10;
            printf("%d ", matriz[l][c]);
        }

        printf("\n");

    }



    return 0;
}