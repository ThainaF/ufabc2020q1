#include <stdio.h>
#include <stdlib.h>

struct data
{
    int dia, mes, ano;
};

struct aluno
{
    char nome[100];
    struct data aniversario;
    int qtNotas;
    float *notas;
};

float calcMedia(struct aluno);
void ordenaMedia(struct aluno *, int);

int main()
{
    int n, i, j;
    struct aluno *turma;

    scanf("%d", &n);
    turma = (struct aluno*) malloc(n*sizeof(struct aluno));

    for(i=0; i<n; i++)
    {
        scanf("%s %d %d %d %d", turma[i].nome, &turma[i].aniversario.dia, &turma[i].aniversario.mes, &turma[i].aniversario.ano, &turma[i].qtNotas);
        turma[i].notas = (float*) malloc(turma[i].qtNotas * sizeof(float));
        for(j=0; j<turma[i].qtNotas; j++)
        {
            scanf("%f", &turma[i].notas[j]);
        }
    }

    ordenaMedia(turma, n);

    for(i=0; i<n; i++)
    {
        printf("%s %d %d %d %d [%.2f] ", turma[i].nome, turma[i].aniversario.dia, turma[i].aniversario.mes, turma[i].aniversario.ano, turma[i].qtNotas, calcMedia(turma[i]));
        for(j=0; j<turma[i].qtNotas; j++)
        {
            printf("%.2f%s", turma[i].notas[j], (j==turma[i].qtNotas-1?"\n":" "));
        }
    }

    for(i=0; i<n; i++)
    {
        free(turma[i].notas);
    }
    free(turma);
    return 0;
}

float calcMedia(struct aluno aluno)
{
    float media = 0.0f;
    int i;

    for(i=0; i<aluno.qtNotas; i++)
    {
        media += aluno.notas[i];
    }
    return media/aluno.qtNotas;
}

void ordenaMedia(struct aluno *v, int n)
{
    int i, j;
    struct aluno aux;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(calcMedia(v[j]) > calcMedia(v[j+1]))
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}