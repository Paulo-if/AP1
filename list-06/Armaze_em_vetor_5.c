/*Escreva um programa em C que leia 10 números inteiros e os armazene em um vetor. 
Em seguida, imprima os elementos do vetor na ordem inversa.*/

#include <stdio.h>

int main (){
    
    int vetor[10]; 

    printf("Digite 10 numeros inteiros: ");
    for (int i = 0; i < 10; i++){  // esse "for" serve para "armazenar" os números fornecidos pelo usuário.
        scanf("%i", &vetor[i]);
    }

    for (int i = 9; i >= 0; i--){  // esse "for" serve para mostrar os números fornecidos pelo usuário, porem de forma inversa. 
        
        printf("%i, ", vetor[i]);
    }
    return 0;
}

// OBS: A variável de controle do ultimo for começa com nove, pois o vetor vai de (0-9)
// OBS2: "i--", ele sempre pega o valor anterior