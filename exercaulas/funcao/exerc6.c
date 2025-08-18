#include <stdio.h>

int positivo(int n)
{
    return n > 0;
}

int main()
{
    int a;
    printf("informe o valor: ");
    scanf("%d", &a);

    positivo(a);
    printf("O valor %d e positivo? %d\n", a, positivo(a));
    return 0;
}