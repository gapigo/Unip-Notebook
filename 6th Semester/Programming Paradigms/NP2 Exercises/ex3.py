# Escreva um programa que leia três números e que imprima o maior e o menor

def ler_inteiro(mensagem: str) -> int:
    while True:
        output = str(input(mensagem)).strip()
        if (output.replace('-','').isnumeric()):
            return int(output)
        print('Por favor insira um número inteiro válido.')

def main():
    print("Programa compara números (inteiros)")
    num1 = ler_inteiro('Digite o número 1: ')
    num2 = ler_inteiro('Digite o número 2: ')
    num3 = ler_inteiro('Digite o número 3: ')
    maior = max([num1, num2, num3])
    menor = min([num1, num2, num3])
    if (num1 == num2 == num3):
        print(f"Não tem menor ou maior, todos os números são {num1} iguais.")
    else:
        print(f"O menor número é {menor} e o maior é {maior}")
    

if __name__ == "__main__":
    main()