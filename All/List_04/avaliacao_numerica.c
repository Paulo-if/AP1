#include <stdio.h>

int main(){
	
	int numero;
	
	
	printf("Digite um numero de 1 a 5, 1 sendo pessimo e 5 excelente. ");
	scanf("%d", &numero);
	
	if(numero==1){
		printf("\nPessimo\n");
	}
	else if(numero==2){
		printf("\nRuim\n");
	}
	else if(numero==3){
		printf("\nMedio\n");
	}
	else if(numero==4){
		printf("\nBom\n");
	}
	else if(numero==5){
		printf("\nExcelente\n");
	}
}
