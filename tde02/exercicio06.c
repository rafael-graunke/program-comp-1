#include <stdio.h>
#include <stdlib.h>

int a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A e maior que B\n");
    }
    if (a == b)
    {
        printf("A e B sao iguais\n");
    }
    if (a < b)
    {
        printf("B e maior que A\n");
    }

    return 0;
}