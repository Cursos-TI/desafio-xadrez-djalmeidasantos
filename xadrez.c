#include <stdio.h>

// Definição de constantes para movimentação das peças
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Função recursiva para movimentação do Bispo
void mover_bispo(int movimentos) {
    if (movimentos == 0) return;
    printf("Diagonal Superior Direita\n");
    mover_bispo(movimentos - 1);
}

// Função recursiva para movimentação da Torre
void mover_torre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    mover_torre(movimentos - 1);
}

// Função recursiva para movimentação da Rainha
void mover_rainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    mover_rainha(movimentos - 1);
}

// Função para movimentação do Cavalo com loops aninhados
void mover_cavalo() {
    for (int i = 0; i < 1; i++) { // Simula o movimento em L
        for (int j = 0; j < 2; j++) {
            printf("Baixo\n");
        }
        for (int k = 0; k < 1; k++) {
            printf("Esquerda\n");
        }
    }
}

// Função para movimentação avançada do Cavalo com múltiplas variáveis e controle de fluxo
void mover_cavalo_mestre() {
    int movimentos = 3;
    for (int i = 0, j = 0; i < movimentos; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            break;
        }
        j++;
    }
    while (movimentos > 0) {
        printf("Direita\n");
        movimentos--;
    }
}

int main() {
    printf("--- Nível Novato ---\n");
    printf("Movimentação do Bispo:\n");
    mover_bispo(MOV_BISPO);
    
    printf("\nMovimentação da Torre:\n");
    mover_torre(MOV_TORRE);
    
    printf("\nMovimentação da Rainha:\n");
    mover_rainha(MOV_RAINHA);
    
    printf("\n--- Nível Aventureiro ---\n");
    printf("Movimentação do Cavalo:\n");
    mover_cavalo();
    
    printf("\n--- Nível Mestre ---\n");
    printf("Movimentação avançada do Cavalo:\n");
    mover_cavalo_mestre();
    
    return 0;
}
