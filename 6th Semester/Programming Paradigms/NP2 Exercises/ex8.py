# Escreva um programa que leia dois números e que pergunte qual operação você deseja realizar. Você
# deve poder calcular soma (+), subtração (-), multiplicação (*) e divisão (/). Exiba o resultado da operação
# solicitada.

def main():
    print("Programa calculadora.")
    print("Adição: NUM1 + NUM2")
    print("Subtração: NUM1 - NUM2")
    print("Multiplicação: NUM1 * NUM2")
    print("Divisão: NUM1 / NUM2")
    print("Sair: Espaço vazio")
    expressao: str = 'a'
    while expressao:
        expressao = str(input(">> "))
        try:
            print(f"{expressao.strip()} = {float(eval(expressao)):.5f}")
        except:
            if expressao:
                print('Expressão inválida, tente novamente.')
            
    

if __name__ == "__main__":
    main()