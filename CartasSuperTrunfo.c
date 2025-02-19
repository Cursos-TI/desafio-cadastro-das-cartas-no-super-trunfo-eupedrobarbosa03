#include <stdio.h>

int main(){
    char letra_estado;
    char codigo_carta[4];
    char nome_cidade[16];
    int populacao;
    float area;
    float PiB;
    int qtd_pontos_turisticos;

    printf("Dados da CARTA 1\n");

    printf("Digite uma letra para representar o Estado (A-H). Digite: ");
    scanf("%c", &letra_estado);

    printf("Digite o código da carta usando a letra do Estado + (01 a 04). Digite: ");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PiB);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos);

    printf("\nINFORMAÇÕES DA CARTA 1\nLetra do Estado: %c\nCódigo da carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nQuantidade de Pontos turísticos: %d\n", letra_estado, codigo_carta, nome_cidade, populacao, area, PiB, qtd_pontos_turisticos);

    printf("\nDados da CARTA 2\n");

    getchar();
    printf("Digite uma letra para representar o Estado (A-H). Digite: ");
    scanf("%c", &letra_estado);

    printf("Digite o código da carta usando a letra do Estado + (01 a 04). Digite: ");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &PiB);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos);

    printf("\nINFORMAÇÕES DA CARTA 2\nLetra do Estado: %c\nCódigo da carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nQuantidade de Pontos turísticos: %d\n", letra_estado, codigo_carta, nome_cidade, populacao, area, PiB, qtd_pontos_turisticos);

}