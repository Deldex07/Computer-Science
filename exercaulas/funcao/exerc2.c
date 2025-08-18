#include <stdio.h>

int fat(int n);

int main()
{
    int n;

    do
    {
        printf("Digite um valor para o calculo fatorial: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Apenas numeros positivos\n");
        }
    } while (n < 0);
    printf("\nO resultado e: %d\n", fat(n));
}

int fat(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fat(n - 1);
    }
}