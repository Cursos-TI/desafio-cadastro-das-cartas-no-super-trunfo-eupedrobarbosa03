#include <stdio.h>

#define LINHAS_TABULEIRO 10
#define COLUNAS_TABULEIRO 10
#define TAMANHO_MAX_NAVIO 3

int main() {

    //Tabuleiro 10x10.
    int tabuleiro[LINHAS_TABULEIRO][COLUNAS_TABULEIRO];

    //Tabuleiro 10x10 criado com laços for alinhados.
    for(int i = 0; i < LINHAS_TABULEIRO; i++) {
        for(int j = 0; j < COLUNAS_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //Os navios são representando pelo número 3.
    int representar_navios = 3;

    //Posições dos navios.
    int pos_horizontal, pos_vertical, pos_diagonal;

    //Navios e posições
    int navio1;
    int navio2;
    int navio3;
    int navio4;

    //Navio 1
    for(pos_horizontal = 3; pos_horizontal < 6; pos_horizontal++) {
        tabuleiro[4][pos_horizontal] = representar_navios;
    }

    //Navio 2
    for(pos_vertical = 0; pos_vertical < 3; pos_vertical++) {
        tabuleiro[pos_vertical][4] = representar_navios;
    }

    //Navio 3
    for(pos_diagonal = 0; pos_diagonal < 3; pos_diagonal++) {
        tabuleiro[pos_diagonal][pos_diagonal] = representar_navios;
    }

    //Navio 4
    for(pos_diagonal = 7; pos_diagonal < 10; pos_diagonal++) {
        tabuleiro[pos_diagonal][pos_diagonal] = representar_navios;
    }

    for(int i = 0; i < LINHAS_TABULEIRO; i++) {
        for(int j = 0; j < COLUNAS_TABULEIRO; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}