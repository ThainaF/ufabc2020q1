import java.util.Scanner;

public class AreaCirc
{
    public static void main(String[] args)
    {
        float raio, area;
        Scanner scan = new Scanner(System.in);

        do
        {
            System.out.print("Informe o raio: ");
            raio = scan.nextFloat();
        }while(raio<=0);

        area = 3.1415f * raio * raio;
        System.out.println("Area: " + area);
    }
}