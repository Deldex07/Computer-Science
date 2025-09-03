#include <stdio.h>
#include <string.h>

int conta_palavra(char *str, char *palavra);

int main()
{
    char str[] = "olá mundo, olá amigos!";
    char palavra[] = "olá";
    int contagem = conta_palavra(str, palavra);
    printf("A palavra '%s' aparece %d vezes na string.\n", palavra, contagem);
    return 0;
}

int conta_palavra(char *str, char *palavra)
{
    int cont = 0;
    char *ptr = str;
    int len_palavra = strlen(palavra);

    while ((ptr = strstr(ptr, palavra)) != NULL)
    {
        cont++;
        ptr += len_palavra;
    }
    return cont;
}