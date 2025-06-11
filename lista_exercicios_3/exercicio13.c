
#include <stdio.h>
  
  //13)	 Crie uma matriz 3x3 e mostre seus elementos na tela (mostre em 3 linhas).

int l;
int c;
int tam = 3;

int matriz[3][3] = {1, 2, 3,4, 5, 6, 7, 8, 9};


/*
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
*/

int main() {
 
    printf("Matriz 3x3:\n");
    for(l = 0; l < tam; l++) {
        for(c = 0; c < tam; c++) {
            printf("%d ", matriz[l][c]);
        }
        printf("\n"); 
    }

    //printf("%d ", matriz[i][j]);

    return 0;
}


    