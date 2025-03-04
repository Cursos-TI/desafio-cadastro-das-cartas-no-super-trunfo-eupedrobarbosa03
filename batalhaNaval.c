#include <stdio.h>

int main(){
    //Tabuleiro 10x10
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int navio1 = 3;
    int navio2 = 3;
    int navio3 = 3;
    int navio4 = 3;

    tabuleiro[9][0] = navio1;
    tabuleiro[9][1] = navio1;
    tabuleiro[9][2] = navio1;

    tabuleiro[7][8] = navio2;
    tabuleiro[6][8] = navio2;
    tabuleiro[5][8] = navio2;

    tabuleiro[0][0] = navio3;
    tabuleiro[1][1] = navio3;
    tabuleiro[2][2] = navio3;

    tabuleiro[0][9] = navio4;
    tabuleiro[1][8] = navio4;
    tabuleiro[2][7] = navio4;
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
}