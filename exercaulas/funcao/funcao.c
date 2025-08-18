#include <stdio.h>

typedef struct
{
    char nome[50];
    float nota1;
    float nota2;
    float media;
} Aluno;
// Função a ser implementada:
float calcula_media_alunos(Aluno *alunos, int num_alunos)
{
    float soma = 0.0;

    for (int i = 0; i < num_alunos; i++)
    {
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2.0;
        soma += alunos[i].media;
    }
    return soma / num_alunos;
}
// Exemplo de uso:
int main()
{
    Aluno alunos[3] = {
        {"João", 8.0, 9.0, 0.0},
        {"Maria", 7.0, 8.0, 0.0},
        {"Pedro", 9.0, 10.0, 0.0}};
    int num_alunos = 3;
    float media_geral = calcula_media_alunos(alunos, num_alunos);
    printf("Média geral: %.2f\n", media_geral);
    for (int i = 0; i < num_alunos; i++)
    {
        printf("Aluno %s: média = %.2f\n", alunos[i].nome, alunos[i].media);
    }
    return 0;
}