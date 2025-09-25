#include <stdio.h>

int main() {
    // --- Definição das variáveis ---
    int i;
    int casasTorre = 5;   // Quantidade de casas para a Torre
    int casasBispo = 5;   // Quantidade de casas para o Bispo
    int casasRainha = 8;  // Quantidade de casas para a Rainha

    // --- Movimento da Torre (usando FOR) ---
    printf("=== Movimento da Torre ===\n");
    // Torre anda em linha reta -> 5 casas para a direita
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }

    // --- Movimento do Bispo (usando WHILE) ---
    printf("\n=== Movimento do Bispo ===\n");
    // Bispo anda na diagonal -> 5 casas para cima e direita
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (casa %d)\n", i);
        i++;
    }

    // --- Movimento da Rainha (usando DO-WHILE) ---
    printf("\n=== Movimento da Rainha ===\n");
    // Rainha anda em qualquer direção -> 8 casas para a esquerda
    i = 1;
    do {
        printf("Esquerda (casa %d)\n", i);
        i++;
    } while (i <= casasRainha);

    return 0;
}
