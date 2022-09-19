import java.util.Scanner;

public class ex1
{
	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
		System.out.print("Qual a velocidade do carro: ");
		float velocidade = scanner.nextFloat();
		if (velocidade < 0) velocidade = -velocidade;
		if (velocidade <= 80) {
		    System.out.println("Velocidade abaixo de 80km/h. Você não foi multado (>ω<)");
		    return;
		}
		System.out.println("Velocidade acima do permitido!!!!! (# ﾟДﾟ)");
		System.out.format("Você pagará uma multa de R$%.2f", (velocidade-80)*5);
	}
}
