#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("O maior numero e: %d\n", a);
    }
    else if (b > a)
    {
        printf("O maior numero e: %d\n", b);
    }
    else
    {
        printf("Os numeros sao iguais, tente novamente.");
    }
}