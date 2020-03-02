import java.util.Scanner;

public class Fortorial
{
    public static void main(String[] args)
    {
        int numero, fatorial = 1, contador;
        Scanner scan = new Scanner(System.in);

        numero = scan.nextInt();

        for(contador=numero;contador>=1;contador=contador-1)
        {
            fatorial = fatorial * contador;
        }

        System.out.println(fatorial);
    }
}

/*
    public static void main(String[] args)
    {
        int numero, fatorial, contador;
        Scanner scan = new Scanner(System.in);

        for(contador=scan.nextInt(), fatorial=1;contador>=1;fatorial=fatorial*contador,contador=contador-1);

        System.out.println(fatorial);
    }
*/