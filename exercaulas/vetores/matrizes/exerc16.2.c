#include <stdio.h>
int main()
{
    int A[4][6], B[4][6], S[4][6], D[4][6];
    int l, c;

    printf("Escreva a matriz A:\n");
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 6; c++)
        {
            printf("A[%d][%d]: ", l, c);
            scanf("%d", &A[l][c]);
        }
    }
    printf("Escreva a matriz B:\n");
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 6; c++)
        {
            printf("B[%d][%d]: ", l, c);
            scanf("%d", &B[l][c]);
        }
    }

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 6; c++)
        {
            S[l][c] = A[l][c] + B[l][c];
            D[l][c] = A[l][c] - B[l][c];
        }
    }
    printf("Matriz S (Soma):\n");
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 6; c++)
        {
            printf("%d ", S[l][c]);
        }
        printf("\n");
    }

    printf("Matriz D (Diferença):\n");
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 6; c++)
        {
            printf("%d ", D[l][c]);
        }
        printf("\n");
    }
}