#include <stdio.h>

int fibo(int n);

int main()
{
    int i, t;

    printf("Numero de termos: ");
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        printf("%d\n", fibo(i));
    }
}

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}