#include <stdio.h>

int main() {
    int numero1, numero2, soma, sub, div, mult;

    printf("Digite um numero interio: ");
    scanf("%i", &numero1);
    printf("Digite outro numero interio: ");
    scanf("%i", &numero2);

    soma = numero1+numero2;
    printf("A soma dos numeros e: %i.\n", soma);
    sub = numero1-numero2;
    printf("A subtracao dos numeros e: %i.\n", sub);
    mult = numero1*numero2;
    printf("A multiplicacao dos numeros e: %i.\n", mult);
    div = numero1/numero2;
    printf("A divisao dos numeros e: %i.\n", div);

    return 0;
}
