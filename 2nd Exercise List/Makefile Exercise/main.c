#include <stdio.h>
#include "bibfunc.h"

int main()
{
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);
    printf("Fatorial: %d\n", fatorial(v));
    printf("Somatório: %d\n", somatorio(v));
    return 0;
}