# Escreva um programa que pergunte a distância que um passageiro deseja percorrer em km. Calcule o
# preço da passagem, cobrando R$ 0,50 por km para viagens de até 200 km, e R$ 0,45 para viagens mais
# longas.

def ler_float(mensagem: str) -> float:
    while True:
        output = str(input(mensagem)).strip()
        try:
            return float(output.replace(',', '.'))
        except ValueError:
            print('Por favor insira um número real válido.')


def main():
    print("Programa descobrir valor da viagem.")
    distancia: float = ler_float("Insira a distância que se deseja percorrer em kilometros: ")
    valor_passagem = distancia * 0.5 if distancia <= 200 else distancia * 0.45
    print(f"O valor da passagem da sua viagem é R${valor_passagem:.2f}")


if __name__ == "__main__":
    main()