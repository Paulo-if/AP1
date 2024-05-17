#include <stdio.h>

int main(){

	int base = 0;
    int altura = 0;

	printf("Digite o valor da base do retangualo:  ");
	scanf("%d", &base); 
    printf("Digite o valor da altura do retangualo: ");
	scanf("%d", &altura); 

	int area = base * altura;
    printf("A area do triangulo e: %d.", area);
	
}