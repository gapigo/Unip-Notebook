# Escreve um programa que pergunte o salário do funcionário e calcule o valor do aumento. Para salários
# superiores a R$ 1250,00, calcule um aumento de 10%. Para os inferiores ou iguais, de 15%.

def ler_float(mensagem: str) -> float:
    while True:
        output = str(input(mensagem)).strip()
        try:
            return float(output.replace(',', '.'))
        except ValueError:
            print('Por favor insira um número real válido.')

def main():
    print("Programa calcula aumento de salários.")
    # Walrus operator! O seguinte programa funciona do python 3.8 para frente. Feito para tirar onda.
    #print("O salário com aumento ficará R$%.2f." % (sal * 1.15 if (sal := ler_float('Digite um salário: ')) <= 1250 else sal*1.1))
    print("O salário com aumento ficará R$%.2f." % (sal * 1.15 if (sal := float(input('Digite um salário: '))) <= 1250 else sal*1.1))

if __name__ == "__main__":
    main()
