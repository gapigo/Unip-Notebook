# 10–Escreva um programa que calcule o preço a pagar pelo fornecimento de energia elétrica. 
# Pergunte a quantidade de kWh consumida e o tipo de instalação: R para residencial, I para industrial e C para comércios.
# Calcule o preço a pagar de acordo com a tabela a seguir:
#  - Residencial: Até 500 kWh –R$ 0,40 e acima de 500 kWh –R$ 0,65. 
#  - Comercial: Até 1000 kWh –R$ 0,55 e acima de 1000 kWh –R$ 0,60. 
#  - Industrial: Até 5000 kWh –R$ 0,55 e acima de 5000 kWh –R$ 0,60. 

def ler_float(mensagem: str) -> float:
    while True:
        output = str(input(mensagem)).strip()
        try:
            return float(output.replace(',', '.'))
        except ValueError:
            print('Por favor insira um número real válido.')

def ler_tipo(mensagem: str) -> str:
    while True:
        output = str(input(mensagem)).strip().upper()
        if output == 'C' or output == 'R' or output == 'I':
            return output
        print("Valor inválido, insira somente [R, I ou C] por favor.\n")

def main():
    print("Programa calcula energia elétrica.")
    gasto: float = ler_float("Informe em kWh o gasto de energia: ")
    tipo: str = ler_tipo("Informe o tipo de instalação\nR - Residencial\nI - Industrial\nC - Comercios\n>> ")
    preco: float
    if tipo == 'R':
        preco = gasto * 0.4 if gasto <= 500 else gasto * 0.65
    elif tipo == 'C':
        preco = gasto * 0.55 if gasto <= 1000 else gasto * 0.6
    else:
        preco = gasto * 0.55 if gasto <= 5000 else gasto * 0.6
    print(f"O preço da conta de luz foi: R${preco:.2f}")
    

if __name__ == "__main__":
    main()
