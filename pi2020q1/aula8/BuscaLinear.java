import java.util.Scanner;

public class BuscaLinear
{
    public static void main(String[] args)
    {
        int vetor[], i, x, n, pos;
        Scanner scan = new Scanner(System.in);

        n = scan.nextInt();
        vetor = new int[n];
        for(i=0; i<n; i++)
        {
            vetor[i] = scan.nextInt();
        }
        x = scan.nextInt();

        pos = buscaLinear(vetor, n, x);

        if(pos != -1)
        {
            System.out.println("O elemento " + x + " estah na posicao " + pos + ".");
        }
        else
        {
            System.out.println("O elemento " + x + " nao estah no vetor.");
        }

    }

    public static int buscaLinear(int[] v, int n, int x)
    {
        int i;
        for(i=0; i<n; i++)
        {
            if(v[i] == x)
            {
                return i;
            }
        }
        return -1;
    }
}