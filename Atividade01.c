#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Função para verificar se um número é primo
int primo(int num) {
    if (num <= 1) {
        return 0; // Não primo
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Não primo
        }
    }
    return 1; // Primo
}

// verifica se um caractere é uma letra (case-insensitive)
int letra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

// compara dois caracteres, ignorando maiúsculas/minúsculas
int caracteresIguais(char c1, char c2) {
    if (!letra(c1) || !letra(c2)) {
        return 0; // Se um dos caracteres não for letra, retorna falso
    }
    int diff = 'a' - 'A';
    if (c1 >= 'a') {
        c1 -= diff;
    }
    if (c2 >= 'a') {
        c2 -= diff;
    }
    return c1 == c2;
}

// verifica se a string é um palíndromo
int palindromo(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !letra(str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !letra(str[fim])) {
            fim--;
        }
        if (!caracteresIguais(str[inicio], str[fim])) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }
    return 1; // É palíndromo
}

int main() {
    int opcao;
    char sair[4]; // Para ler "sair" como string

    do {
        printf("\n__EXERCICIOS EM MENU__\n");
        printf("Digite 1, para abrir o Primeiro exercicio\n");
        printf("Digite 2, para abrir o Segundo exercicio\n");
        printf("Digite 3, para abrir o Terceiro exercicio\n");
        printf("Digite 4, para abrir o Quarto exercicio\n");
        printf("Digite 5, para abrir o Quinto exercicio\n");
        printf("Digite 6, para abrir o Sexto exercicio\n");
        printf("Digite 7, para abrir o Setimo exercicio\n");
        printf("Caso queira sair, digite 'sair'\n");
        printf("Digite a opcao que deseja: ");
        scanf("%s", sair); // Lê a opção como string

        // Converte a opção para inteiro se for um número
        if (strcmp(sair, "sair") != 0) {
            opcao = atoi(sair);
        } else {
            opcao = -1; // Define um valor para sair do loop
        }

        switch (opcao) {
            case 1: {
                // TEMPO EM HORAS PARA SEGUNDOS:
                int horas, segundos;
                printf("\n__CONVERSOR DE HORAS PARA SEGUNDOS__\n");
                printf("Quantas horas sao? ");
                scanf("%d", &horas);
                segundos = (horas * 3600);
                printf("%d horas equivale a %d segundos.\n", horas, segundos);
                break;
            }
            case 2: {
                // Transcrição do fluxograma para a linguagem c:
                float a, b, c, menorAB;
                printf("Digite 3 valores: ");
                scanf("%f %f %f", &a, &b, &c);

                // Correção: Fórmula para encontrar o MENOR valor
                menorAB = (a + b - abs(a - b)) / 2;

                if (menorAB < c) {
                    printf("%.2f e o menor valor\n", menorAB);
                } else {
                    printf("%.2f e o menor valor\n", c);
                }
                break;
            }
            case 3: {
                int idade, estudos_h;
                printf("\n__IDADE E NUMERO DE HORAS DE ESTUDOS__\n");
                printf("Digite a idade e a quantidade de horas (por semana) de estudo do estudante: ");
                scanf("%d %d", &idade, &estudos_h);
                if (idade < 18 && estudos_h >= 15) {
                    printf("Este e um Estudante Jovem\n");
                } else if (idade >= 18 && idade < 25 && estudos_h >= 10) {
                    printf("Este e um Estudante Adulto\n");
                } else if (idade >= 25 && estudos_h < 10) {
                    printf("Este e um Estudante Senior\n");
                } else if (estudos_h < 5) {
                    printf("ESTUDA FOFO (desmotivado)\n");
                } else {
                    printf("ESTUDANTE NAO CATEGORIZADO\n");
                }
                break;
            }
            case 4: {
                // FATORIAL
                int valor, i, fatorial = 1;
                printf("Digite um valor inteiro positivo: ");
                scanf("%d", &valor);
                if (valor < 0) {
                    printf("VALOR NEGATIVO NAO PODE SER INSERIDO\n");
                } else {
                    for (i = 1; i <= valor; i++) {
                        fatorial *= i;
                    }
                    printf("O fatorial de %d e: %d\n", valor, fatorial);
                }
                break;
            }
            case 5: {
                printf("\n__SEQUENCIA DE FIBONACCI__\n");
                int valor, termo_f1 = 0, termo_f2 = 1, sequencia, i = 1;

                printf("Digite um valor inteiro positivo: ");
                scanf("%d", &valor);

                if (valor <= 0) {
                    printf("VALOR NEGATIVO NAO E ACEITAVEL NA FIBONACCI\n");
                } else {
                    printf("Sequencia de Fibonacci ate o %dº termo:\n", valor);
                    if (valor == 1) {
                        printf("%d", termo_f1);
                    } else {
                        printf("%d, %d", termo_f1, termo_f2);
                    }
                    while (i <= valor - 2) {
                        sequencia = termo_f1 + termo_f2;
                        printf(", %d", sequencia);
                        termo_f1 = termo_f2;
                        termo_f2 = sequencia;
                        i++;
                    }
                    printf("\n");
                }
                break;
            }
            case 6: {
                int vetor[10];
                printf("Vetor:\n");
                for (int i = 0; i < 10; i++) {
                    if (primo(i)) {
                        vetor[i] = 1;
                    } else {
                        vetor[i] = 0;
                    }
                    printf("%d ", vetor[i]);
                }
                printf("\n");
                break;
            }
            case 7: {
                char str[100];
                printf("Digite uma string: ");
                fgets(str, 100, stdin);
                str[strcspn(str, "\n")] = 0;

                if (palindromo(str)) {
                    printf("A string e um palindromo.\n");
                } else {
                    printf("A string nao e um palindromo.\n");
                }
                break;
            }
            case -1:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != -1); 

    return 0;
}