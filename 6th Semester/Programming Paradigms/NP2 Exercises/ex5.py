# – Execute o programa no qual o usuário entre com a idade do carro e caso o valor seja menor ou igual a
# 3 anos imprima “Seu carro é novo”, caso contrario “Seu carro é velho”

def ler_inteiro(mensagem: str) -> int:
    while True:
        output = str(input(mensagem)).strip()
        if (output.replace('-','').isnumeric()):
            return int(output)
        print('Por favor insira um número inteiro válido.')

def main():
    print("Programa classificação da idade do seu carro")
    idade = ler_inteiro('Digite a idade do seu carro: ')
    if idade <= 3:
        print("Seu carro é novo")
    else:
        print("Seu carro é velho")

if __name__ == "__main__":
    main()