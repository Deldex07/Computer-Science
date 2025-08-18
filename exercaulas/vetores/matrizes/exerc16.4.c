#include <stdio.h>

int main()
{
    int D[5][5], x, e = 0, l, c;

    printf("Digite os valores da matriz:\n");
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            printf("D[%d][%d]: ", l, c);
            scanf("%d", &D[l][c]);
        }
        printf("\n");
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    // Verifica se o valor x está presente na matriz D
    for (l = 0; l < 5; l++)
    {
        for (c = 0; c < 5; c++)
        {
            if (D[l][c] == x)
            {
                e = 1;
                break;
            }
        }
        if (e)
            break;
    }
    if (e)
    {
        printf("O valor %d existe na matriz D.\n", x);
    }
    else
    {
        printf("O valor %d nao existe na matriz D.\n", x);
    }
}