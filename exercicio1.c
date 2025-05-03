#include <stdio.h> 

int main() {
    int anoNascimento, idade2025, ano50; 


    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento); // Lê o valor digitado e armazena em 'anoNascimento'

    // Calcula a idade que o usuário terá no final de 2025
    idade2025 = 2025 - anoNascimento;

    // Calcula o ano em que o usuário completará 50 anos de idade
    ano50 = anoNascimento + 50;


    printf("\nVocê terá %d anos no final de 2025.\n", idade2025);

  
    printf("Você fez ou fará 50 anos no ano de %d.\n", ano50);

    return 0; 
}