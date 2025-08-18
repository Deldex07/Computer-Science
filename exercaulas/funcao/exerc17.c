// Crie uma função em linguagem C que receba 3 números e retorne o menor valor, use a função da questão 5.
#include <stdio.h>
#include <stdlib.h>

int menor2(int a, int b)
{
    return (a < b) ? a : b;
}

int menor3(int a, int b, int c)
{
    return menor2(menor2(a, b), c);
}

int main()
{
    int a, b, c;
    int menor;

    printf("Digite a e b e c: ");
    scanf("%d %d %d", &a, &b, &c);
    menor = menor3(a, b, c);
    printf("O menor valor e: %d\n", menor);
}