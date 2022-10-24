# Escreva um programa que mostre os números de 1 até o numero digitado pelo usuário, mas, apenas
# os números múltiplos de 3. 

ran = int(input('Até que número? '))
for i in range(ran+1):
    if i % 3 == 0:
        print("%d" %i, end=" ")
