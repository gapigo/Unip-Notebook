# Escreva um programa para aprovar o empréstimo bancário para compra de uma casa. O programa
# deve perguntar o valor da casa a comprar, o salário e a quantidade de anos a pagar. O valor da prestação 
# mensal não pode ser superior a 30% do salário. Calcule o valor da prestação como sendo o valor da casa a
# comprar dividido pelo numero de meses a pagar
from math import ceil

def ler_float(mensagem: str) -> float:
    while True:
        output = str(input(mensagem)).strip()
        try:
            return float(output.replace(',', '.'))
        except ValueError:
            print('Por favor insira um número real válido.')

def ler_inteiro(mensagem: str) -> int:
    while True:
        output = str(input(mensagem)).strip()
        if (output.replace('-','').isnumeric()):
            return int(output)
        print('Por favor insira um número inteiro válido.')


def main():
    print("Programa aprova seguro.")
    valor_casa: float = ler_float("Insira o VALOR DA CASA a se comprar: ")
    salario: float = ler_float("Agora, por favor insira o valor do SALÁRIO: ")
    anos: int = ler_inteiro("Por fim, insira a quantidade de ANOS que se deseja quitar a dívida: ")
    prestacao_mensal: float = valor_casa/(anos*12)
    if prestacao_mensal > salario*0.3:
        print(f"Emprestimo recusado! O valor de R${prestacao_mensal:.2f} da prestação é maior que R${salario*0.3:.2f} correspondente a 30% do salário.")
        print(f"Por este valor, você precisaria de pelo menos {ceil(valor_casa / (salario*3.6))} anos para o empréstimo ser aprovado.")
        print(f"Ou ganhar R${prestacao_mensal/0.3:.2f} de salário.")
    else:
        print(f"Emprestimo aprovado! Por causa do valor de R${prestacao_mensal:.2f} da prestação ser menor que R${salario*0.3:.2f} correspondente a 30% do salário, você tem direito ao empréstimo.")
    

if __name__ == "__main__":
    main()