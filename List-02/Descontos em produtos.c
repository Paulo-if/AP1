#include <stdio.h>

int main() {
    float reais, dolar, conversao;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);     

    printf("Digite o valor do dolar hoje: ");
    scanf("%f", &dolar);    

    conversao = reais/dolar;

    printf("O valor em dolar e: %.2f\n", conversao);

    return 0;
}