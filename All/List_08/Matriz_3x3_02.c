/*
Escreva um programa que leia uma matriz 3x3 em que cada linha da matriz leia e armazena um nome.
*/

#include <stdio.h>

int main() {
  char nomes[3][3][50]; 

  printf("Que legal! Uma festa! Me diga o nome de 3 pessoas:\n");

  int linha;
  for (linha = 0; linha < 3; linha++) { 
    printf("Digite o nome %d: ", linha + 1); 
    scanf("%s", nomes[linha][0]); 

  printf("\nOlha so a lista de nomes:\n");
  for (linha = 0; linha < 3; linha++) {
    printf("Nome %d: %s\n", linha + 1, nomes[linha][0]); 
  }

  return 0;
}
