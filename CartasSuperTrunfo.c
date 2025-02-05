#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo_cidade[3];
    char nome_cidade[10];
    float populacao;
    float area;
    float PiB;
    int qtd_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("Código da cidade: %s\nCidade: %s\nPopulação: %.3f\nÁrea da cidade: %.3f\nPIB atual: %.2f\nQuantidade de pontos turísticos: %d\n", codigo_cidade, nome_cidade, populacao, area, PiB, qtd_pontos_turisticos);

    return 0;
}
