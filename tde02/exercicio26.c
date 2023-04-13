#include <stdio.h>
#include <stdlib.h>

int horas, minutos;

int main()
{
    printf("Horas: ");
    scanf("%d", &horas);

    minutos = horas * 60;

    printf("%d horas sao %d minutos\n", horas, minutos);

    return 0;
}