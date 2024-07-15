using System;

public class Program
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Digite o valor em reais: ");
        string valorEmReal = Console.ReadLine();

if (float.TryParse(valorEmReal, out float valorEmRealFloat))
        {
            float resultadoConvercao = valorEmRealFloat / 5.7f;

            Console.WriteLine($"{valorEmRealFloat} reais equivale a: {resultadoConvercao:F2} dolares ");
        }
        else
        {
            Console.WriteLine("Dados inválidos!");
        }
    }
}