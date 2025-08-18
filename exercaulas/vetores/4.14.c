#include <stdio.h>

int main()
{
    int c[10];
    int i;
    printf("Digite os valores: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &c[i]);
        if (c[i] < 0)
        {
            c[i] = 0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }
}