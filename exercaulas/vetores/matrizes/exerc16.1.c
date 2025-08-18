#include <stdio.h>
int main()
{
    int M[5][5];
    int l, c, sl = 0, sc = 0, sd = 0, sds = 0, s = 0;

    printf("Preencha a matriz 5x5:\n");
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("Digite M[%d][%d]: ", l, c);
            scanf("%d", &M[l][c]);
        }
    }

    for (c = 0; c < 5; c++)
    {
        sl += M[2][c]; // Soma da linha 3 (índice 2)
    }

    for (l = 0; l < 5; l++)
    {
        sc += M[l][1]; // Soma da coluna 2 (índice 1)
    }

    for (l = 0; l < 5; l++)
    {
        sd += M[l][l]; // Soma da diagonal principal
    }

    for (l = 0; l < 5; l++)
    {
        sds += M[l][4 - l]; // Soma da diagonal secundária
    }

    // Soma de todos os elementos da matriz
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            s += M[l][c];
        }
    }

    // Exibindo os resultados
    printf("\nSoma da linha 3: %d\n", sl);
    printf("Soma da coluna 2: %d\n", sc);
    printf("Soma da diagonal principal: %d\n", sd);
    printf("Soma da diagonal secundaria: %d\n", sds);
    printf("Soma de todos os elementos: %d\n", s);
}