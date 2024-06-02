#include <stdio.h>

int main() {
    int ano, divsivel_100, divisivel_400;
    
    printf("Digite o valor de um ano: ");
    scanf("%i", &ano);

divsivel_100 = ano%100;
divisivel_400 = ano%400;

if (divsivel_100 == 1)
{
    printf("Ano nao bissexto");
}

if (ano%4 == 0 || divisivel_400 ==0)
{
    printf("Ano e bissexto");
}
    
}
