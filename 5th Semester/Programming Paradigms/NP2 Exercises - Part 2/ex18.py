# Modifique o programa da questão 16 para trabalhar com nota de R$ 100,00

cedulas = [100, 50, 20, 10, 4, 1]
valor = float(input('Digite um valor em R$'))
aux = int(valor)
print('O valor informado pode ser pago em ')
if aux <= 0:
    print('0 cédulas')
else:
    for cedula in cedulas:
        if (aux // cedula > 0):
            print(f"{aux//cedula:.0f} cédulas de R${cedula},00")
            aux = aux % cedula
        if aux <= 0:
            break
