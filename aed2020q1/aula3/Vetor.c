#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    int i;

    int *vet = (int*) malloc(10);

    printf("v: %p\n", v);
    printf("*v: %d\n", *v);
    printf("v[0]: %d\n", v[0]);
    printf("&v[0]: %p\n", &v[0]);

    for(i=0; i<10; i++)
    {
        printf("v+i: %p <-> *(v+i): %d\n", v+i, *(v+i));
        vet[i] = 100*i;
    }

    for(i=0; i<10; i++)
    {
        printf("%p %d\n", vet+i, vet[i]);
    }

    return 0;
}