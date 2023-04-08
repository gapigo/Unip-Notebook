# Escreva um programa que exiba a tabuada do número digitado, onde o usuário possa escolher o inicio
# e o fim da tabuada.

tabuada = int(input("Digite o numero que se deseja mostrar a tabuada: "))
inicio = int(input("Digite o inicio da tabuada: "))
fim = int(input("Digite o fim da tabuada: "))
for i in range(inicio, fim+1):
    print(f"{tabuada} x {i} = {tabuada*i}")
    