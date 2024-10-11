#include <stdio.h>
#include <math.h>

int main(){
	
	double valor_principal, juros, preco;
	int tempo;
		
	printf("Valor principal(em R$)? ");
	scanf("%lf", &valor_principal);
	
	printf("Qual é a taxa de juros anual(em %%)? ");
	scanf("%lf", &juros);
	
	
	printf("Qual será o período do juros(em anos)? ");
	scanf("%d", &tempo);
	
	preco = juros/100;
	
	printf("\nO valor final de R$%.2lf em %d anos com juros de %.2lf%% é: R$%.2lf!\n", valor_principal, tempo, juros, valor_principal*pow(1+preco,tempo));
	
}
