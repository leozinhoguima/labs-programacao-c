/* Roteiro Aula 2 - Parte 1: Entrada com scanf */

#include <stdio.h> /* biblioteca de entrada e saída (printf e scanf) */

int main(void) {
    /* Atividade 1 - Primeira entrada com scanf */
    int idade; /* variável que vai guardar a idade digitada */

    printf("Digite sua idade: ");
    scanf("%d", &idade); /* lê um número inteiro; o & passa o endereço da variável */

    /* mostra o valor que foi lido */
    printf("Voce informou a idade %d.\n", idade);

    return 0;
}
