#include <stdio.h>

int primo(int a, int d)
{
    if (d == a)
    {
        return 1;
    }
    else if (a % d == 0)
    {
        return 0;
    }
    else
    {
        return primo(a, d + 1);
    }
}

void show(int atual)
{
    if (atual > 1000)
        return;

    if (primo(atual, 2))
        printf("%2d ", atual);

    show(atual + 1);
}

int main()
{
    printf("Numeros primos de 2 ate 1000:\n");
    show(2);

    return 0;
}