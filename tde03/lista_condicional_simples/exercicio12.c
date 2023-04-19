#include <stdio.h>

char sexo;
float altura;

int main()
{
    printf("Sexo (M/F): ");
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'm' || sexo == 'M')
    {
        printf("Peso ideal: %.1f\n", 72.7 * altura - 58);
    }
    if (sexo == 'f' || sexo == 'F')
    {
        printf("Peso ideal: %.1f\n", 62.1 * altura - 44.7);
    }

    return 0;
}