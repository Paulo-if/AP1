#include <stdio.h>

int main(){
	
	double preco, desconto, porcento;
	
	printf("Qual é o valor original do produto(em R$)? ");
	scanf("%lf", &preco);
	
	
	printf("Qual a porcentagem de desconto(em %%)? ");
	scanf("%lf", &desconto);
	
	porcento = desconto/100;
	
	printf("\nO valor com desconto de %.2lf%% será: R$%.2lf!\n", desconto, preco*(1-porcento));
	
}
