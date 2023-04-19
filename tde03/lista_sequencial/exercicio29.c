#include <stdio.h>
#include <stdlib.h>

int horas, segundos;

int main()
{
    printf("Segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;

    printf("%d segundos sao %d horas\n", segundos, horas);

    return 0;
}