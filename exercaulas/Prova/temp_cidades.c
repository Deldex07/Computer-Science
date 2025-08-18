#include <stdio.h>

typedef struct
{
    char nome[50];
    float temp_max;
    float temp_min;
    float temp_med;
} Cidade;

float gerencia_temp(Cidade *cidades, int n_cidades);

int main()
{
    Cidade cidades[3] = {
        {"São Paulo", 25.0, 15.0, 0.0},
        {"Rio de Janeiro", 28.0, 18.0, 0.0},
        {"Brasília", 22.0, 12.0, 0.0},
    };

    int n_cidades = 3;
    float temp_med_geral = gerencia_temp(cidades, n_cidades);
    printf("Temperatura media geral das cidades: %.2f\n", temp_med_geral);
    for (int i = 0; i < n_cidades; i++)
    {
        printf("Cidades %s: temepratura media = %.2f\n", cidades[i].nome, cidades[i].temp_med);
    }
    return 0;
}

float gerencia_temp(Cidade *cidades, int n_cidades)
{
    float soma = 0.0;
    for (int i = 0; i < n_cidades; i++)
    {
        cidades[i].temp_med = ((cidades[i].temp_max + cidades[i].temp_min) / 2);
        soma += cidades[i].temp_med;
    }
    return soma / n_cidades;
}