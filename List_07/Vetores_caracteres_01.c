/* QUESTÃO: Implementar um programa que leia uma frase do usuário e execute as seguintes tarefas:
- Contar o número de palavras na frase.
- Contar o número de caracteres na frase.
- Exibir a frase com todas as palavras em maiúsculas.
- Exibir a frase com todas as palavras em minúsculas.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char frase[1917];
  int pala = 0, carac = 0, i;

  printf("Digite uma frase: ");
  fgets(frase, 1917, stdin);    

  frase[strcspn(frase, "\n")] = 0;  

  for (i = 0; frase[i] != '\0'; i++) {  
    if (isspace(frase[i])) {     
      pala++;
    }
    carac++;   
  }
  pala++;   

  printf("\nNumero de palavras na frase e: %d\n", pala);
  printf("Numero de caracteres na frase e: %d\n", carac);

  printf("Sua frase em maiusculas: ");
  for (i = 0; frase[i] != '\0'; i++) {
    putchar(toupper(frase[i])); 
  }
  printf("\n");

  printf("Sua frase em minsculas: ");
  for (i = 0; frase[i] != '\0'; i++) {
    putchar(tolower(frase[i])); 
  }
  printf("\n");

  return 0;
}

/*
                    COMENTARIOS:
linha 18 -> o "fgets", le a entrada do usuário, console e armazena na variável
linha 20 -> 'strcspn'remove o '\n' adicionado à strig frase pelo fgets
linha 22 -> !='\0' adiciona um caractere nulo no final de cada string
linha 23 -> 'isspace' virifica se é um espaço em branco, se for, incrementa o contador
linha 26 -> incremento caractes em toda interação do loop
linha 28 -> conta a ultima palavra da frase
linha 35 -> 'toup'converte o carater atual para maiúsculo
linha 41 -> 'tolower'converte o carater atual para minúsculo, 'putchar' exebi o caractere convertido


*/
