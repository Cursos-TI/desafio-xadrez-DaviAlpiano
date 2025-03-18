#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
const int bispoMoveV = 5;
const int bispoMoveH = 5;
const int torreMove = 5;
const int rainhaMove = 8;
const int cavaloMoveV = 2;
const int cavaloMoveH = 1;

void bispoMovement(int moveV, int moveH) {
    for(moveV; moveV <= bispoMoveV; moveV++) {
        for(moveH; moveH <= bispoMoveH; moveH++) {
            printf("Bispo se moveu %dx para cima \n", moveH);
        }
        printf("Bispo se moveu %dx para a direita \n", moveV);
    }
}

void torreMovement(int move) {
    if (move <= torreMove) {
        printf("Torre se moveu %dx para a direita \n", move);
        torreMovement(move + 1);
    }
}

void rainhaMovement(int move) {
    if (move <= rainhaMove) {
        printf("Rainha se moveu %dx para a esquerda \n", move);
        rainhaMovement(move + 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int moveBispoV = 1;
    int moveBispoH = 1;
    bispoMovement(moveBispoV, moveBispoH);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int moveTorre = 1;
    torreMovement(moveTorre);    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int moveRainha = 1;
    rainhaMovement(moveRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int moveCavaloH = 1, moveCavaloV = 1; moveCavaloH <= cavaloMoveH; moveCavaloH++)
    {
        while(moveCavaloV <= cavaloMoveV)
        {
            printf("Cavalo se moveu %dx para cima \n", moveCavaloV);
            moveCavaloV++;
        }
        printf("Cavalo se moveu %dx para a direita \n", moveCavaloH);
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
