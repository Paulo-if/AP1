#include <stdio.h>

int main(){

	float celcios = 0;

	printf("Digite uma temperatura em Celcios: ");
	scanf("%f", &celcios); 

	int calculo =(celcios*9/5)+32;
    printf("A temperatura em Fahrenheit e: %f.", calculo);
	

}
