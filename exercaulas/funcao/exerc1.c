#include <stdio.h>

int somatorio(int n);

int main()
{
    int n;

    printf("Digite numero: ");
    scanf("%d", &n);

    printf("\nO resultado e: %d\n", somatorio(n));
}

int somatorio(int n)
{
    int result;
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
        result = n + somatorio(n - 1);
    }
    return result;
}
// somatorio