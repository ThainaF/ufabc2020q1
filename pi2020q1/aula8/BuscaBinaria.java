import java.util.Scanner;

public class BuscaBinaria
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

        pos = buscaBinaria(vetor, n, x);

        if(pos != -1)
        {
            System.out.println("O elemento " + x + " estah na posicao " + pos + ".");
        }
        else
        {
            System.out.println("O elemento " + x + " nao estah no vetor.");
        }

    }

    public static int buscaBinaria(int[] v, int n, int x)
    {
        int esq = 0, dir = n-1, meio;

        while(esq <= dir)
        {
            meio = (esq+dir)/2;
            if(v[meio] == x)
            {
                return meio;
            }
            else if(v[meio] > x)
            {
                dir = meio - 1;
            }
            else
            {
                esq = meio + 1;
            }
        }
        return -1;
    }
}