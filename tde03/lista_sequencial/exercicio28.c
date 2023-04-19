#include <stdio.h>
#include <stdlib.h>

int horas, minutos;

int main()
{
    printf("Minutos: ");
    scanf("%d", &minutos);

    horas = minutos / 60;

    printf("%d minutos sao %d horas\n", minutos, horas);

    return 0;
}