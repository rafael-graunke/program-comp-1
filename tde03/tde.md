## TDE 3

Códigos disponíveis também no [GitHub](https://github.com/rafael-graunke/program-comp-1)

### Exercício 27

```c
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
```

### Exercício 28

```c
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
```

### Exercício 29

```c
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
```

### Exercício 08

```c
#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("Valores em ordem crescente: %.2f e %.2f\n", a, b);
    }
    else
    {
        printf("Valores em ordem crescente: %.2f e %.2f\n", b, a);
    }

    return 0;
}
```

### Exercício 09

```c
#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    if (a > b)
    {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }
    else
    {
        printf("%.2f - %.2f = %.2f\n", b, a, b - a);
    }

    return 0;
}
```

### Exercício 10

```c
#include <stdio.h>

int idade;

int main()
{
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7)
        printf("Infantil A\n");
    if (idade >= 8 && idade <= 10)
        printf("Infantil B\n");
    if (idade >= 11 && idade <= 13)
        printf("Juvenil A\n");
    if (idade >= 14 && idade <= 17)
        printf("Juvenil B\n");
    if (idade >= 18)
        printf("Senior\n");

    return 0;
}
```

### Exercício 11

```c
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
```

### Exercício 12

```c
#include <stdio.h>

char sexo;
float altura;

int main()
{
    printf("Sexo (M/F): ");
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'm' || sexo == 'M')
    {
        printf("Peso ideal: %.1f\n", 72.7 * altura - 58);
    }
    if (sexo == 'f' || sexo == 'F')
    {
        printf("Peso ideal: %.1f\n", 62.1 * altura - 44.7);
    }

    return 0;
}
```

### Exercício 13

```c
#include <stdio.h>

char operacao;
float a, b;

int main()
{
    printf("Operacao (*, /, +, -): ");
    scanf("%c", &operacao);

    printf("Digite os valores A e B: ");
    scanf("%f%f", &a, &b);

    if (operacao == '*')
    {
        printf("%f * %f = %f\n", a, b, a * b);
    }
    if (operacao == '/')
    {
        if (b == 0)
        {
            printf("Divisao por zero.\n");
        }
        else
        {
            printf("%f / %f = %f\n", a, b, a / b);
        }
    }
    if (operacao == '+')
    {
        printf("%f + %f = %f\n", a, b, a + b);
    }
    if (operacao == '-')
    {
        printf("%f - %f = %f\n", a, b, a - b);
    }
    if (operacao != '*' && operacao != '/' && operacao != '+' && operacao != '-')
    {
        printf("Operacao invalida.\n");
    }

    return 0;
}
```

### Exercício 01

```c
#include <stdio.h>

int a, b, c;

int main()
{
    printf("Digite o valor de A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("A e o maior\n");
    }
    else if (b >= a && b >= c)
    {
        printf("B e o maior\n");
    }
    else
    {
        printf("C e o maior\n");
    }

    return 0;
}
```

### Exercício 02

```c
#include <stdio.h>

int a, b, c;

int main()
{
    printf("Digite o valor de A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        printf("A e o maior\n");
    }
    else if (b <= a && b <= c)
    {
        printf("B e o maior\n");
    }
    else
    {
        printf("C e o maior\n");
    }

    return 0;
}
```

### Exercício 03

```c
#include <stdio.h>

int a, b, c;

int main()
{
    printf("Digite o valor de A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        if (b <= c)
        {
            printf("%d, %d, %d\n", a, b, c);
        }
        else
        {
            printf("%d, %d, %d\n", a, c, b);
        }
    }
    else if (b <= a && b <= c)
    {
        if (a <= c)
        {
            printf("%d, %d, %d\n", b, a, c);
        }
        else
        {
            printf("%d, %d, %d\n", b, c, a);
        }
    }
    else
    {
        if (a <= b)
        {
            printf("%d, %d, %d\n", c, a, b);
        }
        else
        {
            printf("%d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}
```

### Exercício 04

```c
#include <stdio.h>

int a, b, c;

int main()
{
    printf("Digite o valor de A, B e C: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            printf("%d, %d, %d\n", a, b, c);
        }
        else
        {
            printf("%d, %d, %d\n", a, c, b);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("%d, %d, %d\n", b, a, c);
        }
        else
        {
            printf("%d, %d, %d\n", b, c, a);
        }
    }
    else
    {
        if (a >= b)
        {
            printf("%d, %d, %d\n", c, a, b);
        }
        else
        {
            printf("%d, %d, %d\n", c, b, a);
        }
    }

    return 0;
}
```

### Exercício 05

```c
#include <stdio.h>

int a, b, c, i;
int v1, v2, v3;

int main()
{
    printf("Digite o valor de I, A, B e C: ");
    scanf("%d%d%d%d", &i, &a, &b, &c);

    if (a >= b && a >= c)
    {
        v1 = a;
        if (b >= c)
        {
            v2 = b;
            v3 = c;
        }
        else
        {
            v2 = c;
            v3 = b;
        }
    }
    else if (b >= a && b >= c)
    {
        v1 = b;
        if (a >= c)
        {
            v2 = a;
            v3 = c;
        }
        else
        {
            v2 = c;
            v3 = a;
        }
    }
    else
    {
        v1 = c;
        if (a >= b)
        {
            v2 = a;
            v3 = b;
        }
        else
        {
            v2 = b;
            v3 = a;
        }
    }

    if (i == 1)
    {
        printf("%d, %d, %d\n", v1, v2, v3);
    }
    else if (i == 2)
    {
        printf("%d, %d, %d\n", v3, v2, v1);
    }
    else if (i == 3)
    {
        printf("%d, %d, %d\n", v2, v1, v3);
    }
    else
    {
        printf("Opcao invalida");
    }

    return 0;
}
```
