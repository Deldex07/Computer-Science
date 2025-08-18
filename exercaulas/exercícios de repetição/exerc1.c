/*
Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma.
*/

#include <stdio.h>

int main()
{
    int numero;

    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        if (numero > 0)
        {
            printf("o numero %d e positivo\n", numero);
        }
        else
        {
            printf("o numero %d e negativo\n", numero);
        }

    } while (numero != 0);
}