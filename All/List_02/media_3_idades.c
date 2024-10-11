#include <stdio.h>

int main(){

	int idade1, idade2, idade3;	
	
	printf("Digite a primeira idade: ");
	scanf("%d", &idade1);
	
	printf("Digite a segunda idade: ");
	scanf("%d", &idade2);
	
	printf("Digite a terceira idade: ");
	scanf("%d", &idade3);
	
	printf("\nA média entre as idades %d, %d e %d anos é %.2f!\n", idade1, idade2, idade3, (idade1+idade2+idade3)/3.0);
	
}
