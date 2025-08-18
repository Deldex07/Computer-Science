#include <stdio.h>

float med(float a, float b, float c);

int main()
{
    float n1, n2, n3;
    float media;

    printf("Digite n1 e n2 e n3: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = med(n1, n2, n3);
    printf("Media calculada: %f\n", media);
}

float med(float a, float b, float c)
{
    return (a + b + c) / 3;
}