import java.util.Scanner;

public class MaiorPalavra
{
    public static void main(String[] args)
    {
        String palavra, maiorPalavra="";
        boolean primeira = true;
        Scanner scan = new Scanner(System.in);

        while(scan.hasNext())
        {
            palavra = scan.next();
            if(primeira || palavra.length() > maiorPalavra.length())
            {
                maiorPalavra = palavra;
                primeira = false;
            }
        }
        System.out.println(maiorPalavra + " " + maiorPalavra.length());
    }
}