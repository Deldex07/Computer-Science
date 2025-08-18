#include <stdio.h>

int main()
{
    int impares = 0, pares = 0, somap = 0, n;
    float somaim = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("digite um numero inteiro: ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            pares++;
            somap += n;
        }
        else
        {
            impares++;
            somaim += n;
        }
    }
    printf("quantidade de pares:%d\n quantidade de impares:%d\n soma dos pares:%d\n", pares, impares, somap);
    if (impares > 0)
    {
        printf("Media dos impares: %.2f\n", somaim / impares);
    }
}