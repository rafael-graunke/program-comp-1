// generated by ChatGPT
#include <stdio.h>

int main()
{
    int horas, minutos, segundos, tempo_em_segundos;

    printf("Digite o tempo em horas: ");
    scanf("%d", &horas);

    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    tempo_em_segundos = horas * 3600 + minutos * 60 + segundos;

    printf("O tempo em segundos e: %d\n", tempo_em_segundos);

    return 0;
}