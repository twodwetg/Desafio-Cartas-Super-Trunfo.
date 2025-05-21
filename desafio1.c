# Desafio 1 - Comparação com if / if-else
#include <stdio.h>

int main() {
    int forca1 = 80, forca2 = 70;

    printf("Super Trunfo - Comparando Força\n");
    printf("Carta do Jogador: Força = %d\n", forca1);
    printf("Carta do Oponente: Força = %d\n", forca2);

    if (forca1 > forca2)
        printf("Você venceu!\n");
    else if (forca1 < forca2)
        printf("Você perdeu!\n");
    else
        printf("Empate!\n");

    return 0;
}
