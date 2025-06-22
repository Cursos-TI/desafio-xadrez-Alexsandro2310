#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE (5 casas para a direita)
    // Utiliza estrutura de repetição FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Movimento da Torre em linha reta
    }

    printf("\n");

    // Simulação do movimento do BISPO (5 casas na diagonal para cima e à direita)
    // Utiliza estrutura de repetição WHILE
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int passoBispo = 1;
    while (passoBispo <= 5) {
        printf("Cima Direita\n"); // Movimento diagonal do bispo
        passoBispo++;
    }

    printf("\n");

    // Simulação do movimento da RAINHA (8 casas para a esquerda)
    // Utiliza estrutura de repetição DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int passoRainha = 1;
    do {
        printf("Esquerda\n"); // Movimento da Rainha para esquerda
        passoRainha++;
    } while (passoRainha <= 8);

    return 0;
}

