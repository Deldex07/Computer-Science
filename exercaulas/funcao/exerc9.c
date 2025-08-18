#include <stdio.h>

int primo(int a, int d)
{
    if (d == a)
    {
        return 1;
    }
    else if (a % d == 0)
    {
        return 0;
    }
    else
    {
        return primo(a, d + 1);
    }
}

int main()
{
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    while (n < 2)
    {
        printf("Apenas numeros iguais ou maiores que 2, tente novamente: ");
        scanf("%d", &n);
    }

    if (primo(n, 2))
        printf("%d e primo\n", n);
    else
        printf("%d nao e primo\n", n);
    return 0;
}