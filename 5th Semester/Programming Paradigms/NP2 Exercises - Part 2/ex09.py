# Escreva um programa que leia dois números. Imprima a divisão inteira do primeiro pelo segundo, assim
# como o resto da divisão. Utilize apenas os operadores de soma e subtração para calcular o resultado. Lembrese de que podemos entender o quociente da divisão de dois números como a quantidade de vezes que
# podemos retirar o divisor do dividendo. Logo, 20 ÷ 4 = 5, uma vez que podemos subtrair 4 cinco vezes de
# 20.

num1 = int(input('Digite o primeiro número: '))
num2 = int(input('Digite o segundo número: '))
resultado = resto = 0
negativo = False
anum1 = num1
anum2 = num2
if (num1 < 0 and num2 < 0):
    num1 = -num1
    num2 = -num2
else:
    if num1 < 0 or num2 < 0:
        negativo = True
        if num1 < 0:
            num1 = -num1
        else:
            num2 = -num2

aux = num1
while aux - num2 >= 0:
    aux = aux - num2
    resultado += 1

resto = aux

print(f"{anum1} ÷ {anum2} = {resultado if not negativo else -resultado} e resto {resto}")
