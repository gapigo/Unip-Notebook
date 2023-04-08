import java.util.Scanner;
import java.lang.Math;

public class ex2
{
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
		System.out.println("Exemplo: 86.4 195 ");
		System.out.print("Insira seu peso em kg: ");
		float peso = scanner.nextFloat();
		System.out.print("Insira sua altura em cm: ");
		float altura = scanner.nextInt();
		altura = altura / 100;

		float imc = peso / (float) Math.pow(altura, 2);
		
		System.out.format("Seu IMC calculado foi %.2f\nDe acordo a OMS, sua classificação é: ", imc);
		if (imc < 18.5) System.out.println("Abaixo do peso normal");
		else if (imc < 24.9) System.out.println("Peso normal");
		else if (imc < 29.9) System.out.println("Excesso de peso");
		else if (imc < 34.9) System.out.println("Obesidade classe I");
		else if (imc < 39.9) System.out.println("Obesidade classe II");
		else System.out.println("Obesidade classe III");
	}
}
