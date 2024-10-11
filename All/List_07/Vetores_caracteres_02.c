/*Implementar um programa que leia uma string do usuário e execute as seguintes tarefas:
- Inverter a ordem dos caracteres da string.
- Verificar se a string é um palíndromo (uma palavra, número ou outra sequência de caracteres que lê da mesma forma tanto da esquerda para a direita quanto da direita para a esquerda).
*/

#include <stdio.h>
#include <string.h>

int main() {
  char string[1917], inverti[1917];
  int i, in, grandao, palindromo = 1; 

  printf("Digite uma frase(string): ");
  fgets(string, 1917, stdin);       
  string[strcspn(string, "\n")] = 0;    

  grandao = strlen(string);     
  for (i = grandao - 1, in = 0; i >= 0; i--, in++) {
    inverti[in] = string[i];
  }
  inverti[grandao] = '\0'; 

  printf("A frase(string) invertida: %s\n", inverti);

// loop do palindromo:
  for (i = 0, in = grandao - 1; i < grandao / 2; i++, in--) {
    if (string[i] != string[in]) {
      palindromo = 0; 
      break;
    }
  }

  if (palindromo) {
    printf("A frase(string) é um palíndromo.\n");
  } else {
    printf("A frase(string) não é um palíndromo.\n");
  }

  return 0;
}

/*
                    COMENTARIOS:
linha 14 -> lê a entrada do usuário, incluindo espaços, e a joga na variável 
linha 16 -> 'strcspn'remove o '\n' adicionado à strig frase pelo fgets
linha 18 -> calcula o tamanho da string e o armazena na variavel grandao

Loop do palindromo: 
    O for compara os caracteres do início e do fim da string,
se nenhum para de caracteres for igual, retorna falso. logo, não é um palindromo, 
sendo interrompido pelo break. Pois, não tem sentido continuar a verificação 


*/
