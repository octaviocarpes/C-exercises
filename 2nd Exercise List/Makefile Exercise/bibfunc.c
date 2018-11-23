#include "bibfunc.h"

int fatorial(int v)
{
    int res = 1, i;
    for (i = 1; i <= v; i++)
    {
        res = res * i;
    }
    return res;
}

int somatorio(int v)
{
    float soma = 0, i;
    for (i = 1; i <= v; i++)
        soma += i;
    return soma;
}