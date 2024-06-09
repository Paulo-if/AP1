/*1- Faça um programa usando o do-while + switch-case para criar um menu com as questões da lista:

a) Escreva um programa que leia 5 números inteiros e imprima apenas os números pares. Use o laço for.

b) Escreva um programa que leia 5 números inteiros e imprima o maior e o menor número digitado. Use o laço for.

c) Escreva um programa que leia um número do usuário e imprima a tabuada desse número. Use o laço for.

Para o menu você pode optar por usar char ou int.

*/

#include <stdio.h>

int a () {
    int numeros[5], count = 0;

    printf("Digite 5 numeros inteiros:\n");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares digitados:\n");
    for (int i = 0; i < 5; i++) {

        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            count++;
        }
    }
    printf("\n");
    return count;
}

int b () {

    int numeros[5], maior, menor;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    return maior - menor;
}

int c () {

    int num, resultado;
    printf("Digite um numero para ver sua tabuada:\n");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        resultado = num * i;
        printf("%d x %d = %d\n", num, i, resultado);

    }

}

int main() {

    char opcao;

    do {
        printf("\nMENU DE QUESTÕES\n");
        printf("Digite 'a' para exibir numeros pares\n");
        printf("Digite 'b' para exibir mair ou menor numero\n");
        printf("Digite 'c' para exibir tabuada de um número\n");
        printf("Digite 's' para Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {

            case 'a': {
                int pares = a();
                printf("Quantidade de numeros pares: %d\n", pares);
                break;
            }

            case 'b': {
                int diferenca = b();
                printf("Diferenca entre o maior e menor: %d\n", diferenca);
                break;
            }

            case 'c': {
                int resultado = c();
                printf("Resultado da tabuada: %d\n", resultado);
                break;
            }

            case 's':
                printf("SAINDO\n");
                break;

            default:
                printf("ERRO, OPCAO INV ALIDA\n");
        }
    } while (opcao != 's');
        printf("ERRO");

}