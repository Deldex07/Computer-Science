#include <stdio.h>
#include <string.h>

void dobrar(int *numero)
{
    *numero = *numero * 2;
}

int main()
{
    int nu;

    printf("Digite um numero inteiro: ");
    scanf("%d", &nu);

    dobrar(&nu);

    printf("Esse e o dobro: %d\n", nu);
}