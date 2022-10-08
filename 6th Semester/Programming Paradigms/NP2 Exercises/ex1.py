# Escreva um programa no qual leia dois valores numéricos e imprima o maior deles. Caso ambos os
# números forem iguais, imprima na tela “números iguais”.

def ler_inteiro(mensagem: str) -> int:
    while True:
        output = str(input(mensagem)).strip()
        if (output.replace('-','').isnumeric()):
            return int(output)
        print('Por favor insira um número inteiro válido.')

def main():
    num1 = ler_inteiro('Digite um número inteiro: ')
    num2 = ler_inteiro('Agora digite outro: ')
    print('Números iguais' if num1 == num2 else f'O maior número é: {num1 if num1 > num2 else num2}')

if __name__ == "__main__":
    main()