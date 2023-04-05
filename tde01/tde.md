## TDE 1

Códigos disponíveis também no [GitHub](https://github.com/rafael-graunke/program-comp-1)

### Exercício 01

```c
#include <stdio.h>

int a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);

    return 0;
}
```

### Exercício 02

```c
#include <stdio.h>

int a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Subtracao: %d\n", a - b);

    return 0;
}
```

### Exercício 03

```c
#include <stdio.h>

int a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Multiplicacao: %d\n", a * b);

    return 0;
}
```

### Exercício 04

```c
#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Divisao Real: %f\n", a / b);

    return 0;
}
```

### Exercício 05

```c
#include <stdio.h>

float a, b;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    printf("Números digitados: %f e %f\n\n", a, b);
    printf("Soma: %f\n", a + b);
    printf("Subtracao: %f\n", a - b);
    printf("Multiplicacao: %f\n", a * b);
    printf("Divisao Real: %f\n", a / b);

    return 0;
}
```

### Exercício 06

```c
#include <stdio.h>
#include <math.h>

int a, b, potencia;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    potencia = pow(a, b);

    printf("%d elevado a %d: %d\n", a, b, potencia);

    return 0;
}
```

### Exercício 07

```c
#include <stdio.h>
#include <math.h>

int a, b, potencia;

int main()
{
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    potencia = pow(a - b, 2);

    printf("Quadrado de diferença entre %d e %d: %d\n", a, b, potencia);

    return 0;
}
```

### Exercício 11

```c
#include <stdio.h>

float base, altura;

int main()
{
    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    printf("Area do retangulo: %f\n", base * altura);

    return 0;
}
```

### Exercício 13

```c
#include <stdio.h>

float raio, area;

int main()
{
    printf("Valor da raio: ");
    scanf("%f", &raio);

    area = 3.14 * raio * raio;

    printf("Area do circulo: %f\n", area);

    return 0;
}
```

### Exercício 14

```c
#include <stdio.h>

float base, altura, area;

int main()
{
    printf("Valor da base: ");
    scanf("%f", &base);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("Area do triangulo: %f\n", area);

    return 0;
}
```

### Exercício 15

```c
#include <stdio.h>

float baseMenor, baseMaior, altura, area;

int main()
{
    printf("Valor da base maior: ");
    scanf("%f", &baseMaior);

    printf("Valor da base menor: ");
    scanf("%f", &baseMenor);

    printf("Valor da altura: ");
    scanf("%f", &altura);

    area = (baseMenor + baseMaior) / 2 * altura;

    printf("Area do trapezio: %f\n", area);

    return 0;
}
```

### Exercício 17

```c
#include <stdio.h>
#include <math.h>

float ladoA, ladoB, ladoC, semiperimetro, area;

int main()
{
    printf("Valor do lado A: ");
    scanf("%f", &ladoA);

    printf("Valor do lado B: ");
    scanf("%f", &ladoB);

    printf("Valor do lado C: ");
    scanf("%f", &ladoC);

    semiperimetro = (ladoA + ladoB + ladoC) / 2;
    area = sqrt(semiperimetro * (semiperimetro - ladoA) * (semiperimetro - ladoB) * (semiperimetro - ladoC));

    printf("Area do triangulo: %f\n", area);

    return 0;
}
```

### Exercício 19

```c
#include <stdio.h>
#include <math.h>

float xa, ya, xb, yb, xc, yc, ladoAB, ladoBC, ladoCA;

int main()
{
    printf("Primeiro ponto: \n");
    printf("Valor de x: ");
    scanf("%f", &xa);
    printf("Valor de y: ");
    scanf("%f", &ya);

    printf("Segundo ponto: \n");
    printf("Valor de x: ");
    scanf("%f", &xb);
    printf("Valor de y: ");
    scanf("%f", &yb);

    printf("Terceiro ponto: \n");
    printf("Valor de x: ");
    scanf("%f", &xc);
    printf("Valor de y: ");
    scanf("%f", &yc);

    ladoAB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    ladoBC = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    ladoCA = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));

    printf("Lado AB: %f\n", ladoAB);
    printf("Lado BC: %f\n", ladoBC);
    printf("Lado CA: %f\n", ladoCA);

    return 0;
}
```

### Exercício 20

```c
#include <stdio.h>
#include <math.h>

float altura, raio, area, valor;
int latas;

int main()
{
    printf("Altura: ");
    scanf("%f", &altura);

    printf("Raio: ");
    scanf("%f", &raio);

    area = 2 * 3.1416 * raio * (raio + altura);

    latas = ceil(area * 2 / 9);
    valor = latas * 40;

    printf("Quantidade de latas necessários: %d\n", latas);
    printf("Valor para duas mãos: %.2f reais\n", valor);

    return 0;
}
```

### Exercício 21

```c
#include <stdio.h>
#include <stdlib.h>

int a, b, modulo;

int main()
{
    printf("Valor A: ");
    scanf("%d", &a);

    printf("Valor B: ");
    scanf("%d", &b);

    modulo = abs(a - b);

    printf("O modulo da diferenca entre A e B: %d\n", modulo);

    return 0;
}
```

### Exercício 31

```c
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
```
