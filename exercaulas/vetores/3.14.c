#include <stdio.h>

int main()
{
    int b[10], i;

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            b[i] = 10;
        }
        else
        {
            b[i] = 20;
        }
    }
    printf("Vetor A\n");
    for (i = 0; i < 10; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
}