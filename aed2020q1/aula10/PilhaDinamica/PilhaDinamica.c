#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int dado;
    struct Item *anterior;
};

struct Pilha
{
    struct Item *topo;
};

struct Item * criaItem(int);
struct Pilha * criaPilha();
void empilha(struct Pilha *, struct Item *);
struct Item * desempilha(struct Pilha *);
void mostraTopoBase(struct Pilha);
int vazia(struct Pilha);

int main()
{
    struct Pilha *pilha = criaPilha();
    struct Item *removido;
    char op;
    int dado;

    while(scanf("%c", &op) != EOF)
    {
        if(op == 'E')
        {
            scanf("%d", &dado);
            empilha(pilha, criaItem(dado));
        }
        else if(op == 'D')
        {
            removido = desempilha(pilha);
            if(removido != NULL)
            {
                printf("[%d]\n", removido->dado);
                free(removido);
            }
        }
        else if(op == 'M')
        {
            mostraTopoBase(*pilha);
        }
    }
    while(!vazia(*pilha))
    {
        desempilha(pilha);
    }
    free(pilha);
    return 0;
}

struct Item * criaItem(int dado)
{
    struct Item *it = (struct Item*) malloc(sizeof(struct Item));
    if(it != NULL)
    {
        it->dado = dado;
        it->anterior = NULL;
    }
    return it;
}

struct Pilha * criaPilha()
{
    struct Pilha *p = (struct Pilha*) malloc(sizeof(struct Pilha));
    if(p != NULL)
    {
        p->topo = NULL;
    }
    return p;
}

void empilha(struct Pilha *p, struct Item *novo)
{
    novo->anterior = p->topo;
    p->topo = novo;
}

struct Item * desempilha(struct Pilha *p)
{
    struct Item *it = p->topo;

    if(!vazia(*p))
    {
        p->topo = p->topo->anterior;
    }
    return it;
}

void mostraTopoBase(struct Pilha p)
{
    struct Item *it;
    for(it = p.topo; it!=NULL; it=it->anterior)
    {
        printf("%d%s", it->dado, it->anterior!=NULL?" ":"\n");
    }
}

int vazia(struct Pilha p)
{
    return p.topo == NULL;
}