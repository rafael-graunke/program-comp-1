#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Números digitados: %f e %f\n\n", a, b);
    printf("Soma: %f\n", a + b);
    printf("Subtracao: %f\n", a - b);
    printf("Multiplicacao: %f\n", a * b);
    printf("Divisao Real: %f\n", a / b);

    return 0;
}