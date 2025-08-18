#include <stdio.h>

void fibonacci(int x)
{
    int n1 = 0, n2 = 1, n3, soma = 0;
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", n1);
        soma += n1;
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    printf("Soma dos termos e %d", soma);
}

int main()
{
    int x;
    printf("Digite o numero de termos a calcular: ");
    scanf("%d", &x);

    fibonacci(x);
}