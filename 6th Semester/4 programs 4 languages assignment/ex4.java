// 04) Escreve um programa que pergunte o salário do funcionário e calcule o valor do aumento. Para salários
// superiores a R$ 1250,00, calcule um aumento de 10%. Para os inferiores ou iguais, de 15%.

import java.util.Scanner;

public class ex4 {

    Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        ex4 obj = new ex4();
        float salario = obj.lerFloat();
        salario *= salario > 1250 ? 1.1 : 1.15;
        System.out.printf("O salário com aumento ficou R$%.2f\n", salario);
    }

    public float lerFloat() {
        while (true) {
            try {
                System.out.print("Insira o salário do funcionário: ");
                return this.scanner.nextFloat();
            } catch(Exception e) {
                System.out.println("Por favor insira um número real positivo válido. \nTente novamente.");
                this.scanner.nextLine(); // Pega a nova linha caso seja interrompido no meio da leitura anterior
            }
        }
    }
}
