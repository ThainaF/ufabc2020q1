/*oi*/
#include <stdio.h>
#include <stdlib.h>

struct Item
{
    int chave;
    struct Item *proximo;
};

struct Lista
{
    struct Item *inicio;
};

struct Lista * criaLista();
struct Item * criaItem(int);
void inserir(struct Lista *, struct Item *);
struct Item * remover(struct Lista *, int);
void mostrar(struct Lista *);
int buscar(struct Lista *, int);

int main()
{
    struct Lista *l = criaLista();
    struct Item *removido;
    int chave;
    char op;

    while(scanf("\n%c", &op) != EOF)
    {
        if(op == 'I')
        {
            scanf("%d", &chave);
            inserir(l, criaItem(chave));
        }
        else if(op == 'R')
        {
            scanf("%d", &chave);
            removido = remover(l, chave);
            if(removido != NULL)
            {
                free(removido);
            }
        }
        else if(op == 'C')
        {
            scanf("%d", &chave);
            printf("%s\n", buscar(l, chave)?"SIM":"NAO");
        }
        else if(op == 'M')
        {
            mostrar(l);
        }
        else
        {
            printf("Operacao Invalida!\n");
        }
    }
    return 0;
}

struct Lista * criaLista()
{
    struct Lista *lista = (struct Lista*) malloc(sizeof(struct Lista));
    if(lista != NULL)
    {
        lista->inicio = NULL;
    }
    return lista;
}

struct Item * criaItem(int chave)
{
    struct Item *it = (struct Item*) malloc(sizeof(struct Item));
    if(it != NULL)
    {
        it->chave = chave;
        it->proximo = NULL;
    }
    return it;
}

void inserir(struct Lista *l, struct Item *novo)
{
    struct Item *anterior = NULL, *atual = l->inicio;

    while(atual != NULL && atual->chave < novo->chave)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if(anterior != NULL) // ou eh no meio ou no final
    {
        anterior->proximo = novo;
    }
    else // eh no inicio
    {
        l->inicio = novo;
    }
    novo->proximo = atual;
}

struct Item * remover(struct Lista *l, int ch)
{
    struct Item *anterior = NULL, *atual = l->inicio;

    while(atual != NULL && atual->chave != ch)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    if(atual != NULL)
    {
        if(anterior == NULL)
        {
            l->inicio = atual->proximo;
        }
        else
        {
            anterior->proximo = atual->proximo;
        }
    }
    return atual;
}

void mostrar(struct Lista *l)
{
    struct Item *atual = l->inicio;
    while(atual != NULL)
    {
        printf("%d%s", atual->chave, atual->proximo!=NULL?" ":"\n");
        atual = atual->proximo;
    }
}

int buscar(struct Lista *l, int ch)
{
    struct Item *atual = l->inicio;
    while(atual != NULL && atual->chave != ch)
    {
        atual = atual->proximo;
    }
    return atual!=NULL;
}