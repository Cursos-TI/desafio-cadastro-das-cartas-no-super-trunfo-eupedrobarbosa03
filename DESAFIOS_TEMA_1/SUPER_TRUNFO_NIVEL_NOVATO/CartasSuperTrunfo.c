#include <stdio.h>

int main(){
    char letra_estado_carta1, letra_estado_carta2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade_carta1[16], nome_cidade_carta2[16];
    int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float PiB_carta1, PiB_carta2;
    int qtd_pontos_turisticos_carta1, qtd_pontos_turisticos_carta2;

    printf("Dados da CARTA 1\n");

    printf("Digite uma letra para representar o Estado (A-H). Digite: ");
    scanf("%c", &letra_estado_carta1);

    printf("Digite o código da carta usando a letra do Estado + (01 a 04). Digite: ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_carta1);

    printf("Digite a população: ");
    scanf("%d", &populacao_carta1);

    printf("Digite a área: ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB: ");
    scanf("%f", &PiB_carta1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos_carta1);

    printf("\nDados da CARTA 2\n");

    getchar();
    printf("Digite uma letra para representar o Estado (A-H). Digite: ");
    scanf("%c", &letra_estado_carta2);

    printf("Digite o código da carta usando a letra do Estado + (01 a 04). Digite: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_carta2);

    printf("Digite a população: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a área: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB: ");
    scanf("%f", &PiB_carta2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos_carta2);

    printf("\nINFORMAÇÕES DA CARTA 1\nLetra do Estado: %c\nCódigo da carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nQuantidade de Pontos turísticos: %d\n", letra_estado_carta1, codigo_carta1, nome_cidade_carta1, populacao_carta1, area_carta1, PiB_carta1, qtd_pontos_turisticos_carta1);

    printf("\nINFORMAÇÕES DA CARTA 2\nLetra do Estado: %c\nCódigo da carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nQuantidade de Pontos turísticos: %d\n", letra_estado_carta2, codigo_carta2, nome_cidade_carta2, populacao_carta2, area_carta2, PiB_carta2, qtd_pontos_turisticos_carta2);
}