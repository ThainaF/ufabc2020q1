#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vi = (int*) malloc(sizeof(int));

    *vi = 666;

    printf("endereco de vi: %p - conteudo de vi: %p - apontado por vi: %d\n", &vi, vi, *vi);

    free(vi);
    return 0;
}