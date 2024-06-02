#include <stdio.h>

int main() {
    float valor_p, desconto, valor_final;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_p);

    printf("Digite a porcentagem de desconto: ");
    scanf("%f", &desconto);

    float desconto = (desconto / 100) * valor_p;

    valor_final = valor_p - desconto;

    printf("O valor final do produto com desconto é: R$ %.2f\n", valor_final);

    return 0;
}
