#include <stdio.h>

int main(){
	
	float alt, peso, imc;
	
	printf("Descubra seu Indice de Massa Corporal(IMC) \n\n");
	
	printf("Qual e o seu peso(em kg)? ");
	scanf("%f", &peso);
	
	printf("Qual e a sua altura(em metros)? ");
	scanf("%f", &alt);
	
	imc = peso / (alt*alt);
	
	printf("\nSeu IMC e: %.2f\n", imc);
	
}