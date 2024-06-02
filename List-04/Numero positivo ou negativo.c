
47#include <stdio.h>

int main (){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    if (numero<0){
        printf("O numero e negativo");
    }else if (numero>0) {
        printf("O numero e positivo");
    } else if (numero==0) {
        printf("O numero e 0");
    }

    else
    {
        printf("ERRO");
    }
    
    
    return 0;
}

