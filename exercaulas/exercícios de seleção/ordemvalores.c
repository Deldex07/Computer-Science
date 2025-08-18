#include <stdio.h>

int main()
{
    int a, b, c, menor, meio, maior;

    printf("digite 3 valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // Encontrar o menor
    if (a <= b && a <= c)
        menor = a;
    else if (b <= a && b <= c)
        menor = b;
    else
        menor = c;

    // Encontrar o maior
    if (a >= b && a >= c)
        maior = a;
    else if (b >= a && b >= c)
        maior = b;
    else
        maior = c;

    // O do meio é o que não é nem menor nem maior
    meio = a + b + c - menor - maior;

    printf("Valores crescentes: %d %d %d\n", menor, meio, maior);

    return 0;
}