/* Desenvolver um programa que efetue o cálculo do salário líquido
de um profissional que trabalhe por hora.
Para isso é necessário ter os seguintes dados: valor da hora
trabalhada, quantidade de horas trabalhadas no mês e o percentual
de desconto do Imposto.

Entrada: valor da hora trabalhada, quantidade de horas trabalhadas
percentual de desconto

Processamento: Salario Bruto, Valor do Imposto, Salario Liquido

Saida: Salario Liquido

*/

import java.util.Scanner;

public class Salario
{
    public static void main(String[] args)
    {
        float vlHora, salBruto, salLiq, vlImposto;
        int qtHora, percDesc;
        Scanner scan = new Scanner(System.in);

        System.out.print("Informe o valor da hora trabalhada: R$");
        vlHora = scan.nextFloat();
        System.out.print("Informe a quantidade de horas trabalhadas: ");
        qtHora = scan.nextInt();
        System.out.print("Informe o percentual de desconto: ");
        percDesc = scan.nextInt();

        salBruto = vlHora * qtHora;
        vlImposto = (salBruto * percDesc) / 100;
        salLiq = salBruto - vlImposto;

        System.out.println("Salario Liquido eh R$" + salLiq);
    }
}
