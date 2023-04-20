#include <stdio.h>

int a, b, c;

int main()
{
    printf("Digite o valor de A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("A e o maior\n");
    }
    else if (b >= a && b >= c)
    {
        printf("B e o maior\n");
    }
    else
    {
        printf("C e o maior\n");
    }

    return 0;
}