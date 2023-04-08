# Escreva um programa que verifique se um numero é palíndromo. Um número palíndromo se continua
# o mesmo caso seus dígitos sejam invertidos. Exemplo: 454, 10501.

def num_digitos(num):
    num = -num if num < 0 else num
    if num < 10:
        return 1
    if num < 100:
        return 2
    if num < 1000:
        return 3
    if num < 10000:
        return 4
    if num < 100000:
        return 5
    if num < 1000000:
        return 6
    if num < 10000000:
        return 7
    if num < 100000000:
        return 8
    return -1

num = int(input('Insira um número e confira se ele é palíndromo: '))
d = num_digitos(num)
digitos = []

divisor = 10**(d-1)
aux = num
for i in range(d):
    digitos.append(int(aux // divisor))
    aux -= (aux // divisor) * 10**(d-1-i)
    divisor /= 10

j = d - 1
palindromo = True
for i in range(d // 2 + 1):
    if (digitos[i] != digitos[j]):
        palindromo = False
    j -= 1

print("Não é palíndromo" if not palindromo else "É palíndromo")
