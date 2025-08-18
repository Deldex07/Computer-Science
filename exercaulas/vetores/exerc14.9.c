#include <stdio.h>
int main()
{
    int B[10];
    int i, x;
    printf("Digite os valores do vetor:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Índices onde B[i] == X:\n");
    for (i = 0; i < 10; i++)
    {
        if (B[i] == x)
        {
            printf("%d\n", i);
        }
    }
}