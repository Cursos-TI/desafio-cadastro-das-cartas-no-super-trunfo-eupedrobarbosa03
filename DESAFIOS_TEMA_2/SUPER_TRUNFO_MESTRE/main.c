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

    do {

        printf("INSIRA OS DADOS DA CARTA 1 ABAIXO:\n");

        printf("Digite uma letra de A a H para representar um Estado: ");
        scanf("%c", &letra_estado_carta1);

        printf("Digite a letra digitado acima + um número de 01 a 04: ");
        scanf("%s", &codigo_carta_1);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", &nome_cidade_carta1);

        printf("Digite a população: ");
        scanf("%lu", &populacao_carta1);

        printf("Digite a área: ");
        scanf("%f", &area_carta1);

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

        printf("Digite a área: ");
        scanf("%f", &area_carta2);

        getchar();

        printf("Digite o PIB: ");
        scanf("%f", &PiB_carta2);

        printf("Digite a quantiade de pontos turísticos: ");
        scanf("%d", &qtd_pontos_turisticos_carta2);

        //Variável bilhões para não ter que ficar repetido vários 0 várias vezes.
        int bilhoes = 1000000000;

        pib_capita_carta1 = (float) (PiB_carta1 / populacao_carta1) * bilhoes;
        densidade_populacional_carta1 = (float) (populacao_carta1 / area_carta1);

        pib_capita_carta2 = (float) (PiB_carta2 / populacao_carta2) * bilhoes;
        densidade_populacional_carta2 = (float) (populacao_carta2 / area_carta2);

        int atributo_1, atributo_2; //Escolhas dos atributos.
        int vencedor_1, vencedor_2; //Vencedor dd cada atributo.
        
        do {
            printf("\n --- COMPARAÇÕES DE ATRIBUTO --- \n");

            printf("Escolha um atributo da Carta 1 (%s)\n", nome_cidade_carta1);
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Qtd de Pontos Turísticos\n");
            printf("5. PIB per capita\n");
            printf("6. Densidade Populacional\n");
            printf("7. Sair\n> ");
            scanf("%d", &atributo_1);

            printf("\nEscolha um atributo da Carta 2 (%s)\n", nome_cidade_carta2);
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Qtd de Pontos Turísticos\n");
            printf("5. PIB per capita\n");
            printf("6. Densidade Populacional\n");
            printf("7. Sair\n> ");
            scanf("%d", &atributo_2);

            switch(atributo_1) {

                case 1:
                printf("População de %s (Carta 1): %lu", nome_cidade_carta1, populacao_carta1);
                populacao_carta1 > populacao_carta2 ? printf("\nPopulação de %s venceu!!\n", nome_cidade_carta1) : printf("\nPopulação de %s venceu!!\n", nome_cidade_carta2);
                break;

                case 2:
                printf("Área de %s (Carta 1): %.2f", nome_cidade_carta1, area_carta1);
                area_carta1 > area_carta2 ? printf("\nÁrea de %s venceu!\n", nome_cidade_carta1) : printf("\nÁrea de %s venceu!\n", nome_cidade_carta2);
                break;

                case 3:
                printf("PIB de %s (Carta 1): %.2f", nome_cidade_carta1, PiB_carta1);
                PiB_carta1 > PiB_carta2 ? printf("\nPIB de %s venceu!\n", nome_cidade_carta1) : printf("\nPIB de %s venceu!\n", nome_cidade_carta2);
                break;

                case 4:
                printf("QTD Pontos Turísticos de %s (Carta 1): %d", nome_cidade_carta1, qtd_pontos_turisticos_carta1);
                qtd_pontos_turisticos_carta1 > qtd_pontos_turisticos_carta2 ? printf("\nQTD Pontos Turísticos de %s venceu!!\n", nome_cidade_carta1) : 
                printf("\nQTD Pontos Turísticos de %s\n", nome_cidade_carta2);
                break;

                case 5:
                printf("PIB per Capita de %s (Carta 1): %.2f", nome_cidade_carta1, pib_capita_carta1);
                pib_capita_carta1 > pib_capita_carta2 ? printf("\nPIB per Capita de %s venceu!\n", nome_cidade_carta1) : printf("\nPIB per Capita de %s venceu!!\n", nome_cidade_carta2);
                break;

                case 6:
                printf("Densidade Populacional de %s (Carta 1): %.5f", nome_cidade_carta1, densidade_populacional_carta1);
                densidade_populacional_carta1 < densidade_populacional_carta2 ? printf("\nDensidade Populacional de %s venceu!!\n", nome_cidade_carta1) : printf("\nDensidade Populacional de %s venceu!!\n", nome_cidade_carta2);
                break;
            }

            switch(atributo_2) {

                case 1:
                printf("População de %s (Carta 2): %lu", nome_cidade_carta2, populacao_carta2);
                populacao_carta2 > populacao_carta1 ? printf("\nPopulação de %s venceu!!\n", nome_cidade_carta2) : printf("\nPopulação de %s venceu!!\n", nome_cidade_carta1);
                break;

                case 2:
                printf("Área de %s (Carta 2): %.2f", nome_cidade_carta2, area_carta2);
                area_carta2 > area_carta1 ? printf("\nÁrea de %s venceu!\n", nome_cidade_carta2) : printf("\nÁrea de %s venceu!\n", nome_cidade_carta1);
                break;

                case 3:
                printf("PIB de %s (Carta 2): %.2f", nome_cidade_carta2, PiB_carta2);
                PiB_carta2 > PiB_carta1 ? printf("\nPIB de %s venceu!\n", nome_cidade_carta2) : printf("\nPIB de %s venceu!\n", nome_cidade_carta1);
                break;

                case 4:
                printf("QTD Pontos Turísticos de %s (Carta 2): %d", nome_cidade_carta2, qtd_pontos_turisticos_carta2);
                qtd_pontos_turisticos_carta2 > qtd_pontos_turisticos_carta1 ? printf("\nQTD Pontos Turísticos de %s venceu!!\n", nome_cidade_carta2) : 
                printf("\nQTD Pontos Turísticos de %s\n", nome_cidade_carta1);
                break;

                case 5:
                printf("PIB per Capita de %s (Carta 2): %.2f", nome_cidade_carta2, pib_capita_carta2);
                pib_capita_carta2 > pib_capita_carta1 ? printf("\nPIB per Capita de %s venceu!\n", nome_cidade_carta2) : printf("\nPIB per Capita de %s venceu!!\n", nome_cidade_carta1);
                break;

                case 6:
                printf("Densidade Populacional de %s (Carta 2): %.5f", nome_cidade_carta2, densidade_populacional_carta2);
                densidade_populacional_carta2 < densidade_populacional_carta1 ? printf("\nDensidade Populacional de %s venceu!!\n", nome_cidade_carta2) : printf("\nDensidade Populacional de %s venceu!!\n", nome_cidade_carta1);
                break;
            }
        
        } while(atributo_1 != 7 || atributo_2 != 7);

    } while (1);

    return 0;
}