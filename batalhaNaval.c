#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Desafio: Nível Aventureiro - Posicionamento dos Navios em diagonal

int main(){

    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro_batalha[10][10];

        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                tabuleiro_batalha[i][j] = 0;
            }
        }

    // Declara e inicializa os vetores do primeiro navio na horizontal
    int navio_1_linha[3] = {0, 0, 0};
    int navio_1_coluna[3] = {2, 3, 4};

    for(int i = 0; i < 3; i++){

        tabuleiro_batalha[navio_1_linha[i]][navio_1_coluna[i]] = 3;
    }

    // Declara e inicializa os vetores do segundo navio na vertical
    int navio_2_linha[3] = {3, 4, 5};
    int navio_2_coluna[3] = {8, 8, 8};

    for(int i = 0; i < 3; i++){

        tabuleiro_batalha[navio_2_linha[i]][navio_2_coluna[i]] = 3;
    }

    // Declara e inicializa os vetores do terceiro navio na diagonal
    for(int i = 2; i < 5; i++){
        for(int j = 2; j < 5; j++){
            if(i == j){
            tabuleiro_batalha[i][j] = 3;
            }
        }
    }

    // Declara e inicializa os vetores do quarto navio na diagonal
    for(int i = 8; i > 5; i--){
        for(int j = 1; j < 5; j++){
            if(i + j == 9){
            tabuleiro_batalha[i][j] = 3;
            }
        }
    }

    // IMprime o indice das colunas
    printf("*** TABULEIRO BATALHA NAVAL ***\n");
    printf("   ");
    for( int j = 0; j < 10; j++){
        printf("%d ", coluna[j]);
    }

    printf("\n");
    
    for(int i = 0; i < 10; i++){
        //  Imprime o indice da linhas
        printf("%2d ", linha[i]); 

        for( int j = 0; j < 10; j++){
            printf("%d ",tabuleiro_batalha[i][j]);
        }
        printf("\n");

    }

    return 0;
}