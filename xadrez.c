#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casas_bispo = 5; // O Bispo pode se mover até 7 casas em diagonal
    const int casas_torre = 5; // A Torre pode se mover até 7 casas na horizontal ou vertical
    const int casas_rainha = 8; // A Rainha pode se mover até 7 casas em qualquer direção
    const int casas_cavalo = 2; // O Cavalo se move em "L", 2 casas em uma direção e 1 na perpendicular

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentacao do Bispo 5 casas na diagonal:\n");
    for (int i = 1; i <= casas_bispo; i++) {
        printf("Cima, Direita\n");
    }

    printf("-------------------------\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentacao da Torre 5 casas para a direita:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n", i);
    }

    printf("-------------------------\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentacao da Rainha 8 casas para a esquerda:\n");
    for (int i = 1; i <= casas_rainha; i++) {
        printf("Esquerda\n", i);
    }

    printf("-------------------------\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int i = 1; i <= casas_cavalo; i++) {
        int j = 1;
            while (j <= 1) {
            printf("Baixo\nBaixo \nEsquerda\n");
            printf("\n");
            j++;
        }
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
