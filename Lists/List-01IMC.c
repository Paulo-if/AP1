#include <stdio.h>

int main(){

	float peso, altura, imc;

	printf("Digite seu peso (em KG): ");
	scanf("%f", &peso); 
    printf("Digite sua altua (em metros): ");
	scanf("%f", &altura); 

	imc = peso/ (altura*altura);
    printf("Seu IMC e: %.2f.", imc);
	
    return 0;
}

