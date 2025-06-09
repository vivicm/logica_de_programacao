#include <stdio.h>
/*
    Faça um programa que peça a informação se o usuário é homem ou mulher, o peso, a altura e a idade e mostre na tela o TMB em calorias.   
A Taxa Metabólica Basal (TMB) é a quantidade mínima de energia que o corpo precisa para manter as funções vitais, como respiração, circulação e temperatura corporal, em repouso. A TMB representa cerca de 60% a 70% do gasto energético total diário de uma pessoa e varia de acordo com o sexo, a idade, o peso e a altura.

    Para calcular a TMB manualmente, você deve usar as seguintes fórmulas da equação de Harris-Benedict:

    Para homens: TMB = 66,47 + (13,75 x peso em kg) + (5,003 x altura em cm) - (6,755 x idade em anos)
    
    Para mulheres: TMB = 655,09 + (9,563 x peso em kg) + (1,85 x altura em cm) - (4,676 x idade em anos)  
     

*/
int main(){

    char sexo[50];

    printf("Informe se você é homem ou mulher, seu peso, sua altura e sua idade\n");
    scanf("%s", sexo);
    printf("voce e: ", sexo);

    return 0;

}