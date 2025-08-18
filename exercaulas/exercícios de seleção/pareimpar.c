#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("O numero %d e par.\n", num);
    }
    else
    {
        printf("O numero %d e impar.\n", num);
    }

    if (num > 0)
    {
        printf("O numero %d e positivo.\n", num);
    }
    else if (num < 0)
    {
        printf("O numero %d e negativo.\n", num);
    }
    else
    {
        printf("O numero e zero.\n");
    }
}