#include <stdio.h>

int main()
{
    int d[10], e[10], i;

    printf("Digite os valores: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &d[i]);
        e[i] = d[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("Valores d[%d]: %d\n\n", i, d[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Valores e[%d]: %d\n\n", i, e[i]);
    }
}