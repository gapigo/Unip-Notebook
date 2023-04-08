# Reescreva o programa da questão 16 de forma a continuar executando até que o valor digitado seja 0.
# Utilize repetições aninhadas.

cedulas = [50, 20, 10, 4, 1]
valor = float(input('Digite um valor em R$'))
aux = int(valor)
vezes = atual = 0
while aux > 0:
    vezes = 0
    while aux - cedulas[atual] >= 0:
        aux -= cedulas[atual]
        vezes += 1
    if vezes > 0:
        print(f"{vezes} cédulas de R${cedulas[atual]},00")
    atual += 1
