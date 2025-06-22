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

    printf("\n"); // Separação antes do movimento do Cavalo

    // Simulação do movimento do CAVALO (2 casas para baixo e 1 para a esquerda)
    // Utiliza loops aninhados: FOR externo e WHILE interno
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    int i; // variável para o FOR externo (movimento para baixo)
    for (i = 1; i <= 2; i++) { // FOR simula as 2 casas para baixo
        printf("Baixo\n"); // Etapa de movimento vertical
    }

    // Loop interno (WHILE) para a 1 casa à esquerda
    int j = 1;
    while (j <= 1) { // Movimento de 1 casa para esquerda
        printf("Esquerda\n"); // Etapa de movimento horizontal
        j++;
    }

    return 0;
}


