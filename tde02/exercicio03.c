#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Positivo\n");
    }
    if (numero == 0)
    {
        printf("Igual a zero\n");
    }
    if (numero < 0)
    {
        printf("Negativo\n");
    }

    return 0;
}