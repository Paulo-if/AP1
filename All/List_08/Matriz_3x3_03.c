/*
Escreva um programa que leia uma matriz 3x3 e imprima os valores de forma organizada.

Exemplo:

[01] [02] [03] 

[04] [05] [06]

[07] [08] [09]
*/

#include <stdio.h>

int main() {
  int tabela[3][3];

  printf("Forneca valores para preencher uma matriz de 3x3!\n");

  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
      printf("Digite o numero da linha %d, coluna %d: ", linha + 1, coluna + 1);
      scanf("%d", &tabela[linha][coluna]);
    }
  }

  printf("\nAqui esta a tabela que voce criou:\n");

  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
      printf("[%02d] ", tabela[linha][coluna]);
    }
    printf("\n");
  }

  return 0;
}
