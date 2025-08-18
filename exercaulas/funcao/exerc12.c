#include <stdio.h>
#include <string.h>

void nome(char a[50]);

int main()
{
    char n[50];

    printf("Digite seu nome: ");
    fgets(n, 50, stdin);
    n[strcspn(n, "\n")] = '\0';
    nome(n);
}

void nome(char *a)
{
    printf("Seu nome: %s\n", a);
}