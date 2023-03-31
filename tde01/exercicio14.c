#include <stdio.h>

float base, altura, area;

int main()
{
    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("Area do triangulo: %f\n", area);

    return 0;
}