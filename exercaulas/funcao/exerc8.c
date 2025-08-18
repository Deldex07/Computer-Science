#include <stdio.h>
#include <math.h>

int nulo(float n);
int positivo(float n);
float delta(float a, float b, float c);

int main()
{
    float a, b, c, d, r1, r2;
    int continuar;

    do
    {
        printf("Digite os coeficientes a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);

        if (nulo(a))
        {
            printf("Coeficiente 'a' deve ser diferente de 0.\n");
        }
        else
        {
            d = delta(a, b, c);

            if (positivo(d) || nulo(d))
            {
                r1 = (-b + sqrt(d)) / (2 * a);
                r2 = (-b - sqrt(d)) / (2 * a);
                printf("Raízes reais:\nRaiz 1: %.2f\nRaiz 2: %.2f\n", r1, r2);
            }
            else
            {
                float parte_real = -b / (2 * a);
                float parte_imaginaria = sqrt(-d) / (2 * a);
                printf("Raízes complexas:\n");
                printf("Raiz 1: %.2f + i%.2f\n", parte_real, parte_imaginaria);
                printf("Raiz 2: %.2f - i%.2f\n", parte_real, parte_imaginaria);
            }
        }

        printf("\nCalcular mais raízes?\n1. Continuar\n0. Sair\n");
        scanf("%d", &continuar);
    } while (continuar == 1);

    return 0;
}

int nulo(float n)
{
    return n == 0;
}

int positivo(float n)
{
    return n > 0;
}

float delta(float a, float b, float c)
{
    return (b * b) - (4 * a * c);
}