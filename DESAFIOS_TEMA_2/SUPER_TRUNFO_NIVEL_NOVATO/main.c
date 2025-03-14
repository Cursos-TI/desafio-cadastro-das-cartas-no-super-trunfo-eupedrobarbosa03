#include <stdio.h>

int main(){
    char letra_estado_carta1, letra_estado_carta2;
    char codigo_carta_1[4], codigo_carta_2[4];
    char nome_cidade_carta1[21], nome_cidade_carta2[21];
    unsigned long int populacao_carta1, populacao_carta2;
    float area_carta1 = 4554.6, area_carta2 = 4034.3;
    float PiB_carta1, PiB_carta2;
    int qtd_pontos_turisticos_carta1, qtd_pontos_turisticos_carta2;
    float pib_capita_carta1, pib_capita_carta2;
    float densidade_populacional_carta1, densidade_populacional_carta2;
    float super_PODER_CARTA1, super_PODER_CARTA2;

    printf("*** DUELO DE CARTAS ***\n\n");

    printf("INSIRA OS DADOS DA CARTA 1 ABAIXO:\n");

    printf("Digite uma letra de A a H para representar um Estado: ");
    scanf("%c", &letra_estado_carta1);

    printf("Digite a letra digitado acima + um número de 01 a 04: ");
    scanf("%s", &codigo_carta_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nome_cidade_carta1);

    printf("Digite a população: ");
    scanf("%lu", &populacao_carta1);

    printf("Área definida no código\n");

    printf("Digite o PIB: ");
    scanf("%f", &PiB_carta1);

    printf("Digite a quantiade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos_carta1);

    printf("\nINSIRA OS DADOS DA CARTA 2 ABAIXO:\n");

    getchar();

    printf("Digite uma letra de A a H para representar um Estado: ");
    scanf("%c", &letra_estado_carta2);

    printf("Digite a letra digitado acima + um número de 01 a 04: ");
    scanf("%s", &codigo_carta_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &nome_cidade_carta2);

    printf("Digite a população: ");
    scanf("%lu", &populacao_carta2);

    printf("Área definida no código\n");

    getchar();

    printf("Digite o PIB: ");
    scanf("%f", &PiB_carta2);

    printf("Digite a quantiade de pontos turísticos: ");
    scanf("%d", &qtd_pontos_turisticos_carta2);

    int bilhoes = 1000000000;

    pib_capita_carta1 = (float) (PiB_carta1 / populacao_carta1) * bilhoes;
    densidade_populacional_carta1 = (float) (populacao_carta1 / area_carta1);

    pib_capita_carta2 = (float) (PiB_carta2 / populacao_carta2) * bilhoes;
    densidade_populacional_carta2 = (float) (populacao_carta2 / area_carta2);

    super_PODER_CARTA1 = (float) populacao_carta1, area_carta1, pib_capita_carta1, qtd_pontos_turisticos_carta1, pib_capita_carta1, densidade_populacional_carta1;

    super_PODER_CARTA2 = (float) populacao_carta2, area_carta2, pib_capita_carta2, qtd_pontos_turisticos_carta2, pib_capita_carta1, densidade_populacional_carta2;

    printf("\nINFORMAÇÕES DA CARTA 1 (%s) E CARTA 2 (%s)\n", nome_cidade_carta1, nome_cidade_carta2);

    printf("\nCARTA 1\nLetra do Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2fkm²\nPIB: %.2f bilhões\nQuantidade de Pontos Turísticos: %d\nPIB per Capita: %.2f\nDensidade Populacional: %.5f\nSUPER PODER: %.3f", letra_estado_carta1, codigo_carta_1, nome_cidade_carta1, populacao_carta1, area_carta1, PiB_carta1, qtd_pontos_turisticos_carta1, pib_capita_carta1, densidade_populacional_carta1, super_PODER_CARTA1);

    printf("\n\nCARTA 2\nLetra do Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2fkm²\nPIB: %.2f bilhões\nQuantidade de Pontos Turísticos: %d\nPIB per Capita: %.2f\nDensidade Populacional: %.5f\nSUPER PODER: %.3f\n", letra_estado_carta2, codigo_carta_2, nome_cidade_carta2, populacao_carta2, area_carta2, PiB_carta2, qtd_pontos_turisticos_carta2, pib_capita_carta2, densidade_populacional_carta2, super_PODER_CARTA2);

    char resultado_carta1[51] = "\nResultado: Carta 1 (%s) venceu!";
    char resultado_carta2[51] = "\nResultado: Carta 2 (%s) venceu!";

    printf("*** COMPARAÇÕES DA CARTA 1 *(%s) E CARTA 2 (%s) ***\n\n", nome_cidade_carta1, nome_cidade_carta2);

    printf("Comparação da População");

    printf("\nCarta 1 (%s): %d", nome_cidade_carta1, populacao_carta1);
    printf("\nCarta 2 (%s): %d", nome_cidade_carta2, populacao_carta2);

    if (populacao_carta1 > populacao_carta2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else{
        printf(resultado_carta2, nome_cidade_carta2);
    }

    printf("\n\nComparação da Área km²");

    printf("\nCarta 1 (%s): %.2f", nome_cidade_carta1, area_carta1);
    printf("\nCarta 2 (%s): %.2f", nome_cidade_carta2, area_carta2);

    if (area_carta1 > area_carta2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else{
        printf(resultado_carta2, nome_cidade_carta2);
    }

    printf("\n\nComparação do PIB");

    printf("\nCarta 1 (%s): %.2f", nome_cidade_carta1, PiB_carta1);
    printf("\nCarta 2 (%s): %.2f", nome_cidade_carta2, PiB_carta2);

    if (PiB_carta1 > PiB_carta2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else{
        printf(resultado_carta2, nome_cidade_carta2);
    }

    printf("\n\nComparação de Quantidade de Pontos Turísticos");

    printf("\nCarta 1 (%s): %d", nome_cidade_carta1, qtd_pontos_turisticos_carta1);
    printf("\nCarta 2 (%s): %d", nome_cidade_carta2, qtd_pontos_turisticos_carta2);

    if (qtd_pontos_turisticos_carta1 > qtd_pontos_turisticos_carta2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else {
        printf(resultado_carta2, nome_cidade_carta2);
    }

    printf("\n\nComparação de PIB per Capita");

    printf("\nCarta 1 (%s): %.2f", nome_cidade_carta1, pib_capita_carta1);
    printf("\nCarta 2 (%s): %.2f", nome_cidade_carta2, pib_capita_carta2);

    if (pib_capita_carta1 > pib_capita_carta2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else {
        printf(resultado_carta2, nome_cidade_carta2);
    }

    printf("\n\nComparação de Densidade Populacional. O Estado que possuir menor densidade já venceu este DUELO!");

    printf("\nCarta 1 (%s): %.2f", nome_cidade_carta1, densidade_populacional_carta1);
    printf("\nCarta 2 (%s): %.2f", nome_cidade_carta2, densidade_populacional_carta2);

    if (densidade_populacional_carta1 < densidade_populacional_carta2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else {
        printf(resultado_carta2, nome_cidade_carta2);
    }

    printf("\n\nComparação de SUPER PODER");

    printf("\nCarta 1 (%s): %.2f", nome_cidade_carta1, super_PODER_CARTA1);
    printf("\nCarta 2 (%s): %.2f", nome_cidade_carta2, super_PODER_CARTA2);

    if (super_PODER_CARTA1 > super_PODER_CARTA2){
        printf(resultado_carta1, nome_cidade_carta1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nome_cidade_carta2);
    }

    return 0;
}