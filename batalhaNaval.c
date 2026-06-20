#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // inicio da posição x
//     char letras [5] = {'A', 'B', 'C', 'D', 'E'};

//     printf("\t");
//     for (int i = 0;i < 5;i++){
//         printf("%c\t", letras[i]);
//     }

//     printf("\n");
//     // fim da posição x

//     //inicio posição y
//     int matriz[5][5] = {
//         {0, 0, 3, 0, 0},
//         {0, 0, 3, 0, 0},
//         {0, 0, 3, 0, 0},
//         {0, 0, 0, 0, 0},
//         {0, 3, 3, 3, 0}
//     };

//     for(int i = 0;i < 5;i++){
//         printf("%d\t", i + 1);

//         for(int j = 0; j < 5; j++){
//             printf("%d\t", matriz[i][j]);
//         }
//         printf("\n");
//     }
//    printf("\n");
//    //fim posição y
   
    
//     return 0;

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

//     char letras [letra];

//     for (int i = 0; i < letra; i++) {
//         letras[i] = 'A' + i;
//     }

//     printf("\t");
//     for (int i = 0; i < letra; i++) {
//     printf("%c\t", letras[i]);
//     }
//     printf("\n");
//     // fim da posição x

//     //inicio posição y
    
//     int matriz[LINHAS][COLUNAS] = {
//         {3, 0, 0, 0, 0, 0, 0, 0, 0, 3},
//         {0, 3, 0, 0, 0, 0, 0, 0, 3, 0},
//         {0, 0, 3, 0, 0, 0, 0, 3, 0, 0},
//         {0, 0, 0, 3, 0, 0, 3, 0, 0, 0},
//         {0, 0, 0, 0, 3, 3, 0, 0, 0, 0},
//         {0, 0, 0, 0, 3, 3, 0, 0, 0, 0},
//         {0, 0, 0, 3, 0, 0, 3, 0, 0, 0},
//         {0, 0, 3, 0, 0, 0, 0, 3, 0, 0},
//         {0, 3, 0, 0, 0, 0, 0, 0, 3, 0},
//         {3, 0, 0, 0, 0, 0, 0, 0, 0, 3},
//     };

//     for(int i = 0; i < LINHAS;i++){
//         printf("%d\t", i + 1);

//         for(int j = 0; j < COLUNAS; j++){
//             printf("%d\t", matriz[i][j]);
//         }
//         printf("\n");
//     }
//    printf("\n");
//    //fim posição y
   
    
//     return 0;

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    int matriz [LINHAS][COLUNAS];
    
    //inicializando a matriz em 0
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            matriz[i][j] = 0;
        }
    }

    //cone
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 5; j++){
            if (j >= 2 - i && j <= 2 + i) {  // centro em j=2
            matriz[i][j] = 1; // Valor 1 para o cone
            }
            
        }
    }

    //octaedo
    for (int i = -1; i <= 1; i++){
        for (int j = -1; j <= 1; j++){
            if (abs(i) + abs(j) <= 1) {
                matriz[4 + i][4 + j] = 2; // Valor 2 para o octaedro
            }
        }
    }

    //CRUZ
    for (int i = -1; i <= 1; i++){
        for (int j = -1; j <= 1; j++){
            if (i == 0 || j == 0) {
                matriz[7 + i][7 + j] = 3; // Valor 3 para a cruz
            }
        }
    }


    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
