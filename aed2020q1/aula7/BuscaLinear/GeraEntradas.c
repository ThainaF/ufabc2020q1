#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    int n = atoi(argv[1]), i;

    srand(time(NULL));
    printf("%d\n", n);
    for(i=0; i<n; i++)
    {
        printf("%d%s", rand()%100, (i<n-1?" ":"\n"));
    }
    printf("%d", rand()%100);
    return 0;
}