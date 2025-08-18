#include <stdio.h>

int main()
{
    int x[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        x[i] = 30;
    }
    printf("Vetor x preenchido\n");
    for (i = 0; i < 10; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
}