#include <stdio.h>

int main()
{
    int M[7][7] = {{0, 1, 1, 0, 0, 1, 0},
                   {0, 0, 0, 1, 0, 1, 1},
                   {1, 1, 0, 1, 0, 0, 0},
                   {0, 1, 0, 0, 0, 1, 1},
                   {1, 1, 0, 0, 0, 1, 0},
                   {1, 1, 0, 1, 0, 0, 0},
                   {0, 1, 1, 0, 0, 1, 0}};

    int count = 0;
    int a, b;

    printf("Digite 10 pares de posições(linha coluna, de 0 a 6):\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d %d", &a, &b);
        if (a >= 0 && a < 7 && b >= 0 && b < 7)
        {
            if (M[a][b] == 1)
            {
                count++;
            }
        }
        else
        {
            printf("Posição inválida: %d %d\n", a, b);
        }
    }

    printf("Foram encontradas %d minas.\n", count);
}