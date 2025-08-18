#include <stdio.h>
int main()
{
    int M[4][4] = {{1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4}};
    int l, c, s1 = 0, s2 = 0, s3 = 0, s4 = 0;

    /* for(l=0; l<=3; l++){
        for(c=0; c<=3; c++){
            printf("Digite M[%d][%d]: ", l, c);
            scanf("%d", &M[l][c]);
        }
        printf("\n");
    }
    */

    for (l = 0; l < 2; l++)
    {
        for (c = 0; c < 2; c++)
        {
            s1 += M[l][c];
        }
    }

    for (l = 2; l < 4; l++)
    {
        for (c = 2; c < 4; c++)
        {
            s2 += M[l][c];
        }
    }

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < l; c++)
        {
            s3 += M[l][c];
        }
    }

    for (l = 0; l <= 2; l++)
    {
        for (c = l + 1; c <= 3; c++)
        {
            s4 += M[l][c];
        }
    }

    printf("Soma dos elementos do quadrante 1: %d\n", s1);
    printf("Soma dos elementos do quadrante 2: %d\n", s2);
    printf("Soma dos elementos do quadrante 3: %d\n", s3);
    printf("Soma dos elementos do quadrante 4: %d\n", s4);

    return 0;
}