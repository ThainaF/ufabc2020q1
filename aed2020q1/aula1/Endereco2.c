#include <stdio.h>

int main()
{
    int i = 666, *pi;
    float f = 3.1415f, *pf;
    char c = 'x', *pc;

    printf("Endereco de i: %p - valor de i: %d\n", &i, i);
    printf("Endereco de f: %p - valor de f: %f\n", &f, f);
    printf("Endereco de c: %p - valor de c: %c\n", &c, c);

    pi = &i;
    pf = &f;
    pc = &c;

    printf("conteudo de pi: %p - apontado por pi: %d\n", pi, *pi);
    printf("conteudo de pf: %p - apontado por pf: %f\n", pf, *pf);
    printf("conteudo de pc: %p - apontado por pc: %c\n", pc, *pc);

    return 0;
}