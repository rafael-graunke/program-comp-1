#include <stdio.h>
#include <stdlib.h>

int horas, segundos;

int main()
{
    printf("Horas: ");
    scanf("%d", &horas);

    segundos = horas * 3600;

    printf("%d horas sao %d segundos\n", horas, segundos);

    return 0;
}