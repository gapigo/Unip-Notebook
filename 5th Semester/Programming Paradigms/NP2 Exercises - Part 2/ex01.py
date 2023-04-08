# Escreva um programa que mostre os números de 1 a 100, utilizando o comando while.

i = 0
while i < 100:
    i += 1
    print(f"{i}", end=", " if i != 100 else '')
