/*Escreva um programa em C que leia 5 números reais e os armazene em um vetor. 
Calcule e imprima a média desses números.*/

#include <stdio.h>

int main(){

   float num[5], soma, media; 

   printf("Digite 5 numeros: ");
   for (int i = 0; i < 5; i++){  // esse "for" serve para "armazenar" os números fornecidos pelo usuário.
      scanf("%f", &num[i]);
   }

   for (int i = 0; i < 5; i++){  // esse "for" serve para somar os números fornecdos pelo usuário.
      soma += num[i];
   }
   
   media = soma/5;

   printf("A media de seus numeros e: %.2f\n", media);

   return 0;   // "return 0" basicamente fala que o programa foi executado com sucesso // retorna um valor inteiro para o sistema
}

