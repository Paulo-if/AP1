#include <stdio.h>
#include <math.h>

int main(){
	
	
	float raio;
	const double pi = 3.14159265;
	
	printf("Descubra a area de um circulo qualquer!\n\n");
	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);
	
	printf("\nA area desse circulo e %.2f!", pi*pow(raio, 2));
	
}
