#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int bispoMove = 5;
    const int torreMove = 5;
    const int rainhaMove = 8;
    const int cavaloMoveV = 2;
    const int cavaloMoveH = 1;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    int moveBispo = 1;
    while (moveBispo <= bispoMove)
    {
        printf("Bispo se moveu %dx para cima direita \n", moveBispo);
        moveBispo++;
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int moveTorre = 1;
    do {
        printf("Torre se moveu %dx para a direita \n", moveTorre);
        moveTorre++;
    } while (moveTorre <= torreMove);
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int moveRainha = 1;
    for (moveRainha = 1; moveRainha <= rainhaMove; moveRainha++)
    {
        printf("Rainha se moveu %dx para a esquerda \n", moveRainha);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int moveCavaloV = 1;
    int moveCavaloH = 1;
    for (moveCavaloH ; moveCavaloH <= cavaloMoveH; moveCavaloH++)
    {
        while(moveCavaloV <= cavaloMoveV)
        {
            printf("Cavalo se moveu %dx para a baixo \n", moveCavaloV);
            moveCavaloV++;
        }
        printf("Cavalo se moveu %dx para a esquerda \n", moveCavaloH);
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
