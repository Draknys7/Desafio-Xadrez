#include <stdio.h>

int main() {
    // --- Definição das variáveis ---
    int i, j;
    int casasTorre = 5;   // Movimento da Torre
    int casasBispo = 5;   // Movimento do Bispo
    int casasRainha = 8;  // Movimento da Rainha
    int casasBaixoCavalo = 2;  // Movimento vertical do Cavalo
    int casasEsquerdaCavalo = 1; // Movimento horizontal do Cavalo

    // --- Movimento da Torre (FOR) ---
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }

    // --- Movimento do Bispo (WHILE) ---
    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (casa %d)\n", i);
        i++;
    }

    // --- Movimento da Rainha (DO-WHILE) ---
    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda (casa %d)\n", i);
        i++;
    } while (i <= casasRainha);

    // --- Movimento do Cavalo (LOOPS ANINHADOS, AMBOS COM FOR) ---
    printf("\n=== Movimento do Cavalo ===\n");

    // Primeiro loop: movimento vertical (2 casas para baixo)
    for (i = 1; i <= casasBaixoCavalo; i++) {
        printf("Baixo (casa %d)\n", i);
    }

    // Segundo loop: movimento horizontal (1 casa para a esquerda)
    for (j = 1; j <= casasEsquerdaCavalo; j++) {
        printf("Esquerda (casa %d)\n", j);
    }

    return 0;
}
