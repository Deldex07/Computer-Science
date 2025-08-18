#include <stdio.h>

int main()
{
    char strings[5][100], s[100];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Digite uma string: ");
        scanf("%s", strings[i]);
    }
    printf("String para localizar: ");
    scanf("%s", s);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; (strings[i][j] != '\0') && (strings[i][j] == s[j]); j++)
            ;
        if ((strings[i][j] == '\0') && (s[j] == '\0'))
            printf("string encontrada na posicao %d\n", i);
    }
}