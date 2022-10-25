# Escreva um programa para controlar uma pequena maquina registradora. Você solicita o usuário que
# digite o código do produto e a quantidade comprada. Utilize a tabela de código a seguir para obter o preço
# de cada produtor.
# • Código 1 – Preço R$ 0,50
# • Código 2 – Preço R$ 1,00
# • Código 4 – Preço R$ 4,00
# • Código 5 – Preço R$ 7,00
# • Código 9 – Preço R$ 8,00
# Seu programa deve exibir o total das compras depois que o usuário digitar 0. Quaisquer outros códigos
# devem gerar a mensagem de erro “Código Invalido”.

import os

def getPreco(codigo: str):
    match codigo:
        case '1':
            print(" • Código 1 – Preço R$ 0,50\n")
            return 0.5
        case '2':
            print(" • Código 2 – Preço R$ 1,00\n")
            return 1
        case '4':
            print(" • Código 4 – Preço R$ 4,00\n")
            return 4
        case '5':
            print(" • Código 5 – Preço R$ 7,00\n")
            return 7
        case '9':
            print(" • Código 9 – Preço R$ 8,00\n")
            return 8
        case other:
            print("Código inválido! Tente novamente.\n")
            return 0

codigo = ''
total = 0
while (codigo != '0'):
    print("Insira os produtos de códigos: 1, 2, 4, 5, 9 (0 para parar)")
    codigo = str(input(">> "))
    os.system('cls' if os.name == 'nt' else 'clear')
    total += getPreco(codigo)
print(f"O preço total dos produtos informados foi R${total:.2f}")
