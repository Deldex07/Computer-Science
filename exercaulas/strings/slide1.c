#include <stdio.h>

int main()
{
    char texto[100];
    int i;
    scanf("%s", texto);
    for (i = 0; texto[i] != '\0'; i++)
        ;
    printf("%d\n", i);
}