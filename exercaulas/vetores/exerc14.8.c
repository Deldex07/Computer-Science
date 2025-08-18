#include <stdio.h>
int main()
{
    int Z[10];
    int i, c = 0, v;
    printf("Digite os valores do vetor:");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &Z[i]);
    }

    printf("Digite o valor: ");
    scanf("%d", &v);

    for (i = 0; i < 10; i++)
    {
        if (Z[i] == v)
        {
            c++;
        }
    }
    printf("O  valor %d foi encontrado %d vezes no vetor.\n", v, c);
}