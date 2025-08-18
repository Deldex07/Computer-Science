#include <stdio.h>

int main()
{
    int A[12][13], l, c;
    float AMod[12][13];
    int maior;

    // Leitura da matriz
    for (l = 0; l < 12; l++)
    {
        for (c = 0; c < 13; c++)
        {
            printf("A[%d][%d]: ", l, c);
            scanf("%d", &A[l][c]);
        }
    }

    // Processamento: dividir cada elemento pelo maior da linha
    for (l = 0; l < 12; l++)
    {
        maior = A[l][0];
        for (c = 1; c < 13; c++)
        {
            if (A[l][c] > maior)
                maior = A[l][c];
        }
        for (c = 0; c < 13; c++)
        {
            AMod[l][c] = (float)A[l][c] / maior;
        }
    }

    // Impressão da matriz modificada
    printf("\nMatriz modificada:\n");
    for (l = 0; l < 12; l++)
    {
        for (c = 0; c < 13; c++)
        {
            printf("%.2f ", AMod[l][c]);
        }
        printf("\n");
    }

    return 0;
}