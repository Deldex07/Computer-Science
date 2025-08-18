#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int f = 0, inicio = 0, fim = strlen(str) - 1;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    while (inicio < fim)
    {
        if (str[inicio] != str[fim])
        {
            f = 1; // Não é palíndromo
        }
        inicio++;
        fim--;
    }
    if (f)
        printf("A palavra nao eh palindromo\n");
    else
        printf("A palavra eh palindromo\n");
}