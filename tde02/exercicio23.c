#include <stdio.h>
#include <stdlib.h>

int a, b, c, maiorValorAB, maiorValorABC;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    maiorValorAB = (a + b + abs(a - b)) / 2;
    maiorValorABC = (maiorValorAB + c + abs(maiorValorAB - c)) / 2;

    printf("O maior valor entre A, B e C: %d\n", maiorValorABC);

    return 0;
}