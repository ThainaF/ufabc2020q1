#include <stdio.h>

void troca(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main()
{
    int a=7, b=10;

    printf("ANTES DE troca()\n");
    printf("a = %d, b = %d\n", a, b);

    troca(&a, &b);

    printf("DEPOIS DE troca()\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}