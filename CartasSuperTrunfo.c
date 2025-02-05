#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char codigo_cidade[3];
    char nome_cidade[12];
    float populacao;
    float area;
    float PiB;
    int qtd_pontos_turisticos;
        
    printf("Insira o código da cidade: ");
    scanf("%s", &codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("População da cidade: ");
    scanf("%f", &populacao);

    printf("Área da cidade: ");
    scanf("%f", &area);

    printf("PIB atual: ");
    scanf("%f", &PiB);

    printf("A cidade possui quantos pontos turísticos? Digite: ");
    scanf("%d", &qtd_pontos_turisticos);

    //Se usar o formatador de casa decimal, a exibição fica limitada.
    printf("Código da cidade: %s\nCidade: %s\nPopulação: %f\nÁrea da cidade: %f\nPIB atual: %f\nQuantidade de pontos turísticos: %d\n", codigo_cidade, nome_cidade, populacao, area, PiB, qtd_pontos_turisticos);

    return 0;
}
