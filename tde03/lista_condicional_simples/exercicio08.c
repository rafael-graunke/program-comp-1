#include <stdio.h>
#include <stdlib.h>

float a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("Valores em ordem crescente: %.2f e %.2f\n", a, b);
    }
    else
    {
        printf("Valores em ordem crescente: %.2f e %.2f\n", b, a);
    }

    return 0;
}