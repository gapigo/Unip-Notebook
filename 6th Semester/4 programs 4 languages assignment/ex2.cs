using System;
  
public class ex2 {

    static public float leitorFloat(string message) {
        float numberFloat;
        while (true)
        {
            Console.Write(message);
            if (float.TryParse(Console.ReadLine(), out numberFloat)) return numberFloat;
            Console.WriteLine("Valor inválido. Tente novamente.");
        }
    }

    static public int leitorInt(string message) {
        int numberInt;
        while (true)
        {
            Console.Write(message);
            if (int.TryParse(Console.ReadLine(), out numberInt)) return numberInt;
            Console.WriteLine("Valor inválido. Tente novamente.");
        }
    }
  
    static public void Main()
    {

        Console.WriteLine("Exemplo: 86.4 195");
        float peso = leitorFloat("Insira seu peso em kg: ");
        float altura = (float) leitorInt("Insira sua altura cm: ") / 100;
        float imc = peso / (altura * altura);
        Console.Write(string.Format("Seu IMC calculado foi: {0:0.0}\nDe acordo com a OMS, sua classificação é: ", imc));
        if (imc < 18.5) Console.WriteLine("Abaixo do peso normal");
        else if (imc < 24.9) Console.WriteLine("Peso normal");
        else if (imc < 29.9) Console.WriteLine("Excesso de peso");
        else if (imc < 34.9) Console.WriteLine("Obesidade classe I");
        else if (imc < 39.9) Console.WriteLine("Obesidade classe II");
        else Console.WriteLine("Obesidade classe III");
    }
}