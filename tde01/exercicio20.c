#include <stdio.h>
#include <math.h>

float altura, raio, area, valor;
int latas;

int main()
{
    printf("Altura: ");
    scanf("%f", &altura);

    printf("Raio: ");
    scanf("%f", &raio);

    area = 2 * 3.1416 * raio * (raio + altura);

    latas = ceil(area * 2 / 9);
    valor = latas * 40;

    printf("Quantidade de latas necessários: %d\n", latas);
    printf("Valor para duas mãos: %.2f reais\n", valor);

    return 0;
}