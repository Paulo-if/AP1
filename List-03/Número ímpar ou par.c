/*#include <stdio.h>

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
}*/

#include <stdio.h>
#include <string.h> // Para usar a função strcmp()

int main() {
    int idade;
    char habilitacao[4]; // Armazena "sim" e o caractere nulo de terminação

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite 'sim' se voce tem uma habilitacao valida: ");
    scanf("%s", habilitacao); // Lê a string "sim"

    // Compara a string lida com "sim"
    if (idade >= 18 && strcmp(habilitacao, "sim") == 0) {
        printf("Pode dirigir.\n");
    } else {
        printf("Nao pode dirigir.\n");
    }

    return 0;
}

