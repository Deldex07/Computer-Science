#include <stdio.h>
#include <string.h>

char *inverte_string(char *str)
{
    int tam = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = tam - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

int main()
{
    char str[50];

    printf("Digite a frase: ");
    fgets(str, 50, stdin);

    char *str_invertida = inverte_string(str);
    printf("String invertida: %s\n", str_invertida);
    return 0;
}