#include <stdio.h>
#include <stdlib.h>

struct dma
{
    int dia, mes, ano;
};

int bissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int data_valida(struct dma d)
{
    int dias_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.mes < 1 || d.mes > 12)
        return 0;
    if (d.dia < 1)
        return 0;
    if (d.mes == 2 && bissexto(d.ano))
    {
        return d.dia <= 29;
    }
    return d.dia <= dias_mes[d.mes - 1];
}

struct dma ler_data(char *mensagem)
{
    struct dma d;
    printf("%s", mensagem);
    while (1)
    {
        scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
        if (data_valida(d))
            break;
        printf("Data inválida. Tente novamente: ");
    }
    return d;
}

int total_dias(struct dma d)
{
    int dias_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;

    for (int i = 0; i < d.ano; i++)
    {
        total += 365 + bissexto(i);
    }

    for (int i = 0; i < d.mes - 1; i++)
    {
        total += dias_mes[i];
        if (i == 1 && bissexto(d.ano))
        {
            total += 1; // fevereiro
        }
    }

    total += d.dia;

    return total;
}

void imprimir_diferenca(int diff)
{
    int anos = diff / 365;
    int meses = (diff % 365) / 30;
    int dias = (diff % 365) % 30;
    printf("A diferença entre as datas é de %d dias.\n", diff);
    printf("Ou aproximadamente: %02d anos, %02d meses e %02d dias.\n", anos, meses, dias);
}

int main()
{
    struct dma data1 = ler_data("Digite a primeira data (dd/mm/aaaa): ");
    struct dma data2 = ler_data("Digite a segunda data (dd/mm/aaaa): ");

    int dias1 = total_dias(data1);
    int dias2 = total_dias(data2);

    int diferenca = abs(dias1 - dias2);

    imprimir_diferenca(diferenca);

    return 0;
}
