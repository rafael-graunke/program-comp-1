#include <stdio.h>

char operacao;
float a, b;

int main()
{
    printf("Operacao (*, /, +, -): ");
    scanf("%c", &operacao);

    printf("Digite os valores A e B: ");
    scanf("%f%f", &a, &b);

    if (operacao == '*')
    {
        printf("%f * %f = %f\n", a, b, a * b);
    }
    if (operacao == '/')
    {
        if (b == 0)
        {
            printf("Divisao por zero.\n");
        }
        else
        {
            printf("%f / %f = %f\n", a, b, a / b);
        }
    }
    if (operacao == '+')
    {
        printf("%f + %f = %f\n", a, b, a + b);
    }
    if (operacao == '-')
    {
        printf("%f - %f = %f\n", a, b, a - b);
    }
    if (operacao != '*' && operacao != '/' && operacao != '+' && operacao != '-')
    {
        printf("Operacao invalida.\n");
    }

    return 0;
}