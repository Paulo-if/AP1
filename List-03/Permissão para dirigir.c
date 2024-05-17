#include <stdio.h>
#include <math.h>

int main() {

    float peso, imc, altura;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura(em metros): ");
    scanf("%f", &altura);

    imc = peso/pow(altura, 2);
    if (imc<18.5){
        printf("MAGREZA\n");
    } 
    else if (imc>=18.5 && imc<=24.9) {
        printf("Normal\n");
    }
    else if (imc>=25.0 && imc<=29.9) {
        printf("Sobrepeso\n");
    } 
    else if (imc>=30.0 && imc<=39.9) {
        printf("Obesidade\n");
    } 
    else{
        printf("OBESIDADE GRAVE");
    }
    
    return 0;
}