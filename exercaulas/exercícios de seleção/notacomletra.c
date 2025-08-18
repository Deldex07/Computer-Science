#include <stdio.h>

int main()
{

    float n;

    printf("Digite a nota do aluno: ");
    scanf("%f", &n);

    if (n >= 9.0 && n <= 10.0)
    {
        printf("A\n");
    }
    else if (n >= 7.0 && n <= 9.0)
    {
        printf("B\n");
    }
    else if (n >= 5.0 && n <= 7.0)
    {
        printf("C\n");
    }
    else if (n < 5.0 && n >= 0.0)
    {
        printf("D\n");
    }
}