# 04) Escreve um programa que pergunte o salário do funcionário e calcule o valor do aumento. Para salários
# superiores a R$ 1250,00, calcule um aumento de 10%. Para os inferiores ou iguais, de 15%.

salario = float(input('Insira o salário do funcionário: '))
salario *= 1.15 if salario <= 1250 else 1.1
print(f'O salário com aumento ficou R${salario:.2f}')
