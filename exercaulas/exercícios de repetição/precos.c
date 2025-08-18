#include <stdio.h>

int main()
{
    float preco, caro, barato, pcd;
    caro = 0.00;
    barato = 1000000.00;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

        if (preco > caro)
        {
            caro = preco;
        }
        if (preco < barato)
        {
            barato = preco;
        }
    }

    pcd = barato - (barato * 0.12);
    printf("O produto mais caro custa: R$%.2f\n", caro);
    printf("Produto com desconto de 12%%: R$%.2f\n", pcd);
}