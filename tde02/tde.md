## TDE 2

Códigos disponíveis também no [GitHub](https://github.com/rafael-graunke/program-comp-1)

### Exercício 22

```c
#include <stdio.h>
#include <stdlib.h>

int a, b, maiorValor;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    maiorValor = (a + b + abs(a - b)) / 2;

    printf("O maior valor entre A e B: %d\n", maiorValor);

    return 0;
}
```

### Exercício 23

```c
#include <stdio.h>
#include <stdlib.h>

int a, b, c, maiorValorAB, maiorValorABC;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    maiorValorAB = (a + b + abs(a - b)) / 2;
    maiorValorABC = (maiorValorAB + c + abs(maiorValorAB - c)) / 2;

    printf("O maior valor entre A, B e C: %d\n", maiorValorABC);

    return 0;
}
```

### Exercício 24

```c
#include <stdio.h>
#include <stdlib.h>

int a, b, soma, menorValor;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    soma = a + b;

    menorValor = soma - (a + b + abs(a - b)) / 2;

    printf("O menor valor entre A e B: %d\n", menorValor);

    return 0;
}
```

### Exercício 25

```c
#include <stdio.h>
#include <stdlib.h>

int a, b, c, soma1, soma2, menorValorAB, menorValorABC;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    printf("Valor C: ");
    scanf("%d", &c);

    soma1 = a + b;

    menorValorAB = soma1 - (a + b + abs(a - b)) / 2;

    soma2 = menorValorAB + c;

    menorValorABC = soma2 - (menorValorAB + c + abs(menorValorAB - c)) / 2;

    printf("O menor valor entre A, C e C: %d\n", menorValorABC);

    return 0;
}
```

### Exercício 26

```c
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
```

### Exercício 01

```c
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
```

### Exercício 02

```c
#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 0)
    {
        printf("Positivo\n");
    }
    else
    {
        printf("Negativo\n");
    }

    return 0;
}
```

### Exercício 03

```c
#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Positivo\n");
    }
    if (numero == 0)
    {
        printf("Igual a zero\n");
    }
    if (numero < 0)
    {
        printf("Negativo\n");
    }

    return 0;
}
```

### Exercício 04

```c
#include <stdio.h>
#include <stdlib.h>

int numero;

int main()
{
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("Par\n");
    }
    else
    {
        printf("Impar\n");
    }

    return 0;
}
```

### Exercício 05

```c
#include <stdio.h>
#include <stdlib.h>

int a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("Multiplos\n");
    }
    else
    {
        printf("Nao sao multiplos\n");
    }

    return 0;
}
```

### Exercício 06

```c
#include <stdio.h>
#include <stdlib.h>

int a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A e maior que B\n");
    }
    if (a == b)
    {
        printf("A e B sao iguais\n");
    }
    if (a < b)
    {
        printf("B e maior que A\n");
    }

    return 0;
}
```
