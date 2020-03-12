import java.util.Scanner;

public class Inverso
{
    public static void main(String[] args)
    {
        String palavra;
        Scanner scan = new Scanner(System.in);

        palavra = scan.next();
        while(palavra.toUpperCase().compareTo("FIM") != 0)
        {
            imprimePalavraInverso(palavra);
            palavra = scan.next();
        }
    }

    public static void imprimePalavraInverso(String s)
    {
        int i;
        for(i=s.length()-1; i>=0; i--)
        {
            System.out.print(s.charAt(i));
        }
        System.out.println();
    }
}