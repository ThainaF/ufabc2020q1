/*Ler a idade, altura, peso e sexo de 100
atletas, calcular a média da altura dos atletas
e a média do peso das atletas por sexo. */

import java.util.Scanner;

public class Atletas
{
    public static void main(String[] args)
    {
        int idades[] = new int[3], i, qtdMasc = 0, qtdFem = 0;
        float alturas[] = new float[3], somaAltMasc = 0;
        float pesos[] = new float[3], somaPesFem = 0;
        char generos[] = new char[3];
        Scanner scan = new Scanner(System.in);

        for(i=0; i<3; i++)
        {
            System.out.println("Informe os dados o " + (i+1) + "o. atleta.");
            System.out.print("Idade em anos       : ");
            idades[i] = scan.nextInt();
            System.out.print("Altura em metros    : ");
            alturas[i] = scan.nextFloat();
            System.out.print("Peso em quilogramas : ");
            pesos[i] = scan.nextFloat();
            do
            {
                System.out.print("Genero [M] ou [F]   : ");
                generos[i] = scan.next().charAt(0);
                generos[i] = Character.toUpperCase(generos[i]);
            }while(generos[i] != 'M' && generos[i] != 'F');

            if(generos[i] == 'M')
            {
                somaAltMasc = somaAltMasc + alturas[i];
                qtdMasc ++;
            }
            else
            {
                somaPesFem = somaPesFem + pesos[i];
                qtdFem ++;
            }
        }
        if(qtdMasc != 0)
        {
            System.out.println("A media das alturas dos atletas foi: " + (somaAltMasc/qtdMasc) + " metros.");
        }
        if(qtdFem != 0)
        {
            System.out.println("A media dos pesos das atletas foi: " + (somaPesFem/qtdFem) + " quilogramas.");
        }
    }
}