/*
Faça um algoritmo que gera e escreve os números ímpares entre 100 e 200.
Utilize a função resto para verificar se o número é impar.
*/

#include <stdio.h>

int main()
{
    int numero;

    for (numero = 101; numero < 200; numero += 2)
    {
        printf("%d\n", numero);
    }

    return 0;
}