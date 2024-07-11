#include <stdio.h>

int main(){
	
	int mediaAluno, faltas;
	
	printf("Descubra se voce foi aprovado!\n\n");
	
	printf("Qual sua media? ");
	scanf("%d", &mediaAluno);
	printf("Sua porcentagem de falta(em %%)? ");
	scanf("%d", &faltas);
	
	if(mediaAluno >= 7 && faltas<=25){
		printf("\nAluno aprovado\n");
	}
	else{
		printf("\nAluno reprovado\n");
	}
}