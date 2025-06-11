#include <stdio.h>

//18)	 Crie uma função chamada ‘hoje()’ que receba uma array de 3 elementos contendo uma data (dia, mês e ano). Então, a função deverá exibir a data no formato ‘dia/mês/ano’.

int i;
int tam = 3;
int dia, mes, ano;

int data[3] = {12, 8, 2005};

void hoje(){

    for(i = 0; i < tam; i++){

        dia = data[0];
        mes = data[1];
        ano = data[2];

    }
    
    printf("%d/%d/%d", dia, mes, ano);
}

int main(){
     
    hoje();


    return 0;
}