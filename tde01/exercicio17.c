#include <stdio.h>
#include <math.h>

float ladoA, ladoB, ladoC, semiperimetro, area;

int main()
{
    printf("Valor do lado A: ");
    scanf("%f", &ladoA);

    printf("Valor do lado B: ");
    scanf("%f", &ladoB);

    printf("Valor do lado C: ");
    scanf("%f", &ladoC);

    semiperimetro = (ladoA + ladoB + ladoC) / 2;
    area = sqrt(semiperimetro * (semiperimetro - ladoA) * (semiperimetro - ladoB) * (semiperimetro - ladoC));

    printf("Area do triangulo: %f\n", area);

    return 0;
}