#include <stdio.h>
#include <math.h>

int a, b, potencia;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    potencia = pow(a, b);

    printf("%d elevado a %d: %d\n", a, b, potencia);

    return 0;
}