#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Nível Novato - Posicionamento dos Navios

#include <stdio.h>

int main(){

    int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int tabuleiro_batalha[10][10];

        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                tabuleiro_batalha[i][j] = 0;
            }
        }

    // Declara e inicializa os vetores do primeiro navio
    int navio_1_linha[3] = {2, 2, 2};
    int navio_1_coluna[3] = {2, 3, 4};

    for(int i = 0; i < 3; i++){

        tabuleiro_batalha[navio_1_linha[i]][navio_1_coluna[i]] = 3;
    }

    // Declara e inicializa os vetores do segundo navio
    int navio_2_linha[3] = {5, 6, 7};
    int navio_2_coluna[3] = {7, 7, 7};

    for(int i = 0; i < 3; i++){

        tabuleiro_batalha[navio_2_linha[i]][navio_2_coluna[i]] = 3;
    }

    // IMprime o indice das colunas
    printf("*** TABULEIRO BATALHA NAVAL ***\n");
    printf("  ");
    for( int j = 0; j < 10; j++){
        printf("%d ", coluna[j]);
    }

    printf("\n");
    
    for(int i = 0; i < 10; i++){
        //  Imprime o indice da linhas
        printf("%d ", linha[i]); 

        for( int j = 0; j < 10; j++){
            printf("%d ",tabuleiro_batalha[i][j]);
        }
        printf("\n");

    }

    return 0;
}


    