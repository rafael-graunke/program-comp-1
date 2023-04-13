#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        printf("Positivo\n");
    }
    else
    {
        printf("Negativo\n");
    }

    return 0;
}