#include <stdio.h>
#include <stdlib.h>

int a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("Multiplos\n");
    }
    else
    {
        printf("Nao sao multiplos\n");
    }

    return 0;
}