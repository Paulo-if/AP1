#include <stdio.h>
#include <math.h>
int main(){

	float valor, tax_juro, valor_f;
    int tempo_a;

    printf("Digite um valor: ");
    scanf("%f", &valor);
        
    printf("Digite o valor do juros(em decimal): ");
    scanf("%f", &tax_juro);

    printf("Digite a quantidade de anos: ");
    scanf("%d", &tempo_a);

    valor_f = valor * pow(1 + tax_juro, tempo_a);

    printf("Voce ira receber: %.2f\n ", valor_f);

}
