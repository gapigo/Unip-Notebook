using System;
  
public class ex3 {

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

        int idade = leitorInt("Insira a idade: ");
        if (idade < 16) Console.WriteLine("Sem idade para votar");
        else if (idade < 18 || idade >=65) Console.WriteLine("Eleitor facultativo");
        else Console.WriteLine("Eleitor obrigatório");
    }
}