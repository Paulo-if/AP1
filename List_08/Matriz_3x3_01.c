/*
Escreva um programa que leia uma matriz 3x3 e um número, e verifique se esse número está presente na matriz.
*/

#include <stdio.h>

int main() {
  int tabuleiro[3][3];

  int linha, coluna, numero_procurado, numero_encontrado = 0;

  printf("Vamos jogar um jogo! Preencha o tabuleiro com 9 números:\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      scanf("%d", &tabuleiro[linha][coluna]);
    }
  }

  printf("Qual numero você quer procurar no tabuleiro? ");
  scanf("%d", &numero_procurado);

  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      if (tabuleiro[linha][coluna] == numero_procurado) {
        numero_encontrado = 1; 
        break; 
      }
    }
    if (numero_encontrado == 1) { 
      break;
    }
  }

  if (numero_encontrado == 1) {
    printf("Encontrei o numero %d no tabuleiro!\n", numero_procurado);
  } else {
    printf("Nao encontrei o numero %d no tabuleiro.\n", numero_procurado);
  }

  return 0;
}
