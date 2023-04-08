# Escreva um programa que leia números inteiros do teclado. O programa deve ler os números até que
# o usuário digite 0 (zero). No final da execução, exiba a quantidade de números digitados, assim como a soma
# e a média aritmética. 

num = 1
quantidade = 0
total = 0
while (num != 0):
    num = int(input('(0 para parar)\nInsira numeros: '))
    total += num
    quantidade += 1

print(f'Você inseriu {quantidade} números e estes somam {total}')
