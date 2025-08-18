#include <stdio.h>

int main()
{
    int G[5][5], l, c, SL[5] = {0}, SC[5] = {0};
    printf("Preencha a matriz 5x5:\n");
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("G[%d][%d]: ", l, c);
            scanf("%d", &G[l][c]);
        }
    }

    // soma linhas
    for (l = 0; l < 5; l++)
    {

        for (c = 0; c < 5; c++)
        {
            SL[l] += G[l][c];
        }
    }
    // soma colunas
    for (c = 0; c < 5; c++)
    {

        for (l = 0; l < 5; l++)
        {
            SC[c] += G[l][c];
        }
    }

    printf("\nSoma das linhas:\n");
    for (l = 0; l < 5; l++)
    {
        printf("Linha %d: %d\n", l + 1, SL[l]);
    }
    printf("\nSoma das colunas:\n");
    for (c = 0; c < 5; c++)
    {
        printf("Coluna %d: %d\n", c + 1, SC[c]);
    }
}