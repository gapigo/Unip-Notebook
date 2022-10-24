# Escreva um programa que corrija um teste de múltiplas escolhas de três questões. A resposta da
# primeira questão a resposta é “b”; da segunda, “a”; e da terceira, “d”. O programa conta um ponto a cada
# resposta correta. Considere a possibilidade do programa aceitar respostas com letra maiúsculas e minúsculas
# em todas as questões.

respostas = 'bad'
nota = 0
print('Programa prova, insira o gabarito da')
for i, r in enumerate(respostas):
    nota += 1 if str(input(f'Questao {i+1}: '))[0].lower() == r else 0
print(f"Você tirou {nota}/3")
if nota == 3:
    print("Parabéns")
elif nota == 2:
    print("Bom.")
elif nota == 1:
    print("Tem que melhorar.")
else:
    print("Horroso!!!")