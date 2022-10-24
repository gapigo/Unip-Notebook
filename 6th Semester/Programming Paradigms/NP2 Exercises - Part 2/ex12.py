# Altere o programa anterior de forma a perguntar também o valor depositado mensalmente. Esse valor
# será depositado no inicio de cada mês, e você deve considera-lo para o calculo de juros do mês seguinte
meses = ["Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"]
montante = float(input('Digite o depósito inicial: '))
taxaJuros = float(input('Agora informe a taxa de juros (%): '))
taxaJuros /= 100
for i in range (24):
    montante *= 1 + taxaJuros
    print(f'{meses[i%12]}-{i//12+1}: R${montante:.2f}', end=" | ")
    try:
        montante += float(input('Depositar este mês? (Branco para não) R$'))
    except ValueError:
        pass
