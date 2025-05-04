#include <stdio.h>

/*4)	Faça um programa que peça o valor total de um orçamento (valor igual ou maior do que R$100.00). Então, peça vários valores de serviço até chegar no valor total e mostre na tela o valor de cada serviço que será executado. Note que nem sempre será possível utilizar todo orçamento. Quando o valor do serviço estourar ou consumir todo orçamento, o programa deverá avisar que nenhum outro serviço poderá ser pedido.*/

int main() {
    float orcamento, servico, total_servicos = 0;
    int numero_servico = 1;

    // Solicitando o orçamento
    printf("Digite o valor total do orçamento (mínimo R$100.00): R$ ");
    scanf("%f", &orcamento);

    // Validação do orçamento mínimo
    if (orcamento < 100.0) {
        printf("Erro: o orçamento deve ser de no mínimo R$100.00.\n");
        return 1;
    }

    printf("\nOrçamento disponível: R$ %.2f\n", orcamento);
    printf("Digite os valores dos serviços. Digite um valor maior que o orçamento restante para encerrar.\n");

    // Laço para inserir serviços
    while (1) {
        printf("Valor do serviço %d: R$ ", numero_servico);
        scanf("%f", &servico);

        if (servico <= 0) {
            printf("Valor inválido. O serviço deve ter valor positivo.\n");
            continue;
        }

        if (total_servicos + servico > orcamento) {
            printf("\nOrçamento insuficiente para esse serviço.\n");
            printf("Nenhum outro serviço poderá ser pedido.\n");
            break;
        }

        // Atualiza o total e mostra
        total_servicos += servico;
        printf("Serviço %d aceito. Total utilizado: R$ %.2f. Orçamento restante: R$ %.2f\n",
               numero_servico, total_servicos, orcamento - total_servicos);
        numero_servico++;

        if (total_servicos == orcamento) {
            printf("\nOrçamento totalmente utilizado. Nenhum outro serviço poderá ser pedido.\n");
            break;
        }
    }

    printf("\nResumo: %d serviço(s) foram adicionados. Total gasto: R$ %.2f. Orçamento restante: R$ %.2f\n",
           numero_servico - 1, total_servicos, orcamento - total_servicos);

    return 0;
}
