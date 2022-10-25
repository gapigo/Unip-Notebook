# Escreva um programa que leia um valor e que imprima a quantidade de cédulas necessárias para pagar
# esse mesmo valor. Para simplificar utilize números inteiros e com cédulas de R$50, R$20, R$10, R$4 e R$1.
# Após concluído, testes com os seguintes valores: 50, 745, 384, 2, 7 e 1.

cedulas = [50, 20, 10, 4, 1]
valor = float(input('Digite um valor em R$'))
aux = valor
print("O valor informado pode ser pago em: ")
if aux <= 0:
    print('0 cédulas')
else:
    for cedula in cedulas:
        if (aux // cedula > 0):
            print(f"{aux // cedula:.0f} cédulas de R${cedula},00.")
            aux = aux % cedula
        if aux <= 0:
            break
