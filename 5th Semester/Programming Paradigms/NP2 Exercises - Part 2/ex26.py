# Escreva um programa que calcule o resto da divisão inteira entre dois números. Utilize apenas as
# operações de soma e subtração para calcular o resultado.

num1 = int(input('Insira o primeiro número: '))
aux = num1
num2 = int(input('Insira o segundo número: '))

resto = 0
resultado = 0
while aux - num2 >= 0:
    aux -= num2
    resultado += 1
resto = aux
print(f"{num1} / {num2} tem resto {resto} e, só por curiosidade, dá {num1} / {num2} = {resultado}")
