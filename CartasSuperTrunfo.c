#include <stdio.h>

int main(){
    char letra_estado_carta1, letra_estado_carta2;
    char codigo_carta1[4], codigo_carta2[4];
    char nome_cidade_carta1[16], nome_cidade_carta2[16];
    int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    int qtd_pontos_turisticos_carta1, qtd_pontos_turisticos_carta2;


    printf("DADOS CARTA 1\n");

    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf("%c", &letra_estado_carta1);

    printf("Digite a letra do Estado + um número de 01 a 04. Exemplo(A01): ");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade_carta1);

    printf("Digite a população de %s: ", nome_cidade_carta1);
    scanf("%d", &populacao_carta1);

    printf("Digite a área: ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);

    printf("Quantos pontos turísticos possui %s? ", nome_cidade_carta1);
    scanf("%d", &qtd_pontos_turisticos_carta1);

    printf("INFORMAÇÕES DA CARTA 1\n");

    float densidade_populacional_carta1 = (float) populacao_carta1 / area_carta1;
    float pib_por_capita_carta1 = (float) (pib_carta1 * 1000000000) / populacao_carta1;

    printf("Letra do Estado: %c\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f\nQuantidade de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB por Capita: %.2f reais.\n", letra_estado_carta1, codigo_carta1, nome_cidade_carta1, populacao_carta1, area_carta1, pib_carta1, qtd_pontos_turisticos_carta1, densidade_populacional_carta1, pib_por_capita_carta1);

    printf("\nDADOS CARTA 2\n");

    getchar();

    printf("Digite uma letra de A a H para representar o Estado: ");
    scanf("%c", &letra_estado_carta2);

    printf("Digite a letra do Estado + um número de 01 a 04. Exemplo(A01): ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade_carta2);

    printf("Digite a população de %s: ", nome_cidade_carta2);
    scanf("%d", &populacao_carta2);

    printf("Digite a área: ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);

    printf("Quantos pontos turísticos possui %s? ", nome_cidade_carta2);
    scanf("%d", &qtd_pontos_turisticos_carta2);

    printf("INFORMAÇÕES DA CARTA 2\n");

    float densidade_populacional_carta2 = (float) populacao_carta2 / area_carta2;
    float pib_por_capita_carta2 = (float) (pib_carta2 * 1000000000) / populacao_carta2;

    printf("Letra do Estado: %c\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f\nQuantidade de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB por Capita: %.2f reais.", letra_estado_carta2, codigo_carta2, nome_cidade_carta2, populacao_carta2, area_carta2, pib_carta2, qtd_pontos_turisticos_carta2, densidade_populacional_carta2, pib_por_capita_carta2);

    
    return 0;
}