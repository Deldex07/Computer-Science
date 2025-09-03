#include <stdio.h>

typedef struct
{
    char nome[50];
    float salario;
    float horas_trabalhadas;
    float salario_total;
} Funcionario;

float gerencia_funcionarios(Funcionario *funcionarios, int num_funcionarios);

int main()
{
    Funcionario funcionarios[3] = {
        {"João", 20.0, 40.0, 0.0},
        {"Maria", 25.0, 35.0, 0.0},
        {"José", 30.0, 45.0, 0.0}};
    int num_funcionarios = 3;
    float salario_total_geral = gerencia_funcionarios(funcionarios, num_funcionarios);
    printf("Salário total geral dos funcionários: %.2f\n", salario_total_geral);
    for (int i = 0; i < num_funcionarios; i++)
    {
        printf("Funcionario %s: salário total = %.2f\n", funcionarios[i].nome, funcionarios[i].salario_total);
    }
    return 0;
}

float gerencia_funcionarios(Funcionario *funcionarios, int num_funcionarios)
{
    float soma = 0.0;
    for (int i = 0; i < num_funcionarios; i++)
    {
        funcionarios[i].salario_total = (funcionarios[i].salario * funcionarios[i].horas_trabalhadas);
        soma += funcionarios[i].salario_total;
    }
    return soma;
}