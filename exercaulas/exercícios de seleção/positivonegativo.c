#include <stdio.h>

int main()
{

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("o numero %d e positivo.\n", n);
    }
    else if (n < 0)
    {
        printf("o numero %d e negativo.\n", n);
    }
}