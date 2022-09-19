# Desenvolva um programa para determinar se o indivíduo está com um peso favorável. Essa situação é
# determinada através do IMC (Índice de Massa Corpórea) onde o IMC=peso/altura², que é definida como sendo
# a relação entre o peso (PESO) e o quadrado da Altura (ALTURA) do indivíduo de acordo com a equação e tabela
# ao lado:

print('Exemplo: 86.4 195')
peso = float(input('Insira seu peso em kg: '))
altura = float(input('Insira sua altura em cm: ')) / 100
imc = peso / altura ** 2

print(f'Seu IMC calculado foi: {imc:.1f}\nDe acordo a OMS, sua classificação é: ', end="")
if imc < 18.5:
    print('Abaixo do peso normal')
elif imc < 24.9:
    print('Peso normal')
elif imc < 29.9:
    print('Excesso de peso')
elif imc < 34.9:
    print('Obesidade classe I')
elif imc < 39.9:
    print('Obesidade classe II')
else:
    print('Obesidade classe III')