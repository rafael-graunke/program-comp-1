#include <stdio.h>

float baseMenor, baseMaior, altura, area;

int main()
{
    printf("Valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = (baseMenor + baseMaior) / 2 * altura;

    printf("Area do trapezio: %f\n", area);

    return 0;
}