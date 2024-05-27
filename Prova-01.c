#include <stdio.h>

int main() {

    float valor_da_compra, valor_do_desconto, valor_pagar;
    char cupom, desconto;

    printf("Por favor, digite o valor total da compra: ");
    scanf("%f", &valor_da_compra);  

    if (valor_da_compra <= 0){  
        printf("Sua compra não foi processada, por favor tente novamente! ");
        return 0;
    }
    
    printf("Caso tenha um cupom de desconto, por favor digiti-o: ");
    scanf(" %c", &cupom);
    
    switch (cupom){

        case 'A':
            desconto = 10;
            valor_do_desconto = valor_da_compra*0.10;
            break;
        case 'B':
            desconto = 20;
            valor_do_desconto = valor_da_compra*0.20;
            break;
        case 'C':
            desconto = 30;
            valor_do_desconto = valor_da_compra*0.30;
            break;
        case 'D':
            desconto = 40;
            valor_do_desconto = valor_da_compra*0.40;
            break;
        case 'E':
            desconto = 50;
            valor_do_desconto = valor_da_compra*0.50;
            break; 

        default:
            printf("Erro, o cupom inserido e invalido");
            return 0;
    }

    valor_pagar = valor_da_compra-valor_do_desconto;
    
    printf("Comprovante de compra:\n");
    printf("Valor total da compra, foi de: R$%.2f\n", valor_da_compra);
    printf("Cupom escolhido: %c com desconto de %d%%\n", cupom, desconto);    
    printf("O valor do descoto foi de: R$ %.2f\n", valor_do_desconto);
    printf("Valor total da compra, foi de: R$ %.2f\n", valor_pagar);
    return 0;
}

