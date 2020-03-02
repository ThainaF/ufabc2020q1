import java.util.Scanner;

public class DivExata
{
    public static void main(String[] args)
    {
        int n1, n2;
        Scanner scan = new Scanner(System.in);

        n1 = scan.nextInt();
        n2 = scan.nextInt();

        if(n1%n2==0)
        {
            System.out.println("A divisao de " + n1 + " por " + n2 + " eh exata!");
        }
    }
}