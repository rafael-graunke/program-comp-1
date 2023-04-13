#include <stdio.h>
#include <stdlib.h>

int a, b, c, soma1, soma2, menorValorAB, menorValorABC;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    soma1 = a + b;

    menorValorAB = soma1 - (a + b + abs(a - b)) / 2;

    soma2 = menorValorAB + c;

    menorValorABC = soma2 - (menorValorAB + c + abs(menorValorAB - c)) / 2;

    printf("O menor valor entre A, C e C: %d\n", menorValorABC);

    return 0;
}