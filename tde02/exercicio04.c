#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Par\n");
    }
    else
    {
        printf("Impar\n");
    }

    return 0;
}