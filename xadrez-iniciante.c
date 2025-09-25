#include <stdio.h>


/* Função recursiva para movimentar a TORRE (sempre para a direita) */
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Condição de parada
    printf("Direita (casa %d)\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Função recursiva para movimentar o BISPO.
 
void moverBispo(int casas, int vertical, int horizontal) {
    if (vertical > casas) return; // Condição de parada para a recursão

    // Loop interno (horizontal)
    for (int h = 1; h <= horizontal; h++) {
        printf("Diagonal: Cima e Direita (Passo %d * %d)\n", vertical, h);
    }

    moverBispo(casas, vertical + 1, horizontal); // Próximo passo vertical
}

/* Função recursiva para movimentar a RAINHA (sempre para a esquerda) */
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Esquerda (casa %d)\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

//   LOOP COMPLEXO - CAVALO
 

void moverCavalo(int maxUp, int maxRight) {
    printf("\n=== Movimento do Cavalo ===\n");

    for (int up = 1; up <= maxUp; up++) {
        for (int right = 1; right <= maxRight; right++) {

            // Simula o movimento em "L": só imprime na última iteração
            if (up == maxUp && right == maxRight) {
                printf("Cima (casa %d)\n", up);
                printf("Cima (casa %d)\n", up + 1);  // Segunda casa para cima
                printf("Direita (casa %d)\n", right);
                break; // Sai do loop interno após completar o "L"
            }

            if (up < maxUp) {
                continue; 
            }
        }
    }
}

//   PROGRAMA PRINCIPAL
  

int main() {
    // Variáveis para definir quantas casas cada peça se move
    int casasTorre = 5;
    int casasverticalBispo = 3;  // vertical
    int casasHorizontaisBispo = 2;
    int casasRainha = 6;
    int movimentoCavaloUp = 2;
    int movimentoCavaloRight = 1;

    // --- Movimentos com recursividade ---
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre, 1);

    printf("\n=== Movimento do Bispo ===\n");
    moverBispo(casasverticalBispo, 1, casasHorizontaisBispo);

    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha, 1);

    // --- Movimento do Cavalo (loops complexos) ---
    moverCavalo(movimentoCavaloUp, movimentoCavaloRight);

    return 0;
}
