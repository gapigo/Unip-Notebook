# Escreva um programa que calcular a categoria de um produto e determine o preço pela tabela: Categoria
# 1 valor de R$ 10,00; Categoria 2 valor de R$ 15,00; Categoria 3 valor de R$ 19,00; Categoria 4 valor de R$
# 23,00 e Categoria 5 valor de R$ 27,00.

def ler_inteiro(mensagem: str) -> int:
    while True:
        output = str(input(mensagem)).strip()
        if (output.replace('-','').isnumeric()):
            return int(output)
        print('Por favor insira um número inteiro válido.')

def main():
    print("Programa consulta de preço da categoria do produto.")
    categoria: int = ler_inteiro("Insira o número de categoria do produto: ")
    print(f"O produto de categoria {categoria} ", end='')
    # Comando match: python >= 3.10
    match categoria:
        case 1:
            print('custa: R$10,00')
        case 2:
            print('custa: R$15,00')
        case 3:
            print('custa: R$19,00')
        case 4:
            print('custa: R$23,00')
        case 5:
            print('custa: R$27,00')
        case other:
            print("não foi encontrado.")


if __name__ == "__main__":
    main()