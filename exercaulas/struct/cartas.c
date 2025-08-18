#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_naipes 4
#define N_valores 13
#define N_cartas_jogador 5

typedef struct
{
    int naipe;
    int valor;
} Carta;

int main()
{
    char *naipes[N_naipes] = {"Copas", "Ouros", "Espadas", "Paus"};
    char *valores[N_valores] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    // criando baralho
    Carta baralho[N_naipes * N_valores];
    int k = 0;
    for (int i = 0; i < N_naipes; i++)
    {
        for (int j = 0; j < N_valores; j++)
        {
            baralho[k].naipe = i;
            baralho[k].valor = j;
            k++;
        }
    }

    // gerando cartas aleatórias
    srand(time(NULL));

    // embaralha
    for (int i = 0; i < N_naipes * N_valores; i++)
    {
        int r = rand() % (N_naipes * N_valores);
        Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }

    // distribui cartas para o jogador
    Carta jogador1[N_cartas_jogador];
    Carta jogador2[N_cartas_jogador];

    for (int i = 0; i < N_cartas_jogador; i++)
    {
        jogador1[i] = baralho[i];
        jogador2[i] = baralho[i + N_cartas_jogador];
    }

    // exibe cartas

    printf("Cartas do Jogador 1:\n");
    for (int i = 0; i < N_cartas_jogador; i++)
    {
        printf("%s de %s\n", valores[jogador1[i].valor], naipes[jogador1[i].naipe]);
    }

    printf("\nCartas do Jogador 2:\n");
    for (int i = 0; i < N_cartas_jogador; i++)
    {
        printf("%s de %s\n", valores[jogador2[i].valor], naipes[jogador2[i].naipe]);
    }
}