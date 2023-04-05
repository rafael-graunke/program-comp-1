#include <stdio.h>
#include <math.h>

float xa, ya, xb, yb, xc, yc, ladoAB, ladoBC, ladoCA;

int main()
{
    printf("Primeiro ponto: \n");
    printf("Valor de x: ");
    scanf("%f", &xa);
    printf("Valor de y: ");
    scanf("%f", &ya);

    printf("Segundo ponto: \n");
    printf("Valor de x: ");
    scanf("%f", &xb);
    printf("Valor de y: ");
    scanf("%f", &yb);

    printf("Terceiro ponto: \n");
    printf("Valor de x: ");
    scanf("%f", &xc);
    printf("Valor de y: ");
    scanf("%f", &yc);

    ladoAB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    ladoBC = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    ladoCA = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));

    printf("Lado AB: %f\n", ladoAB);
    printf("Lado BC: %f\n", ladoBC);
    printf("Lado CA: %f\n", ladoCA);

    return 0;
}