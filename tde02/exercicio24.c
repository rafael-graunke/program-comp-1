#include <stdio.h>
#include <stdlib.h>

int a, b, soma, menorValor;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    soma = a + b;

    menorValor = soma - (a + b + abs(a - b)) / 2;

    printf("O menor valor entre A e B: %d\n", menorValor);

    return 0;
}