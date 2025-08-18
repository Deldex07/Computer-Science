#include <stdio.h>

int nulo(int n)
{
    return n == 0;
}

int main()
{
    int b;

    printf("digite o valor: ");
    scanf("%d", &b);

    nulo(b);
    printf("O valor %d e nulo? %d\n", b, nulo(b));
}