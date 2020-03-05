#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int*, int, int);

int main()
{
    int n, *v, i, x;
    scanf("%d", &n);
    v = (int*) malloc(n * sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    printf("%d\n", buscaLinear(v, n, x));
    return 0;
}

int buscaLinear(int *v, int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(v[i] == x)
        {
            return i;
        }
    }
    return -1;
}