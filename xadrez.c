#include <stdio.h>

// Definição de constantes para movimentação das peças
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV 1

// Função recursiva para movimentação do Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    printf("Cima\n");
    moverBispo(passos - 1);
}

// Função recursiva para movimentação da Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentação da Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    int i, j;

    // Movimentação do Bispo - 5 casas na diagonal superior direita (usando loops aninhados)
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    // Movimentação da Torre - 5 casas para a direita (recursiva)
    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    // Movimentação da Rainha - 8 casas para a esquerda (recursiva)
    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    // Movimentação do Cavalo - 1 vez em L para cima à direita
    printf("\nMovimentação do Cavalo:\n");
    for (i = 0, j = 0; i < CAVALO_MOV; i++, j++) {
        printf("Cima\n");
        if (i == 0) continue;
        printf("Direita\n");
    }
    
    return 0;
}