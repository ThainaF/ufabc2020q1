#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int *itens;
    int quantidade, tamanho;
};

void criaLista(struct Lista *, int);
void inserir(struct Lista *, int);
void remover(struct Lista*, int);
int consultar(struct Lista, int);
void mostrar(struct Lista);
int cheia(struct Lista);
int vazia(struct Lista);

int main()
{
    struct Lista l;
    int chave, n;
    char op;

    scanf("%d", &n);
    criaLista(&l, n);

    while(scanf("\n%c", &op) != EOF)
    {
        if(op == 'I')
        {
            scanf("%d", &chave);
            inserir(&l, chave);
        }
        else if(op == 'E')
        {
            scanf("%d", &chave);
            remover(&l, chave);
        }
        else if(op == 'C')
        {
            scanf("%d", &chave);
            if(!vazia(l))
            {
                printf("%s\n", consultar(l, chave)?"SIM":"NAO");
            }
        }
        else if(op == 'M')
        {
            mostrar(l);
        }
    }
    free(l.itens);
    return 0;
}

void criaLista(struct Lista *l, int n)
{
    l->itens = (int*) malloc(n*sizeof(int));
    l->quantidade = 0;
    l->tamanho = n;
}

int cheia(struct Lista lista)
{
    return lista.quantidade == lista.tamanho;
}

int vazia(struct Lista lista)
{
    return lista.quantidade == 0;
}

void inserir(struct Lista *lista, int chave)
{
    int i = 0, achei = 0, j;

    if(!cheia(*lista))
    {
        while(i<lista->quantidade && !achei)
        {
            if(lista->itens[i] > chave)
            {
                achei = 1;
            }
            else
            {
                i++;
            }
        }
        if(achei)
        {
            for(j=lista->quantidade; j>i; j--)
            {
                lista->itens[j] = lista->itens[j-1];
            }
        }
        lista->itens[i] = chave;
        lista->quantidade ++;
    }
}

void remover(struct Lista *lista, int chave)
{
    int i=0, achei=0, j;

    while(i<lista->quantidade && !achei)
    {
        if(lista->itens[i] == chave)
        {
            achei = 1;
        }
        else
        {
            i++;
        }
    }
    if(achei)
    {
        for(j=i; j<lista->quantidade-1; j++)
        {
            lista->itens[j] = lista->itens[j+1];
        }
        lista->quantidade --;
    }
}

int consultar(struct Lista lista, int chave)
{
    int esq = 0, dir = lista.quantidade-1, meio;
    while(esq<=dir)
    {
        meio = (esq+dir)/2;
        if(lista.itens[meio] == chave)
        {
            return 1;
        }
        else if(lista.itens[meio] > chave)
        {
            dir = meio-1;
        }
        else
        {
            esq = meio+1;
        }
    }
    return 0;
}

void mostrar(struct Lista lista)
{
    int i;
    for(i=0; i<lista.quantidade; i++)
    {
        printf("%d%s", lista.itens[i], i<lista.quantidade-1?" ":"\n");
    }
}