/* Desenvolva um programa que leia a idade de uma pessoa e informe a sua classe eleitoral:
 ➢ não eleitor (abaixo de 16 anos);
 ➢ eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
 ➢ eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive). */
import java.util.Scanner;

public class ex3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
		System.out.println("Programa título de eleitor. Insira sua idade e diremos se você pode votar.");
		System.out.print("→ ");
		int idade = scanner.nextInt();
        if (idade < 16) System.out.println("Sem idade para votar");
        else if (idade < 18 || idade >= 65) System.out.println("Eleitor facultativo");
        else System.out.println("Eleitor obrigatório");
    }
}
