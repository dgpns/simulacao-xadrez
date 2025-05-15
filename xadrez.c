
// xadrez.c
#include <stdio.h>

int main() {
    // Movimento da Torre (usando estrutura FOR)
    // Torre move-se 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (usando estrutura WHILE)
    // Bispo move-se 5 casas na diagonal para cima e à direita
    int casasBispo = 5;
    int contadorBispo = 0;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha (usando estrutura DO-WHILE)
    // Rainha move-se 8 casas para a esquerda
    int casasRainha = 8;
    int contadorRainha = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
