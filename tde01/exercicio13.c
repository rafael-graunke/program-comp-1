#include <stdio.h>

float raio, area;

int main()
{
    printf("Valor da raio: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;

    printf("Area do circulo: %f\n", area);

    return 0;
}