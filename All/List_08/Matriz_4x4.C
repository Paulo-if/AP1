/*
Escreva um programa que leia uma matriz 4x4 e imprima o maior elemento da matriz.
*/

#include <stdio.h>

int main() {
  int caixa[4][4];

  int linha, coluna, maior_numero;

  printf("Por favor, guarde 16 numeros na caixa:\n");

  
  for (linha = 0; linha < 4; linha++) { 
    for (coluna = 0; coluna < 4; coluna++) { 
      scanf("%d", &caixa[linha][coluna]);
    }
  }

  maior_numero = caixa[0][0];

  for (linha = 0; linha < 4; linha++) {
    for (coluna = 0; coluna < 4; coluna++) {
      if (caixa[linha][coluna] > maior_numero) {
        maior_numero = caixa[linha][coluna];
      }
    }
  }

  printf("O maior numero na caixa e: %d\n", maior_numero);

  return 0;
}
