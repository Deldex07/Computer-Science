#include <stdio.h>
#include <ctype.h>

char verfica(char a);

int main()
{
    char b;

    printf("Digite letra:");
    scanf(" %c", &b);
    char n = verfica(b);
    printf("Tipo: %c\n", n);
}

char verfica(char a)
{
    a = tolower(a);

    if ((a >= 'a' && a <= 'z'))
    {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            return 'V';
        }
        else
        {
            return 'C';
        }
    }
    else
    {
        return 'N';
    }
}