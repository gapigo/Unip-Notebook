# Escreva um programa que pergunte a velocidade do carro de um usuário. Caso ultrapasse 80 km/h,
# exiba uma mensagem dizendo que o usuário foi multado. Neste caso, exiba o valor da multa, cobrando R$
# 5,00 por km acima de 80 km/h

def ler_float(mensagem: str) -> float:
    while True:
        output = str(input(mensagem)).strip()
        try:
            return float(output.replace(',', '.'))
        except ValueError:
            print('Por favor insira um número real válido.')

def main():
    print("Programa calcula multas.")
    vel: float = ler_float("Insira o valor da velocidade: ")
    valor_multa: float = (vel - 80) * 5
    if valor_multa <= 0:
        print("Você não foi multado :3")
    else:
        print(f"Você ultrapassou o limite permitido e terá que pagar R${valor_multa:.2f}")
    

if __name__ == "__main__":
    main()