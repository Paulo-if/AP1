/*Implementar um programa que leia uma string do usuário e execute as seguintes tarefas:
- Remover os espaços da string. 
- Substituir todas as ocorrências de uma determinada letra por outra '*'.

*/

#include <stdio.h>
#include <string.h>

int main() {
  char string[1917], novaStr[1917], letraAnti,  letraNo = '*';
  int i, nova = 0;

  printf("Digite uma string: ");
  fgets(string, 1917, stdin);

  string[strcspn(string, "\n")] = 0;

  printf("Digite a letra que deseja substituir: ");
  scanf(" %c", &letraAnti);

//Loop que remove espaçso e substitui a letra:
  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] != ' ') { 
      if (string[i] == letraAnti) {
        novaStr[nova++] = letraNo;
      } else {
        novaStr[nova++] = string[i]; 
      }
    }
  }

  novaStr[nova] = '\0'; 

  printf("String modificada: %s\n", novaStr);

  return 0;
}

/*
                    COMENTARIOS:
Loop que remove espaçso e substitui a letra:
    Se o caractere string[i] não for um espaço em branco (string[i] != ' '), ele é processado:
Se o caractere for igual à letraAnti, o caractere letraNo é adicionado à novaStr. Caso contrário, o caractere original é adicionado à novaStri.
O contador nova é incrementado sempre que um caractere é adicionado à novaStr, garantindo que os caracteres sejam colocados nas corretas posições.

*/