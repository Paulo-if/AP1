#include <stdio.h>

int main() {
    float media_f;
    int aulas_t, faltas;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media_f);

    printf("Digite o total de aulas ministradas: ");
    scanf("%d", &aulas_t);

    printf("Digite o numero de faltas do aluno: ");
    scanf("%d", &faltas);

    float porcentagem_faltas = (faltas * 100.0) / aulas_t;

    if (media_f >= 7 && porcentagem_faltas <= 25) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}



