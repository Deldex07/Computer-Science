#include <stdio.h>

int main()
{
    float soma = 0;
    for (int i = 1; i <= 100; i++)
    {
        soma = soma + 1.0 / i;
    }

    printf("%f\n", soma);
}