#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Numero e positivo, negativo ou zero!\n\n");
	
	printf("Digite algum numero: ");
	scanf("%d", &numero);
	
	if(numero>0){
		printf("\nEsse numero e positivo!\n");
	}
	else if(numero<0){
		printf("\nEsse numero e negativo!\n");
	}
	else if(numero==0){
		printf("\nEsse numero e nulo!\n");
	}
}