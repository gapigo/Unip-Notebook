# – Escreva um programa que exiba a tabuada do número digitado de 0 a 10.

tabuada = int(input('Digite o número cuja tabuada deseja ser consultada: '))

for i in range(11):
    print(f'{tabuada} x {i} = {tabuada * i}')