# – Modifique o programa anterior de forma a ler um numero n. Imprima os n primeiros números primos.

def ehPrimo(num):
    i = 1
    first_do = True
    while (first_do or i <= (num / 2) + 1):
        first_do = False
        if ((i != 1 and num % i == 0) or num < 2 or (num != 2 and num % 2 == 0)):
            return False
        i += 2
    return True

num = int(input('Digite até quanto se quer conferir os números primos: '))
num = -num if num < 0 else num
for i in range(num):
    print(f'{i} ' if ehPrimo(i) else '', end='')
