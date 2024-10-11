#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float altura, comprimento;
	
	printf("Descubra a area de um retangulo qualquer!\n\n");
	printf("Digite uma altura: ");
	scanf("%f", &altura);
	printf("Digite um comprimento: ");
	scanf("%f", &comprimento);
	
	printf("\nA area desse retangulo é: %.2f", altura*comprimento);
	
}
