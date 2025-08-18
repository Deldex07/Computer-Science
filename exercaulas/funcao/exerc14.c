#include <stdio.h>

int maior(int a, int b)
{
    if (a > b)
        return a;
    else if (b > a)
        return b;
    else
        return printf("Iguais");
}

int main()
{
    int a, b, m;

    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);
    m = maior(a, b);
    printf("Maior:%d\n", m);
}