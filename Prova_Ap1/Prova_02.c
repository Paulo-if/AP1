#include <stdio.h>
#include <stdlib.h>

int main() {

    char nomes[3][50];       
    int matriculas[3], num_alunos;   
    float notas[3][3], medias[3];         

    printf("Digite o numero de alunos (ate 3): ");
    scanf("%d", &num_alunos);

    if (num_alunos <= 0 || num_alunos > 3) {
        printf("Numero de alunos invalido!\n");
        return 1; 
    }

    for (int i = 0; i < num_alunos; i++) {
        printf("\nDigite os dados do aluno %d:\n", i + 1);

        printf("Digite o nome dos alunos: ");
        scanf(" %19s", nomes[i]); 

        printf("Digite a matricula: ");
        scanf("%d", &matriculas[i]);

        for (int a = 0; a < 3; a++) {
            do {
                printf("Nota %d: ", a + 1);
                scanf("%f", &notas[i][a]);

                if (notas[i][a] < 0 || notas[i][a] > 10) {
                    printf("Nota invalida! (Digite uma nota entre 0 e 10).\n");
                }
            } while (notas[i][a] < 0 || notas[i][a] > 10);
        }

        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
    }

    printf("\nDados dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Matricula: %d\n", matriculas[i]);
        printf("Notas: %.2f, %.2f, %.2f\n", notas[i][0], notas[i][1], notas[i][2]);
        printf("Media: %.2f\n", medias[i]);
    }

    return 0;
}



/*                                          OBS:
Po professora, como que eu coloco acento nas palavras?, tentei uasar  "locale.h", mas n deu bom n 
sera que é essa bomba de vscode que n quer aceitar, se pa deve ser. EU TENTEIII (emoji de carinha feliz(esse: 😃))
*/