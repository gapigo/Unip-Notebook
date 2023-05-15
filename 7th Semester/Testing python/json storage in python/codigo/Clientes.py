"""
Módulo: Clientes
Data: 11/05/23
Desenvolvedor: Valdemar alonso
Versão: 1.0
"""
from json_utils import get_clientes, update_clientes

def add_client():
    clientes = get_clientes()
    name = input("Nome do cliente: ")
    idade = int(input("Idade do cliente: "))
    cpf = input("Digite o cpf do cliente: ")
    if not(cpf in clientes):
        clientes[cpf] = {"nome": name, "idade": idade}
    else:
        resp = input("Cpf já existe, gostaria de editar (s/n)?: ")
        if resp.lower() == "s":
            edit_client(clientes)
    update_clientes(clientes)

def edit_client():
    clientes = get_clientes()
    cpf = input("Digite o cpf do cliente: ")
    if cpf in clientes:
        print("Dados atuais do cliente:")
        print(f"Nome: {clientes[cpf]['nome']}")
        print(f"Idade: {clientes[cpf]['idade']}")
        novo_nome = input("Digite o novo nome: ")
        nova_idade = input("Digite a nova idade: ")
        clientes[cpf]['nome'] = novo_nome
        clientes[cpf]['idade'] = nova_idade
        print("Digite os novos dados do cliente: ")
    else:
        print("Cpf não encontrado!!!.")
    update_clientes(clientes)

def del_client():
    clientes = get_clientes()
    cpf = input("Informe o cpf do cliente a ser deletado: ")
    if cpf in clientes:
        del clientes[cpf]
        print("Cliente removido com sucesso!")
    else:
        print("Cpf não encontrado, nada removido!!!.")
    update_clientes(clientes)
        
def find_client():
    clientes = get_clientes()
    cpf = input("CPF do cliente: ")
    if cpf in clientes:
        print(f"Cliente: {clientes[cpf]['nome']} ({clientes[cpf]['idade']} anos) - CPF: {cpf}")
        return cpf
    else:
        opcao = input("CPF inválido!! gostaria de outro(s/n)? ")
        if opcao.lower() == "s":
            return find_client(clientes)
        else:
            return

def list_clients():
    clientes = get_clientes()

    for k, v in clientes.items():
        print(f"Cliente: {v['nome']} ({v['idade']} anos) - CPF: {k}")

def menu():
    msg = "-- Módulo de Clientes --"
    print(len(msg) * "-")
    print(msg)
    print(len(msg) * "-")
    print("1. Cadastrar Cliente")
    print("2. Editar Cliente")
    print("3. Remover Cliente")
    print("4. Pesquisar Cliente")
    print("5. Listar Clientes")
    print("6. <-- Voltar")
    print(len(msg) * "-")
    return int(input("Digite sua opção: "))

def start():
    while True:
        op = menu()
        if op == 1:
            add_client()
        elif op == 2:
            edit_client()
        elif op == 3:
            del_client()
        elif op == 4:
            find_client()
        elif op == 5:
            list_clients()
        elif op == 6:
            return
        else:
            print("Opção inválida")

# if __name__ == '__main__':
#     clientes = {
#         "00697355900": {
#             "nome": "valdemar alonso",
#             "idade": 26
#         }
#     }
#     start(clientes)

"""
Estrutura do Cliente
"cpf": {
    "nome": str,
    "idade": int,
}
"""
