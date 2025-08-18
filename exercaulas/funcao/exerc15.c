#include <stdio.h>

int menor(int a, int b)
{
    if (a < b)
        return a;
    else if (b < a)
        return b;
    else
        return printf("Iguais");
}

int main()
{
    int a, b, m;

    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);
    m = menor(a, b);
    printf("Menor: %d\n", m);
}