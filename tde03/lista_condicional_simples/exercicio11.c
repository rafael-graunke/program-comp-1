#include <stdio.h>
#include <math.h>

int opcao, a, b, c;

int main()
{
    printf("Selecione a Operacao:\n 1 - Multiplicar\n 2 - Somar\n 3 - Subtrair\n 4 - Somar o Cubo\n>>> ");
    scanf("%d", &opcao);

    printf("Digite os valores de A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (opcao < 1 || opcao > 4)
    {
        printf("Opcao selecionado invalida.\n");
    }
    if (opcao == 1)
    {
        printf("Multiplicacao dos valores: %d\n", a * b * c);
    }
    if (opcao == 2)
    {
        printf("Soma dos valores: %d\n", a + b + c);
    }
    if (opcao == 3)
    {
        printf("Subtracao dos valores: %d\n", a - b - c);
    }
    if (opcao == 4)
    {
        printf("Soma dos cubos dos valores: %f\n", pow(a, 3) + pow(b, 3) + pow(c, 3));
    }

    return 0;
}