#include <stdio.h>
#include <math.h>

int main(){
	
	float peso, altura, imc;
		
	printf("Qual e o seu peso?(em Kg) ");
	scanf("%f", &peso);
	printf("Qual e a sua altura?(em M) ");
	scanf("%f", &altura);
	
	imc = peso/pow(altura,2);
	
	printf("\nSeu IMC e: %.1f\n", imc);
	
	if(imc<18.5){
		printf("CLASSIFICACAO: MAGREZA\n");
	}
	else if(imc>=18.5 && imc<=24.9){
		printf("CLASSIFICACAO: NORMAL\n");
	}
	else if(imc>=25 && imc<=29.9){
		printf("CLASSIFICACAO: SOBREPESO\n");
	}
	else if(imc>=30 && imc<=39.9){
		printf("CLASSIFICACAO: OBESIDADE\n");
	}
	else{
		printf("CLASSIFICACAO: OBESIDADE GRAVE\n");
	}
}