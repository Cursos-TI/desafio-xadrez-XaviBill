#include <stdio.h>

int main(){

    int bispo = 1;
    int rainha = 1;
    int torre = 1;

    // Movimento do bispo
    while (bispo <= 5) {
        printf("Bispo:Cima,Direita\n");
        bispo++;
    }

    // Movimento da rainha
    do {
        printf("Rainha:Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    // Movimento da torre
    for (torre; torre <= 5; torre++) {
        printf("Torre:Direita\n");
    }

    // Separação
    printf("\n");

    // Movimento do cavalo usando dois loops aninhados (um for obrigatório)
    int i = 0;

    while (i < 1) { 
        for (int j = 0; j < 2; j++) {  // 2 movimentos para baixo
            printf("Cavalo:Baixo\n");
        }

        for (int k = 0; k < 1; k++) {  // 1 movimento para esquerda
            printf("Cavalo:Esquerda\n");
        }

        i++;
    }

    return 0;
}
