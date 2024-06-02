#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero entre 1 e 12: ");
    scanf("%i", &numero);

    if (numero<=12){
        if (numero==1){
            printf("O mes e Janeiro");
        }else if (numero==2){
            printf("O mes e Fevereiro");
        }else if (numero==3){
            printf("O mes e Marco");
        }else if (numero==4){
            printf("O mes e Abril");
        }else if (numero==5){
            printf("O mes e Maio");
        }else if (numero==6){
            printf("O mes e Junho");
        }else if (numero==7){
            printf("O mes e Julho");
        }else if (numero==8){
            printf("O mes e Agosto");
        }else if (numero==9){
            printf("O mes e Setembro");
        }else if (numero==10){
            printf("O mes e Outubro");
        }else if (numero==11){
            printf("O mes e Novembro");
        }else if (numero==12){
            printf("O mes e Dezembro");
        }  

    }else if (numero>12){
        printf("ERRO, o numero fornecido e maior12");
    }

    if (numero==0){
        printf("ERRO, o numero fornecido e 0");
    }else if (numero<0){
        printf("ERRO, o numero fornecido e menor que 0");
    }

    return 0;
}
