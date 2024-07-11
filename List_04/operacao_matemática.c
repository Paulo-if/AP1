#include <stdio.h>

int main(){
	
	char operador;
	float num1, num2;
	
	printf("Coloque um numero: ");
	scanf("%f", &num1);
	printf("Coloque outro numero: ");
	scanf("%f", &num2);
	
	fflush(stdin);
	printf("Coloque um operador: ");
	scanf("%c", &operador);	

	
	switch(operador){
		case '+':
			printf("%.2f\n", num1 + num2);
		break;
		case '-':
			printf("%.2f\n", num1 - num2);
		break;
		case '*':
			printf("%.2f", num1 * num2);
		break;
		case '/':
			printf("%.2f", num1/num2);
		break;
	}
}