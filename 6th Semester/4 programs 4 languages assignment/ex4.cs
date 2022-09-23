using System;
  
public class ex4 {

    static public float leitorFloat(string message) {
        float numberFloat;
        while (true)
        {
            Console.Write(message);
            if (float.TryParse(Console.ReadLine(), out numberFloat)) return numberFloat;
            Console.WriteLine("Valor inválido. Tente novamente.");
        }
    }

    static public void Main()
    {

        float salario = leitorFloat("Insira o salário do funcionário: ");
        salario *= salario > 1250 ? 1.1f : 1.15f;
        Console.WriteLine(string.Format("O salário com aumento ficou R${0:0.00}", salario));
    }
}