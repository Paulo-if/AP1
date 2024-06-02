#include <stdio.h>

int main() {
    int nota1, nota2, nota3;

    printf("Digite um numero interio: ");
    scanf("%i", &nota1);
    printf("Digite outro numero interio: ");
    scanf("%i", &nota2);
    printf("Digite um outro numero interio: ");
    scanf("%i", &nota3);
    int media_a = (nota1+nota2+nota3)/3;
    printf("Sua media: %i.\n", media_a);

    return 0;
}
