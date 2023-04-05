#include <stdio.h>
#include <stdlib.h>

int a, b, modulo;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    modulo = abs(a - b);

    printf("O modulo da diferenca entre A e B: %d\n", modulo);

    return 0;
}