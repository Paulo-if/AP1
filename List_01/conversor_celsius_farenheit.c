#include <stdio.h>

int main(){
	
	float temperatura;
	
	printf("Conversor Celsius para Fahrenheit!\n\n");
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &temperatura);
	
	printf("\nA temperatura em Fahrenheit e: %.2f", temperatura*9/5+32);
	
}