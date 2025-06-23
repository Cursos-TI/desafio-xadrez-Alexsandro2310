#include <stdio.h>

// ----------------------------------------
// Função recursiva para movimentar a Torre
// Movimento: Direita (1 casa por chamada)

void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return; // Caso base: parar a recursão
    printf("Direita\n"); // Movimento da Torre
    moverTorre(casasRestantes - 1); // Chamada recursiva com 1 casa a menos
}


// Função recursiva para movimentar o Bispo
// Movimento: Diagonal para cima e à direita
// Inclui loops aninhados dentro da recursão para mostrar a estrutura mista


void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return; // Caso base
    for (int i = 0; i < vertical; i++) { // Loop externo: sobe
        for (int j = 0; j < horizontal; j++) { // Loop interno: vai para direita
            printf("Cima Direita\n"); // Movimento do Bispo
        }
    }
    moverBispo(vertical - 1, horizontal - 1); // Chamada recursiva com menor movimento
}

// -----------------------------------------------
// Função recursiva para movimentar a Rainha
// Movimento: Esquerda (1 casa por chamada)
// -----------------------------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return; // Caso base
    printf("Esquerda\n"); // Movimento da Rainha
    moverRainha(casasRestantes - 1); // Chamada recursiva com 1 casa a menos
}

// ----------------------------------------------------------------------
// Função com loops complexos para o Cavalo
// Movimento: "L" -> 2 casas para cima + 1 para a direita (simulação)
// Usando múltiplas variáveis, condições, continue e break
// ----------------------------------------------------------------------
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    int verticalMovimento = 2;
    int horizontalMovimento = 1;

    for (int i = 1; i <= verticalMovimento; i++) {
        printf("Cima\n"); // Primeira parte do "L": sobe
        for (int j = 1; j <= horizontalMovimento; j++) {
            if (j == 0) continue; // Não faz sentido, só exemplo de controle
            printf("Direita\n"); // Segunda parte do "L": vai para a direita
            break; // Após um movimento horizontal, finaliza este "L"
        }
    }
}


// Função principal (main)

int main() {

    // Movimento da Torre (recursivo)
    
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre); // Função recursiva
    printf("\n");

    
    // Movimento do Bispo (recursivo + loops aninhados)
    
    int movimentoVerticalBispo = 1;
    int movimentoHorizontalBispo = 1;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(movimentoVerticalBispo * 5, movimentoHorizontalBispo * 1); // Função recursiva com loop interno
    printf("\n");

    
    // Movimento da Rainha (recursivo)
    
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha); // Função recursiva
    printf("\n");

    
    // Movimento do Cavalo (loops complexos)
    
    moverCavalo(); // Com loops aninhados e controle.
    printf("\n");

    return 0;
}