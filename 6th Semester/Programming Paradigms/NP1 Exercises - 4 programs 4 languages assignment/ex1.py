# Desenvolva um programa no Paradigma de Linguagem de Programação Estruturada que pergunte a velocidade
# do carro de um usuário. Caso ultrapasse 80 km/h, exiba uma mensagem dizendo que o usuário foi multado.
# Neste caso, exiba o valor da multa, cobrando R$ 5,00 por km acima de 80 km/h;

# Nota do programador: Quis usar o walrus operator para fazer graça
if ((velocidade := float(input('Qual a velocidade do carro: '))) > 80):
    print('Velocidade acima do permitido!!!!! (# ﾟДﾟ)')
    print(f'Você pagará uma multa de R${(velocidade-80)*5:.2f}')
else:
    print('Velocidade abaixo de 80km/h. Você não foi multado (>ω<)')
