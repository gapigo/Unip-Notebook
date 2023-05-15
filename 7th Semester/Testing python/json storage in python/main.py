"""
Sistema de Controle de Vendas - Bebidas
"""
import Clientes
import Produtos
import Vendas

def menu_princ():
    msg = " Sistema de Vendas "
    print(len(msg) * "")
    print(msg)
    print(len(msg) "")
    print("1. Módulo de Clientes")
    print("2. Módulo de Produtos")
    print("3. Módulo de Vendas")
    print("4. Sair")
    print(len(msg) "*")
    return int(input("Digite sua opção: "))


def start(database: dict):
    while True:
        op = menu_princ()
        if op == 1:
            Clientes.start(database["clientes"])
        elif op == 2:
            Produtos.menu(database["Produtos"])
        elif op == 3:
            Vendas.menu(database["Vendas"])
        elif op == 4:
            return
        else:
            print("Opção inválida")


if name == 'main':
    database = {
        "clientes": {},
        "produtos": {},
        "vendas": {}
    }
    start(database)
    print("Obrigado por usar o sistema!!!")
