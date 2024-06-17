/*Escreva um programa em C que leia 8 números inteiros e os armazene 
em um vetor. Encontre e imprima o maior e o menor elemento do vetor.*/


#include <stdio.h>

int main(){

   float num[8], maior, menor; 

   printf("Digite 8 numeros: ");
   for (int i = 0; i < 8; i++){  // esse "for" serve para "armazenar" os números fornecidos pelo usuário.
      scanf("%f", &num[i]);

   }

    maior = num[0];     //Definindo num valor forecido como maior, porque eu preciso ter um base para identificar o maior valor. 
    menor = num[0];     //Definindo num valor forecido como menor. porque eu preciso ter um base para identificar o menor valor.

    for (int i = 0; i < 8; i++){    

        if (num[i] >  maior){   // Esse "if" está defindo se o número afrente do meu valor de posição 0 da minha Array se é maior do que a própria posição 0.
            maior = num[i];
        }
        if (num[i] <  menor){   //Esse "if" faz a mesma coisa que o de cima, so que para o caso do valor ser menor.
            menor = num[i];
        }
    }
     
  printf("O maior numero que voce forneceu foi: %.2f \n", maior);
  printf("O menor numero que voce forneceu foi: %.2f ", menor);

}