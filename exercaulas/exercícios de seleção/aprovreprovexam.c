#include <stdio.h>

int main()
{
    float not1, not2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &not1);
    printf("Digite a segunda nota: ");
    scanf("%f", &not2);

    media = (not1 + not2) / 2;
    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("APROVADO\n");
    }
    else if (media >= 3.0)
    {
        printf("EXAME\n");
    }
    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}