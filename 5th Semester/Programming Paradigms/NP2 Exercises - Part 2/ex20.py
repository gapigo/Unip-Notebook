# No programa da questão 19, o que acontece se digitarmos 0.001 no programa anterior? Caso ele não
# funcione, altere-o de forma a corrigir esse problema.

def fatorador(valor: float, cedulas: list):
    valor += 0.0005 # Retira aproximação ruim
    moedas: bool = True if valor < 1 else False
    aux = int(valor * 100) if moedas else int(valor)
    for cedula in cedulas:
        if (aux // cedula > 0):
            if moedas:
                print(f"{aux//cedula:.0f} moedas de R${(cedula/100):.2f}")
            else:
                print(f"{aux//cedula:.0f} cédulas de R${cedula},00")
            aux = aux % cedula
        if aux <= 0:
            break

valor = float(input('Digite um valor em R$'))
print('O valor informado pode ser pago em ')
if valor > 0 and valor < 0.01:
    print('1 moeda de R$0.01')
elif valor <= 0:
    print('0 cédulas')
else:
    cedulas = [50, 20, 10, 4, 1]
    moedas = [50, 10, 5, 2, 1]
    fatorador(valor, cedulas)
    fatorador(valor-int(valor), moedas)
