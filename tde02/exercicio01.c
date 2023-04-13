#include <stdio.h>
#include <stdlib.h>

int idade;

int main()
{
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    return 0;
}