#include <stdio.h>

int main()
{

    int codigo;
    float not1, not2, not3, media;

    printf("Digite o codigo do aluno: ");
    scanf("%d", &codigo);

    printf("Digite a primeira nota: ");
    scanf("%f", &not1);

    printf("Digite a segunda nota: ");
    scanf("%f", &not2);

    printf("Digite a terceira nota: ");
    scanf("%f", &not3);

    media = (not1 * 4 + not2 * 3 + not3 * 3) / 10;
    printf("A media e: %.2f\n", media);

    if (media >= 5)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }
}