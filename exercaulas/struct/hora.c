#include <stdio.h>
#include <stdlib.h>

struct h
{
    int hora;
    int min;
    int seg;
};

int convert(struct h h)
{
    return h.hora * 3600 + h.min * 60 + h.seg;
}

void showdiff(int totalseg)
{
    int h, m, s;
    h = totalseg / 3600;
    totalseg %= 3600;
    m = totalseg / 60;
    s = totalseg % 60;

    printf("A diferenca e: %02d:%02d:%02d\n", h, m, s);
}

int main()
{
    struct h h1, h2;
    int diff, seg1, seg2;

    printf("digite o primeiro horario(hh:mm:ss): ");
    scanf("%d:%d:%d", &h1.hora, &h1.min, &h1.seg);
    while (h1.hora < 0 || h1.hora > 24 || h1.min < 0 || h1.min > 60 || h1.seg < 0 || h1.seg > 60)
    {
        printf("Horario invalido. Tente novamente.\n");
        printf("digite o primeiro horario(hh:mm:ss): ");
        scanf("%d:%d:%d", &h1.hora, &h1.min, &h1.seg);
    }

    printf("digite o segundo horario(hh:mm:ss): ");
    scanf("%d:%d:%d", &h2.hora, &h2.min, &h2.seg);
    while (h2.hora < 0 || h2.hora > 24 || h2.min < 0 || h2.min > 60 || h2.seg < 0 || h2.seg > 60)
    {
        printf("Horario invalido. Tente novamente.\n");
        printf("digite o primeiro horario(hh:mm:ss): ");
        scanf("%d:%d:%d", &h2.hora, &h2.min, &h2.seg);
    }

    seg1 = convert(h1);
    seg2 = convert(h2);
    diff = abs(seg1 - seg2);
    showdiff(diff);
    return 0;
}