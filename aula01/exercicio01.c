#include <stdio.h>

int dinheiroInicial, restoDinheiro, quantidadeNotas;

int main()
{
    scanf("%d", &dinheiroInicial);

    quantidadeNotas = dinheiroInicial / 200;
    restoDinheiro = dinheiroInicial % 200;
    printf("%d notas de 200 reais\n", quantidadeNotas);

    quantidadeNotas = restoDinheiro / 100;
    restoDinheiro = restoDinheiro % 100;
    printf("%d notas de 100 reais\n", quantidadeNotas);

    quantidadeNotas = restoDinheiro / 50;
    restoDinheiro = restoDinheiro % 50;
    printf("%d notas de 50 reais\n", quantidadeNotas);

    quantidadeNotas = restoDinheiro / 20;
    restoDinheiro = restoDinheiro % 20;
    printf("%d notas de 20 reais\n", quantidadeNotas);

    quantidadeNotas = restoDinheiro / 10;
    restoDinheiro = restoDinheiro % 10;
    printf("%d notas de 10 reais\n", quantidadeNotas);

    quantidadeNotas = restoDinheiro / 5;
    restoDinheiro = restoDinheiro % 5;
    printf("%d notas de 5 reais\n", quantidadeNotas);

    quantidadeNotas = restoDinheiro / 2;
    restoDinheiro = restoDinheiro % 2;
    printf("%d notas de 2 reais\n", quantidadeNotas);

    printf("%d moedas de 1 reais\n", restoDinheiro);

    return 0;
}