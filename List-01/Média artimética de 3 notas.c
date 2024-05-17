#include <stdio.h>

int main() {
    float metros, centimetros, milimetros;

    printf("Digite um valor em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;
    milimetros = metros * 1000;

    printf("Metros equivalem a ",centimetros,"centimetros" "e", milimetros," milimetros");

    return 0;
}

