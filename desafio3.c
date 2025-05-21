# Desafio 3 - Comparação com dois atributos e operador ternário
#include <stdio.h>

int main() {
    int escolha1, escolha2;
    int jogador[3] = {70, 85, 60}; // força, magia, velocidade
    int pc[3] = {65, 80, 75};
    int pontosJogador = 0, pontosPC = 0;

    printf("Escolha dois atributos:\n");
    printf("1 - Força\n2 - Magia\n3 - Velocidade\n");

    printf("Primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Segundo atributo: ");
    scanf("%d", &escolha2);

    pontosJogador += (jogador[escolha1 - 1] > pc[escolha1 - 1]) ? 1 : 0;
    pontosPC     += (jogador[escolha1 - 1] < pc[escolha1 - 1]) ? 1 : 0;

    pontosJogador += (jogador[escolha2 - 1] > pc[escolha2 - 1]) ? 1 : 0;
    pontosPC     += (jogador[escolha2 - 1] < pc[escolha2 - 1]) ? 1 : 0;

    if (pontosJogador > pontosPC)
        printf("Você venceu com %d pontos!\n", pontosJogador);
    else if (pontosJogador < pontosPC)
        printf("Você perdeu com %d pontos.\n", pontosJogador);
    else
        printf("Empate! Cada um ficou com %d ponto(s).\n", pontosJogador);

    return 0;
}
