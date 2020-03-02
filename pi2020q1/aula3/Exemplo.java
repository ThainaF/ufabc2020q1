import java.util.Scanner;

public class Exemplo
{
    public static void main(String[] args)
    {
        float nota1, nota2, media;
        Scanner scan = new Scanner(System.in);

        nota1 = scan.nextFloat();
        nota2 = scan.nextFloat();
        media = (nota1+nota2)/2f;

        if(media >= 60f)
        {
            System.out.println("Aprovado");
        }
        else if(media >= 40f)
        {
            System.out.println("Exame Final");
        }
        else
        {
            System.out.println("Reprovado");
        }
    }
}