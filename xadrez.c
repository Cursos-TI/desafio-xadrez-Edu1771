#include <stdio.h>

int main() {

    char bispo[20] = "Cima e Direita";
    char torre[20] = "Direita";
    char rainha[20] = "Esquerda";
    int b = 0;
    int t = 5;
    int r = 8;

    // Implementação de Movimentação do Bispo
    printf("\n Movimentação do Bispo \n" );
    for (int b = 5; b > 0; b--) {
        printf("O Bispo se move para: %s\n", bispo);
    }
    
    // Implementação de Movimentação da Torre
    printf("\n Movimentação da Torre \n" );

    
    while (t > 0) {  
        printf("A torre se move para: %s\n", torre);
        t--; 
    }

    // Implementação de Movimentação da Rainha
    printf("\n Movimentação da Rainha \n" );

    do {
        printf("A Rainha se move para: %s\n", rainha);
        r--;  
    } while (r > 0);  


    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
