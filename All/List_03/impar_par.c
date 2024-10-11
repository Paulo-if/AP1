#include <stdio.h>

int main(){
	
	int num;
	
	printf("Descubra se determinado numero e par ou impar!\n\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("\nO numero e par\n");
	}
	else{
		printf("\nO numero e impar\n");
	}
}
