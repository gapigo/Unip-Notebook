using System;
  
public class ex1 {

    static public float leitor(string message) {
        float number;
        while (true)
        {
            Console.Write(message);
            if (float.TryParse(Console.ReadLine(), out number)) return number;
            Console.WriteLine("Valor inválido. Tente novamente.");
        }
    }
  
    static public void Main()
    {

        //Console.Write("Qual a velocidade do carro:  ");
        float velocidade = leitor("Qual a velocidade do carro: ");
        
        if (velocidade < 80) {
            Console.WriteLine("Velocidade abaixo de 80km/h. Você não foi multado (>ω<)");
            return;
        }
        float multa = (velocidade - 80) * 5;
        Console.WriteLine("Velocidade acima do permitido!!!!! (# ﾟДﾟ)");
        Console.WriteLine(string.Format("Você pagará uma multa de R${0:0,00}", multa));
    }
}