#include <stdio.h>

int main()
{
    int mapa[5][5] = {
        {0, 30, 45, 60, 90},
        {30, 0, 20, 40, 70},
        {45, 20, 0, 30, 60},
        {60, 40, 30, 0, 50},
        {90, 70, 60, 50, 0}};

    int c1, c2;
    printf("Digite o número das duas cidades (0 a 4):");
    scanf("%d %d", &c1, &c2);

    if (c1 >= 0 && c1 < 5 && c2 >= 0 && c2 < 5)
    {
        printf("Tempo de viagem entre cidade %d e cidade %d: %d minutos\n", c1, c2, mapa[c1][c2]);
    }
    else
    {
        printf("Índices de cidades inválidos\n");
    }
}