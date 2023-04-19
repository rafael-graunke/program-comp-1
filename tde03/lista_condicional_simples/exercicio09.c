#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }
    else
    {
        printf("%.2f - %.2f = %.2f\n", b, a, b - a);
    }

    return 0;
}