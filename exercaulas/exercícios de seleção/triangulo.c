#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b + c && b < a + c && c < a + b)
    {
        printf("Os numeros formam um triangulo.\n");
    }
    else
    {
        printf("Os numeros nao formam um triangulo.\n");
    }
}