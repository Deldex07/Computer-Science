#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rts[100];

    printf("Escreva um texto: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    int tam = strlen(str);

    for (int i = 0; i < tam / 2; i++)
    {
        char aux = str[i];
        str[i] = str[tam - i - 1];
        str[tam - i - 1] = aux;
    }

    strcpy(rts, str);

    printf("%s", rts);
}