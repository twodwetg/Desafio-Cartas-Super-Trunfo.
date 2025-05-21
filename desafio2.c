# Desafio 2 - Comparação com múltiplos atributos e switch
#include <stdio.h>

int main() {
    int escolha;
    int cartaJogador[3] = {80, 70, 60};  // força, magia, velocidade
    int cartaPC[3] = {75, 65, 85};

    printf("Escolha o atributo:\n");
    printf("1 - Força\n2 - Magia\n3 - Velocidade\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            if (cartaJogador[0] > cartaPC[0])
                printf("Você venceu na Força!\n");
            else if (cartaJogador[0] < cartaPC[0])
                printf("Você perdeu na Força.\n");
            else
                printf("Empate na Força.\n");
            break;
        case 2:
            if (cartaJogador[1] > cartaPC[1])
                printf("Você venceu na Magia!\n");
            else if (cartaJogador[1] < cartaPC[1])
                printf("Você perdeu na Magia.\n");
            else
                printf("Empate na Magia.\n");
            break;
        case 3:
            if (cartaJogador[2] > cartaPC[2])
                printf("Você venceu na Velocidade!\n");
            else if (cartaJogador[2] < cartaPC[2])
                printf("Você perdeu na Velocidade.\n");
            else
                printf("Empate na Velocidade.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
