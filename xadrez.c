#include <stdio.h>

// Constantes para as direções
#define CIMA "Cima"
#define BAIXO "Baixo"
#define ESQUERDA "Esquerda"
#define DIREITA "Direita"

// Função para movimentar o Bispo (5 casas na diagonal superior direita)
void moverBispo() {
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("%s e %s\n", CIMA, DIREITA); // Combinação de direções
    }
}

// Função para movimentar a Torre (5 casas para a direita)
void moverTorre() {
    printf("Movimentação da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("%s\n", DIREITA);
    }
}

// Função para movimentar a Rainha (8 casas para a esquerda)
void moverRainha() {
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    for (int i = 1; i <= 8; i++) {
        printf("%s\n", ESQUERDA);
    }
}

int main() {
    // Movimentação das peças
    moverBispo();
    printf("\n");
    moverTorre();
    printf("\n");
    moverRainha();

    return 0;
}