import java.util.Scanner;

public class BubbleSort
{
    public static void main(String[] args)
    {
        int vetor[], i, n;
        Scanner scan = new Scanner(System.in);

        n = scan.nextInt();
        vetor = new int[n];
        for(i=0; i<n; i++)
        {
            vetor[i] = scan.nextInt();
        }

        bubbleSort(vetor, n);

        for(i=0; i<n; i++)
        {
            System.out.print(vetor[i] + " ");
        }
    }

    public static void bubbleSort(int[] v, int n)
    {
        int i, j, aux;
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(v[j] > v[j+1])
                {
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                }
            }
        }
    }
}