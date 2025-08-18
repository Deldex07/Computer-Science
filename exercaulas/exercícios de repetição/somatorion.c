#include <stdio.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    float soma = 1;
    for (int i = 2; i <= n; i++)
    {
        soma = soma + 1.0 / i;
    }
    printf("Soma: %f\n", soma);
}