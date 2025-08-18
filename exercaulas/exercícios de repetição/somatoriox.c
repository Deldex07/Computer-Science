#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    float soma = 1;
    for (int i = 1; i <= 20; i++)
    {
        soma = soma + 1.0 / pow(x, i);
    }
    printf("Soma: %f\n", soma);
}