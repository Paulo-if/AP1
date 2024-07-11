#include <stdio.h>

int main(){
	
	float numero1, numero2;
	
	printf("Digite um número inteiro: ");
	scanf("%f", &numero1);
	printf("Digite outro número: ");
	scanf("%f", &numero2);
	
	printf("\nA soma entre %.0f e %.0f é %.0f \n", numero1, numero2, numero1+numero2);
	printf("A diferença entre %.0f e %.0f é %.0f \n", numero1, numero2, numero1-numero2);
	printf("A multiplicação entre %.0f e %.0f é %.0f \n", numero1, numero2, numero1*numero2);
	printf("A divisão entre %.0f e %.0f é %.4f", numero1, numero2, numero1/numero2);
	
}