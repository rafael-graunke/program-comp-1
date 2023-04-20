#include <stdio.h>

int a, b, c, i;
int v1, v2, v3;

int main()
{
    printf("Digite o valor de I, A, B e C: ");
    scanf("%d%d%d%d", &i, &a, &b, &c);

    if (a >= b && a >= c)
    {
        v1 = a;
        if (b >= c)
        {
            v2 = b;
            v3 = c;
        }
        else
        {
            v2 = c;
            v3 = b;
        }
    }
    else if (b >= a && b >= c)
    {
        v1 = b;
        if (a >= c)
        {
            v2 = a;
            v3 = c;
        }
        else
        {
            v2 = c;
            v3 = a;
        }
    }
    else
    {
        v1 = c;
        if (a >= b)
        {
            v2 = a;
            v3 = b;
        }
        else
        {
            v2 = b;
            v3 = a;
        }
    }

    if (i == 1)
    {
        printf("%d, %d, %d\n", v1, v2, v3);
    }
    else if (i == 2)
    {
        printf("%d, %d, %d\n", v3, v2, v1);
    }
    else if (i == 3)
    {
        printf("%d, %d, %d\n", v2, v1, v3);
    }
    else
    {
        printf("Opcao invalida");
    }

    return 0;
}