#include <stdio.h>
#include <string.h>
#include <ctype.h>

int conta_caracter(char *str, char *c);

int main()
{
    char str[] = "O rato roeu a roupa do rei de Roma e a rainha com raiva rasgou as roupas!";
    char c[] = "R";

    int num_vezes = conta_caracter(str, c);
    printf("O caractere '%c aparace %d vezes na string.\n", c[0], num_vezes);
    return 0;
}

int conta_caracter(char *str, char *c)
{
    int n = strlen(str);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (tolower(str[i]) == tolower(c[0]))
        {
            count++;
        }
    }
    return count;
}