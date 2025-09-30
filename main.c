#include <stdio.h>

int main(void) {
  int option;
  int mainLoop = 1;
  
  printf("Bem-vindo ao jogo da velha em C!");
  
  while (mainLoop == 1)
    {
    printf("\n1 - Iniciar");
      
    printf("\n2 - Instruções");
      
    printf("\n3 - Sair.\n");
    printf("\nDigite a opção: ");
      
    scanf("%d", &option);
      
    switch(option)
      {
        case 1:
          {
            printf("\nNão implementado.");

            break;
          }
        case 2:
          {
            printf("\nNo jogo da velha, seu objetivo é fazer uma sequência de 3 X ou 3 Os em uma grade de 3x3. \nA sequência pode ser feita na vertical ou horizontal. \nCada jogador pode colocar 1 (um) de seu símbolo de escolha por turno. \nO símbolo é escolhido por um dos jogadores, sendo as escolhas X ou O. \n");

            break;
          }
        case 3:
          {
            printf("\nBye bye! :(");
            
            mainLoop = 0;

            break;
          }
      }
    }
  return 0;
}