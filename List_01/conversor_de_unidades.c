#include <stdio.h>
#include <math.h>

int main(){
	
	float medida;
	
	printf("de alguma medida em (m): ");
	scanf("%f", &medida);
	
	printf("\nA medida %.2fm, e %.2fcm", medida, medida*pow(10, 2));
	printf("\nA medida %.2fm, e %.2fmm", medida, medida*pow(10, 3));
	
}