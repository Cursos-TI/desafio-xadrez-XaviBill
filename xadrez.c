#include <stdio.h>

// Torre: recursividade simples
void moverTorre(int casas){
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Rainha: recursividade simples
void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Bispo: recursividade + loops aninhados
void moverBispo(int passos, int limite){
    if (passos > limite) {
        return;
    }

    // Loop externo: movimento vertical
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        // Loop interno: movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    // Chamada recursiva
    moverBispo(passos + 1, limite);
}

int main() {
    printf("Torre:\n");
    moverTorre(5);   // Torre anda 5 casas para a direita
    printf("\n");

    printf("Rainha:\n");
    moverRainha(8);  // Rainha anda 8 casas para a esquerda
    printf("\n");

    printf("Bispo:\n");
    moverBispo(1, 5); // Bispo anda 5 vezes em diagonal
    printf("\n");

    
    //Movimento do cavalo
    int i = 0;
    printf("Cavalo:\n");
        while (i < 1) { 
        for (int j = 0; j < 2; j++) {  // 2 movimentos para baixo
            printf("Cima\n");
        }

        for (int k = 0; k < 1; k++) {  // 1 movimento para esquerda
            printf("Direita\n");
        }

        i++;
    }



    return 0;
}
