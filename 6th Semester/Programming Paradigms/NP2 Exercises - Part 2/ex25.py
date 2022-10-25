# Escreva um programa que calcule a raiz quadrada de um número. Utilize o método de Newton para
# obter um resultado aproximado. Sendo n o numero a obter a raiz quadrada, considera a base b=2. Calcule
# p usando a formula p=(b+(n/b))/2. Agora, calcule o quadrado de p. A cada passo, faça b=p e recalcule p
# usando a formula apresentada. Pare quando a diferença absoluta entre n e o quadrado de p for menor que
# 0,001.

n = float(input("Informe o número que se deseja consultar a raiz quadrada: "))
b = 2
d = 1
while d > 0.001:
    p = (b + (n / b)) / 2
    b = p
    d = n - p ** 2
    d = -d if d < 0 else d
print(f"√{n:.0f} ≅ {p:.4f}");
