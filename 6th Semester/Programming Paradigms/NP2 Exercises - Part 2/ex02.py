# – Escreva um programa que mostre os números de 50 a 100, utilizando o comando while.

i = 50
while i <= 100:
    print(i, end=', ' if i != 100 else '')
    i += 1
    