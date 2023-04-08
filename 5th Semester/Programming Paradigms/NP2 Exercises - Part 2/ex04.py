# Escreva um programa que mostre os números de 1 até um numero digitado pelo usuário, mas, apenas
# os números impares.

for i in range(int(input('Até que número? '))+1):
    print(i, end=' ') if i % 2 == 1 else ''