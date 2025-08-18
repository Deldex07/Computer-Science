#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Valor de a:%d\n", a);
    printf("Endereco de a:%p\n", &a);
    printf("Valor de p:%p\n", p);
    printf("Endereco de p:%d\n", *p);
}