#include <stdio.h>
int main()
{
    int Z[10], W[10];
    int i;
    printf("Digite os valores do vetor:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &Z[i]);
    }

    for (i = 0; i < 10; i++)
    {
        W[i] = Z[9 - i];
    }
    printf("Vetor Z:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Z[%d] = %d\n", i, Z[i]);
    }
    printf("Vetor W (invertido):\n");
    for (i = 0; i < 10; i++)
    {
        printf("W[%d] = %d\n", i, W[i]);
    }
}