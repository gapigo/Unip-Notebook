
B = 'Valdemar Alonso'
C = ['banana', 'abacaxi', 'abacate', 'maracujá']
D = ('joaozinho', 'claudeilto', 'valdisney', 'oscar', 'paralelepideilto')

print(len(D))

for elemento in A:
    print(elemento*9)

item = '4'
if item in A:
    print('Está')
else:
    print('Não está')

for i in range(0, len(A)):
    print(i)

pessoa = {
    'nome': 'Valdemar',
    'idade': 26,
    'cpf': '981981981981'
}

# A = {0, 1, 2, 3, 4, 5, 6}
# print(pessoa['nome'])
lista = ['banana', 'abacaxi', 'abacate', 'maracujá']
lista[2] = 'jaca'
# print(lista)
tupla = ('joaozinho', 'claudeilto', 'valdisney', 'oscar', 'paralelepideilto')
# tupla[2] = 'jaca'
print(tupla[2])
# print(C[4])

def input(valor_que_aparece_pro_usuario):
    ...
    # return o_que_usuario_digitar

    