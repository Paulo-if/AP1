#include <stdio.h>

int main(){
	
	int horas;
	
	printf("Digite a hora atual(0-23): ");
	scanf("%d", &horas);
	
	if(horas>=0 && horas<=11){
		printf("\nBom dia!\n");
	}
	else if(horas>=12 && horas<=17){
		printf("\nBoa tarde!\n");
	}
	else{
		printf("\nBoa noite!\n");
	}
}