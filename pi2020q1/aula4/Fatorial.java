import java.util.Scanner;

public class Fatorial
{
    public static void main(String[] args)
    {
        int numero, fatorial = 1, contador;
        Scanner scan = new Scanner(System.in);

        numero = scan.nextInt();

        contador = numero;
        while(contador >= 1)
        {
            fatorial = fatorial * contador;
            contador = contador - 1;
        }
        System.out.println(fatorial);
    }
}