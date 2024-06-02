#include <stdio.h>

int main() {
    int idade1, idade2, idade3;
    float media;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%i", &idade1);     

    printf("Digite a idade da segunda pessoa: ");
    scanf("%i", &idade2);   

    printf("Digite a idade da terceira pessoa: ");
    scanf("%i", &idade3);   

    media = (idade1+idade2+idade3)/3;

    printf("A media das idades e: %.2f\n", media);

    return 0;
}
