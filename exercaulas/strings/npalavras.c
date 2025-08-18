#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int count, i, dentro_palavra;

    while (1)
    {
        printf("Digite uma frase (ou ENTER para sair): ");
        fgets(str, sizeof(str), stdin);

        // Sai se o usuário só pressionar ENTER
        if (str[0] == '\n')
            break;

        count = 0;
        dentro_palavra = 0;

        for (i = 0; str[i] != '\0'; i++)
        {
            if (isspace(str[i]))
            {
                dentro_palavra = 0; // terminou uma palavra
            }
            else if (dentro_palavra == 0)
            {
                dentro_palavra = 1; // começou uma nova palavra
                count++;
            }
        }

        printf("Numero de palavras: %d\n", count);
    }
}
