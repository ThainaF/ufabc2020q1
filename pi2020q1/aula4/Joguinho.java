import java.util.Scanner;
import java.util.Random;

public class Joguinho
{
    public static void main(String[] args)
    {
        Random gerador = new Random();
        Scanner scan = new Scanner(System.in);
        int numero, quantidade, chute;
        char resposta;

        do
        {
            numero = gerador.nextInt(10)+1;
            System.out.println("Advinhe o numero:");
            chute = scan.nextInt();
            quantidade = 1;
            while(chute != numero)
            {
                System.out.println("Errrrrouuu!!! Tente de novo:");
                chute = scan.nextInt();
                quantidade = quantidade + 1;
            }
            System.out.println("Voce acertou com " + quantidade + " tentativas.");

            do
            {
                System.out.print("Voce deseja continuar jogando? [S]im ou [N]ao ");
                resposta = scan.next().charAt(0);
                resposta = Character.toUpperCase(resposta);
            }while(resposta != 'S' && resposta != 'N');
        }while(resposta == 'S');
    }
}