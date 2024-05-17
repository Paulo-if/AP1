#include <stdio.h>

int main() {

    float numero1, numero2, adicao, sub, div, mult;
    char operacao;

    printf("Digite a operacao que deseja fazer(+, -, /, *): ");
    scanf("%c", &operacao);

    printf("Digite um numero: "); 
    scanf("%f", &numero1);
    printf("Digite outro numero: "); 
    scanf("%f", &numero2);

    adicao = numero1 + numero2;
    sub = numero1 - numero2;
    mult = numero1 * numero2;
 
    if (numero2 != 0) {
        div = numero1/numero2;
    }
    
    if (operacao == '+') {
        printf("%.2f\n", adicao);
    }else if (operacao == '*') {
        printf("%.2f\n", mult);
    }else if (operacao == '-') {
        printf("%.2f\n", sub);
    }else if (operacao == '/')
    {
        printf("%.2f\n", div);
    }else{
        printf("ERRO");
    }

    return 0;

}