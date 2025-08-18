/*
Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada
de 10 a 1 do valor lido.
*/

#include <stdio.h>

int main()
{
    int numero, i, r;

    printf("Digite um numero inteiro :");
    scanf("%d", &numero);
    if (numero >= 1 && numero <= 10)
    {
        for (i = 1; i <= 10; i++)
        {
            r = numero * i;
            printf("%d x %d = %d\n", numero, i, r);
        }
    }
}