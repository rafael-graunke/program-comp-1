#include <stdio.h>

float base, altura;

int main()
{
    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    printf("Area do retangulo: %f\n", base * altura);

    return 0;
}