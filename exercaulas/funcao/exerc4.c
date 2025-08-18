#include <stdio.h>

int somamult(int a, int b);

int main()
{
    int a, b;

    printf("Digite 2 valores: ");
    scanf("%d%d", &a, &b);

    int result;

    if (a < 0 && b < 0)
    {
        result = somamult(-a, -b);
    }
    else if (a < 0)
    {
        result = -somamult(-a, b);
    }
    else
    {
        result = somamult(a, b);
    }

    printf("Resultado: %d\n", result);
}

int somamult(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return b;
    }
    else
    {
        return b + somamult(a - 1, b);
    }
}