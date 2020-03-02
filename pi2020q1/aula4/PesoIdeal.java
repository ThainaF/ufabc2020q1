import java.util.Scanner;

public class PesoIdeal
{
    public static void main(String[] args)
    {
        float altura, peso;
        char genero;
        Scanner scan = new Scanner(System.in);

        altura = scan.nextFloat();
        do
        {
            genero = scan.next().charAt(0);
            genero = Character.toUpperCase(genero);
        }while(genero!='M' && genero!='F');

        if(genero == 'M')
        {
            peso = (72.2f * altura) - 58f;
        }
        else
        {
            peso = (62.1f * altura) - 44.7f;
        }

        System.out.println(peso);
    }
}