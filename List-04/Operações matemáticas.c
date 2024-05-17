#include <stdio.h>

int main(){

    int horario;

    printf("Digite um horario: ");
    scanf("%i", &horario);

    if (horario >= 0 && horario <= 11){
        printf("Bom dia");
    }else if (horario >= 12 && horario <= 17){
        printf("Boa tarde");
    }else{
        printf("Boa noite");
    }
    
    return 0;
    
}