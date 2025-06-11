#include <stdio.h>


//17)	 Crie uma função que receba uma string com o nome do usuário como argumento e mostre na tela um texto com ‘Bom dia’ e o nome do usuário.

char nome;
void mostra_nome(){
    printf("Bom dia, %s!", &nome);
};

int main(){

    printf("Digite o seu nome:\n");
    scanf("%s", &nome);
    mostra_nome(nome);
    

    return 0;
}