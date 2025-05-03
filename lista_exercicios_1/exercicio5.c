
"""
5. Sua tarefa é criar um programa em Python que pede o preço original de um produto e dá 20% de desconto.

    Você deve mostrar uma tabela contendo:    
a. Preço original do produto.  
b. Valor do desconto em R\$ (tipo 'Você ganho R$ xx,xx de desconto').  
c. Valor do produto com o desconto.
"""
#print("Hello World")

#print("Digite um número inteiro para ser o valor fictício para um carregador")
preco_original = int(input("Digite um número inteiro para ser o valor fictício para um carregador\n"))
print("O valor original do seu produto é de", preco_original , "reais.")
valor_desconto = preco_original * 0.20
print("Com base em um desconto de vinte por cento sobre o valor do produto, você receberá um desconto de", valor_desconto , "reais.\n")
preco_final = preco_original * 0.80
print("Com base nesse mesmo desconto, o preço final do produto será de", preco_final , "reais.\n")

print("Eis uma tabelinha com as informações acima:\n")

dados = [
    ["Preço original", "Valor do desconto", "Preço final"],
    [preco_original, valor_desconto, preco_final]
]

formato = "{:<10} {:<10} {:<10}"

for linha in dados:
    print(formato.format(linha[0], linha[1], linha[2]))