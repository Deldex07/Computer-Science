// Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

#include <stdio.h>
#include <stdlib.h>

int dado()
{
    return (1 + rand() % 6);
}

int main()
{
    int d;
    srand(time(NULL));
    d = dado();
    printf("%d", d);
}