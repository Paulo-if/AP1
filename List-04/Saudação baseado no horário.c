#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero de 1 a 5: ");
    scanf("%i", &numero);

    if (numero == 1){
        printf("PESSIMO");
    }else if (numero == 2){
        printf("RUIM");
    }else if (numero == 3){
        printf("MEDIO");
    }else if (numero == 4){
        printf("BOM");
    }else if (numero == 5){
        printf("EXCELENTE");
    }
    if (numero > 5){
        printf("O numero e maior que 5");
    }else if (numero < 1){
        printf("O numero e menor que 1");
    }
    
    return 0;
    
}