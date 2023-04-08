# – Escreva um programa que exiba uma lista de opções (menu): adição, subtração, divisão, multiplicação
# e sair. Imprima a tabuada da operação escolhida. Repita até que a opção saída seja escolhida.

import os

def mostrarOpcoes():
    print("Escolha uma opção:")
    print(" + | adição")
    print(" - | subtração")
    print(" x | multiplicação")
    print(" / | divisão")
    print(" q | sair")

def mostrarTabuada(operacao, operando):
    for i in range(1, 11):
        match operacao:
            case 1:
                print(f"{operando} + {i} = {operando + i}")
            case 2:
                print(f"{operando} - {i} = {operando - i}")
            case 3:
                print(f"{operando} x {i} = {operando * i}")
            case 4:
                print(f"{operando} ÷ {i} = {operando // i}")

opc = ''
while (opc != 'q'):
    print("Programa tabuada")
    num = int(input("Insira um número inteiro: "))
    mostrarOpcoes()
    opc = str(input(">> ")).strip().lower()
    match opc:
        case '+':
            mostrarTabuada(1, num)
        case '-':
            mostrarTabuada(2, num)
        case 'x':
            mostrarTabuada(3, num)
        case '/':
            mostrarTabuada(4, num)
        case other:
            print("Opção inválida, tente novamente")
    opc = str(input("(Digite nada para continuar e 'q' para sair)\n>> ")).strip().lower()
    os.system('cls' if os.name == 'nt' else 'clear')
    