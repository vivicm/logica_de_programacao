#include <stdio.h>

//21)	 Faça uma função chamada ‘mostra_array()’ que recebe um array e o valor N de elementos. Então, a função deverá mostrar esse array na tela.

int i;
int tam = 8;
int array[8] = {2, 6, 8, 10, 11, 13, 18, 19};

void mostra_array(){

    for (i = 0; i < tam; i++){

        printf("%d ", array[i]);
       
    }
    

}

int main(){

    mostra_array();

    return 0;
}