/*Escreva um programa em C que leia 12 números inteiros e os armazene em um vetor. 
Crie um novo vetor com o dobro de cada elemento do primeiro vetor e imprima-o.*/

#include <stdio.h>

int main (){
    
    int vet1[12], vet2[12]; 

    printf("Digite 12 numeros inteiros: ");
    for (int i = 0; i < 12; i++){  // esse "for" serve para "armazenar" os números fornecidos pelo usuário.
        scanf("%i", &vet1[i]);
    }
    for (int i = 0; i < 12; i++){  // esse "for" serve para duplicar os números fornecidos pelo usuário.
        vet2[i] = vet1[i] * 2;
    }
    printf("Elementos fornecidos dobrados: ");
    for (int i = 0; i < 12; i++){  // esse "for" serve para mostrar os números duplicados ao usuário.
        printf("%i, ", vet2[i]);
    }
    
    return 0;
}