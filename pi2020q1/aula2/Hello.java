import java.util.Scanner;

public class Hello
{
    public static void main(String[] args)
    {
        String nome;
        Scanner scan = new Scanner(System.in);

        System.out.print("Digite seu nome: ");
        nome = scan.next();

        System.out.println("Hello " + nome + "!");
    }
}