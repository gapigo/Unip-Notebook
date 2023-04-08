# Escreva um programa que pergunte o valor inicial de uma divida e o juros mensal. Pergunte também o
# valor mensal que será pago. Imprima o úmero de meses para que a divida seja paga, o total pago e o total
# de juros pago. 

valor_inicial = float(input('Informe o valor inicial da dívida: R$'))
juros = float(input('Informe o valor dos juros da dívida (%): '))
valor_mensal = float(input('Informe qual é o valor mensal que será pago: R$'))
montante_divida = valor_inicial
juros /= 100
if montante_divida * juros > valor_mensal:
    print("Não é possível pagar a dívida com este valor. É necessário um valor maior")
else:
    meses = 0
    total_pago = 0
    total_em_juros = 0
    while montante_divida > 0:
        montante_divida *= (1 + juros)
        montante_divida -= valor_mensal
        if montante_divida < 0:
            total_pago += valor_mensal - montante_divida
        else:
            total_pago += valor_mensal
        meses += 1
    print(f"A dívida será paga em {meses} meses, com o total de R${total_pago:.2f} sendo R${total_pago - valor_inicial:.2f} em juros")
