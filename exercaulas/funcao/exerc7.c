#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c)
{
    return (b * b) - (4 * a * c);
}
int main()
{
    float a, b, c, d;
    char s;

    do
    {
        do
        {

            printf("digite a: ");
            scanf("%f", &a);
            if (a == 0)
            {
                printf("'a' nao pode ser zero, tente novamente:\n");
            }
        } while (a == 0);

        printf("digite b: ");
        scanf("%f", &b);
        printf("Digite c: ");
        scanf("%f", &c);

        d = delta(a, b, c);
        printf("Delta: %.2f\n", d);
        printf("continuar?(s,n)\n");
        scanf(" %c", &s);

    } while (s == 's' || s == 'S');
}