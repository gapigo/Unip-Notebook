# Escreva um programa que leia um numero e verifique se é ou não um numero primo. Para fazer essa
# verificação, calcule o resto da divisão do numero por 2 e depois por todos os números impares até o numero
# lido. Se o resto de uma dessas divisões for igual a zero, o numero não é primo. Observe que 0 e 1 não são
# primos e que 2 é o único número primo que é par. 

num = int(input('Digite um número inteiro para conferir se ele é primo: '))
num = -num if num < 0 else num
i = 1
first_do = True
primo = True
while (first_do or (i <= (num // 2) + 1)):
    first_do = False
    if((i != 1 and num % i == 0) or num < 2 or (num != 2 and num % 2 == 0)):
        print("Não é primo")
        primo = False
        break
    i += 2
if primo:
    print('É primo')
        