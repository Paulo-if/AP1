/*
Escreva um programa que leia uma matriz 3x4 em que cada linha seja um aluno e cada coluna uma nota, no fim faça a média de cada aluno.
*/

#include <stdio.h>

#define NUM_ALUNOS 3
#define NUM_NOTAS 4

int main() {
    float notas[NUM_ALUNOS][NUM_NOTAS];
    float media[NUM_ALUNOS] = {0};

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < NUM_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;  
        for (int j = 0; j < NUM_NOTAS; j++) {
            soma += notas[i][j];
        }
        media[i] = soma / NUM_NOTAS;
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("A media do aluno %d é: %.2f\n", i + 1, media[i]);
    }

    return 0; 
}
