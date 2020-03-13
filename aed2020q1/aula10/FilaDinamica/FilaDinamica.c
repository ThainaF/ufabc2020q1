#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int dado;
    struct Item *proximo;
};

struct Fila
{
    struct Item *inicio, *final;
};

struct Item * criaItem(int);
struct Fila * criaFila();
void enfileirar(struct Fila*, struct Item*);
struct Item * desenfileirar(struct Fila*);
void mostrar(struct Fila);
int vazia(struct Fila);

int main()
{
    struct Fila *fila = criaFila();
    struct Item *removido;
    char op;
    int dado;

    while(scanf("%c", &op) != EOF)
    {
        if(op == 'E')
        {
            scanf("%d", &dado);
            enfileirar(fila, criaItem(dado));
        }
        else if(op == 'D')
        {
            removido = desenfileirar(fila);
            if(removido != NULL)
            {
                printf("<%d>\n", removido->dado);
                free(removido);
            }
        }
        else if(op == 'M')
        {
            mostrar(*fila);
        }
    }
    return 0;
}

struct Item * criaItem(int dado)
{
    struct Item *it = (struct Item*) malloc(sizeof(struct Item));
    if(it != NULL)
    {
        it->dado = dado;
        it->proximo = NULL;
    }
    return it;
}

struct Fila * criaFila()
{
    struct Fila *f = (struct Fila*) malloc(sizeof(struct Fila));
    if(f != NULL)
    {
        f->inicio = f->final = NULL;
    }
    return f;
}

int vazia(struct Fila fila)
{
    return fila.inicio == NULL && fila.final == NULL;
}

void enfileirar(struct Fila *fila, struct Item *novo)
{
    if(vazia(*fila))
    {
        fila->inicio = novo;
    }
    else
    {
        fila->final->proximo = novo;
    }
    fila->final = novo;
}

struct Item * desenfileirar(struct Fila *fila)
{
    struct Item *removido = fila->inicio;

    if(!vazia(*fila))
    {
        fila->inicio = fila->inicio->proximo;
        if(fila->inicio == NULL)
        {
            fila->final = NULL;
        }
    }
    return removido;
}

void mostrar(struct Fila fila)
{
    struct Item *it = fila.inicio;
    while(it != NULL)
    {
        printf("%d%s", it->dado, it->proximo!=NULL?" ":"\n");
        it = it->proximo;
    }
}