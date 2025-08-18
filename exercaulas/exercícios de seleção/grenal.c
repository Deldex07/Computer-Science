#include <stdio.h>

int main()
{

    int golsgremio, golsinter;

    printf("Digite o numero de gols do Gremio: ");
    scanf("%d", &golsgremio);
    printf("Digite o numero de gols do Inter: ");
    scanf("%d", &golsinter);

    if (golsgremio > golsinter)
    {
        printf("Gremio venceu\n");
    }
    else if (golsinter > golsgremio)
    {
        printf("Inter venceu\n");
    }
    else
    {
        printf("Empate\n");
    }
}