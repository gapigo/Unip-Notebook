# Escreva um programa que leia dois números. Imprima o resultado da multiplicação do primeiro pelo
# segundo. Utilize apenas os operadores de soma e subtração para calcular o resultado. Lembre-se de que
# podemos entender a multiplicação de dois números como a soma sucessivas de um deles. Assim, 4 x 5 = 5
# + 5 + 5 + 5 = 4 + 4 + 4 + 4 + 4.

num1 = int(input('Digite o primeiro número: '))
num2 = int(input('Digite o segundo número: '))
negativo = False
if num2 < 0:
    negativo = True
    num2 = -num2
res = 0
for i in range(num2):
    res += num1 if not negativo else -num1
print(f"{num1} x {num2} = {res}")