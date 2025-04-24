

#6. Generalize o problema anterior, perguntando a porcentagem de desconto e mostrando os mesmos dados acima.

#print("Hello World")

#print("Digite um número inteiro para ser o valor fictício para um carregador")
preco_original = int(input("Digite um número inteiro para ser o valor fictício de um produto.\n"))
valor_desconto = float(input("Digite um número inteiro, até 100,  para ser o valor de desconto.\n"))
print("O valor original do seu produto é de", preco_original , "reais.")
valor_desconto_reais = preco_original * (valor_desconto / 100)
print("Com base em um desconto de vinte por cento sobre o valor do produto, você receberá um desconto de", valor_desconto_reais , "reais.\n")
preco_final = preco_original * ((100 - valor_desconto) / 100)
print("Com base nesse mesmo desconto, o preço final do produto será de", preco_final , "reais.\n")

print("Eis uma tabelinha com as informações acima:\n")

dados = [
    ["Preço original", "Valor do desconto(R$)", "Preço final"],
    [preco_original, valor_desconto_reais, preco_final]
]

formato = "{:10} {:10} {:20}"

for linha in dados:
    print(formato.format(linha[0], linha[1], linha[2]))