# – Escreva um programa que pergunte o deposito inicial e a taxa de juros de uma poupança. Exiba os
# valores mês a mês para os 24 primeiros meses. Escreva o total ganho com juros no período.
meses = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"]
montante = float(input('Digite o depósito inicial: '))
taxaJuros = float(input('Agora informa a taxa de juros (%): '))
taxaJuros /= 100
for i in range(24):
    montante *= (1+taxaJuros)
    print(f'{meses[i%12]} ano {i//12+1}: R${montante:.2f}')