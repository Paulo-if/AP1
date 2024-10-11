#include <stdio.h>

int main(){
	
	double Reais, Dolar;
	
	printf("Quanto reais você tem? ");
	scanf("%lf", &Reais);
	
	printf("Quanto está o dólar nesse momento? ");
	scanf("%lf", &Dolar);
	
	printf("\nCom R$%.2lf e o dólar em $%.2lf, você poderá comprar $%.2lf dólares!\n", Reais, Dolar, Reais/Dolar);
	
}
