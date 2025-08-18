#include <stdio.h>

int maior2(int a, int b)
{
    return (a > b) ? a : b;
}

int maior3(int a, int b, int c)
{
    return maior2(maior2(a, b), c);
}

int main()
{
    int a, b, c;
    int maior;

    printf("Digite a e b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    maior = maior3(a, b, c);
    printf("O maior valor e: %d\n", maior);
}