/*
Implementar um programa que leia uma string do usuário e execute as seguintes tarefas:

- Remover todas as vogais da string.
- Contar o número de vogais na string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[1917], novaStr[1917];
  int i, a = 0, contadorVog = 0;

  printf("Digite uma string: ");
  fgets(str, 1917, stdin);

  str[strcspn(str, "\n")] = 0;

//Loop para remover vogais do "\n":
  for (i = 0; str[i] != '\0'; i++) {
    char ch = tolower(str[i]);  

    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {    //Verifica se e vogal ou não
      novaStr[a++] = str[i]; 
    } else {
      contadorVog++;    
    }
  }

  novaStr[a] = '\0'; 

  printf("Sua string sem vogais: %s\n", novaStr);
  printf("O numero de vogais: %d\n", contadorVog);

  return 0;
}

/*
                    COMENTARIOS:
linha 23 -> 'Loop for', converte o caractre atual para minúsculo para verificar vogais
linha 28 -> 'contadorvog', so é incrementado se for vogal
*/