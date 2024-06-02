#include <stdio.h>

int main() {
    int idade;
    char habilitacao;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite 's'(que seria sim) se voce tem uma habilitacao valida: ");
    scanf(" %c", &habilitacao); // espaço em %c para descartar valores vazios 

    if (idade >= 18 && habilitacao == 's') {
        printf("Pode dirigir.\n");
    } else {
        printf("Nao pode dirigir.\n");
    }

    return 0;
}

