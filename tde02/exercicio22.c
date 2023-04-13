#include <stdio.h>
#include <stdlib.h>

int a, b, maiorValor;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    maiorValor = (a + b + abs(a - b)) / 2;

    printf("O maior valor entre A e B: %d\n", maiorValor);

    return 0;
}