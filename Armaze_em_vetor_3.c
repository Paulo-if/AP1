/*Escreva um programa em C que leia 10 números inteiros e os armazene em um vetor. 
Procure um determinado número no vetor e, caso ele seja encontrado, imprima a sua posição. 
Caso contrário, imprima uma mensagem informando que o número não foi encontrado.*/

#include <stdio.h>

int main(){

   int num[10], posicao; 

   printf("Digite 10 numeros inteiros: ");
   for (int i = 0; i < 10; i++){  // esse "for" serve para "armazenar" os números fornecidos pelo usuário.
      scanf("%i", &num[i]);
   }

    printf("Os numeros que voce digitou estao em sequencia, digite de 0 a 9 para achar o que quer: ");
    scanf("%i", &posicao);

    
    if (posicao < 0  || posicao >= 10){     // esse "if" limita a procura do usuario, se ele digitar numeros menores que 0 ou maiores ou iguais a 10, retorna erro
        printf("ERRO, numero nao encontrado");
    }
    for (int i = 0; i < 10; i++){   //Esse "for" procura se o numero dentro da Array de acordo com o que o usuario digitou.
        
        if (num[i] == posicao){
            printf("O numero %i esta na posicao %i", posicao, i);
        break;  //o "break", faz o "for" para quado encotra o digito 
        }
    }
    return 0;
}