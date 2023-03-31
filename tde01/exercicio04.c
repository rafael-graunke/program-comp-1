#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Divisao Real: %f\n", a / b);

    return 0;
}