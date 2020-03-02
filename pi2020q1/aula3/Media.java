import java.util.Scanner;

public class Media
{
    public static void main(String[] args)
    {
        float media, nota;
        int i;
        Scanner scan = new Scanner(System.in);

        media = 0;
        i = 0;

        while(i<10)
        {
            nota = scan.nextFloat();
            media = media + nota;
            i = i + 1;
        }
        media = media / 10;
        System.out.printf("%.2f\n", media);
    }
}