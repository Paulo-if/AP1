#include <stdio.h>
#include <string.h>

int main(){
	
	int idade;
	char permissao[5];
	
	printf("Qual e a sua idade? ");
	scanf("%d", &idade);
	printf("Sua carteira e valida?(sim ou não) ");
	fflush(stdin);
	scanf("%s", permissao);
	
	if(strcmp(permissao, "sim")==0){
		if(idade>=18){
			printf("\nPode dirigir\n");
		}
		else{
			printf("\nNao pode dirigir\n");
		}
	}
	else{
		printf("\nNao pode dirigir\n");
	}
}