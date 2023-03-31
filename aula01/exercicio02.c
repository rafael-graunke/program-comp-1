#include <stdio.h>

int valor, casas;

int main()
{
    printf("Entre um valor de menor que 10000: ");
    scanf("%d", &valor);

    casas = valor / 1000;
    printf("%d milhares\n", casas);
    valor = valor % 1000;

    casas = valor / 100;
    printf("%d centenas\n", casas);
    valor = valor % 100;

    casas = valor / 10;
    printf("%d dezenas\n", casas);
    valor = valor % 10;

    printf("%d unidades\n", valor);

    return 0;
}