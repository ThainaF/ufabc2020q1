import java.util.Scanner;

public class Espaco
{
    public static void main(String[] args)
    {
        String palavra;
        int n, i;
        Scanner scan = new Scanner(System.in);

        n = scan.nextInt();
        for(i=0; i<n; i++)
        {
            palavra = scan.next();
            imprimePalavraEspaco(palavra);
        }
    }

    public static void imprimePalavraEspaco(String s)
    {
        int i;
        for(i=0; i<s.length(); i++)
        {
            if(i<s.length()-1)
            {
                System.out.print(s.charAt(i) + " ");
            }
            else
            {
                System.out.println(s.charAt(i));
            }
        }
    }
}