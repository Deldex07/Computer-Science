#include <stdio.h>
int main()
{
    int X[10], Y[10];
    int i;
    printf("Preenchendo o vetor X:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &X[i]);
        if (X[i] % 2 != 0)
        {
            Y[i] = X[i] * 3;
        }
        else
        {
            Y[i] = X[i] * 2;
        }
    }
    printf("Vetor X após preenchimento:\n");
    for (i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, X[i]);
    }
    printf("Vetor Y após preenchimento:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Y[%d] = %d\n", i, Y[i]);
    }
}