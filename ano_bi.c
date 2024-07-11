#include <stdio.h>

int main(){
	
	int ano;
		
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	if(ano%4==0 && ano%100!=0){
		printf("\nAno bissexto\n");
	}
	else if(ano%400==0){
		printf("\nAno bissexto\n");
	}
	else{
		printf("\nAno nao bissexto\n");
	}
}