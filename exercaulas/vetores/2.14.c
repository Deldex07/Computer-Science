#include <stdio.h>

int main()
{
    int A[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        A[i] = 10 * (i + 1);
    }
    printf("Vetor A\n");
    for (i = 0; i < 10; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
}