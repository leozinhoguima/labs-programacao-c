/* Roteiro Aula 4 - Parte 5: Exercícios, debugging e desafio final */

#include <stdio.h> /* biblioteca de entrada e saída (printf e scanf) */

int main(void) {
    int i;

    /* ===== Atividade 1 - Debugging de laços ===== */
    printf("=== Atividade 1 - Debugging de lacos ===\n");

    /* Erro A: a condição era (i >= 10). Como 1 >= 10 já começa falsa,
       o laço executava zero vezes. Correção: usar i <= 10. */
    printf("Erro A corrigido:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    /* Erro B: usava i--, então i diminuía e (i <= 10) nunca ficava falsa,
       criando um loop infinito. Correção: usar i++ para i chegar a 11. */
    printf("Erro B corrigido:\n");
    i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    /* Erro C (off-by-one): i < 10 vai de 0 até 9 (10 iterações) e
       i <= 10 vai de 0 até 10 (11 iterações, uma a mais).
       Correção: para 10 repetições começando do 0, usar i < 10. */
    printf("Erro C corrigido (10 iteracoes):\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    /* ===== Atividade 2 - Média de N notas ===== */
    /* Testar com quatro notas e conferir a conta manualmente */
    printf("\n=== Atividade 2 - Media de N notas ===\n");
    int quantidade;
    float nota;
    float soma = 0; /* acumulador das notas */

    printf("Quantidade de notas: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        soma += nota; /* soma cada nota no acumulador */
    }
    printf("Media: %.2f\n", soma / quantidade);

    /* ===== Atividade 3 - Análise de 10 números ===== */
    printf("\n=== Atividade 3 - Analise de 10 numeros ===\n");
    int numero;
    int positivos = 0, negativos = 0, zeros = 0; /* contadores */
    int somaTotal = 0;                           /* acumulador */
    int maior = 0, menor = 0;

    for (i = 1; i <= 10; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &numero);

        /* conta positivos, negativos e zeros */
        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        } else {
            zeros++;
        }

        somaTotal += numero;

        /* o primeiro número lido é o maior e o menor até agora */
        if (i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);
    printf("Soma total: %d\n", somaTotal);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    /* ===== Atividade 4 - Caixa eletrônico ===== */
    /* Exemplo: 187 = 1x100 + 1x50 + 1x20 + 1x10 + 1x5 + 1x2 + 0x1 */
    printf("\n=== Atividade 4 - Caixa eletronico ===\n");
    int valor;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    /* a divisão inteira (/) dá a quantidade de cédulas
       e o módulo (%) dá o que ainda falta pagar */
    printf("Notas de 100: %d\n", valor / 100);
    valor = valor % 100;
    printf("Notas de 50: %d\n", valor / 50);
    valor = valor % 50;
    printf("Notas de 20: %d\n", valor / 20);
    valor = valor % 20;
    printf("Notas de 10: %d\n", valor / 10);
    valor = valor % 10;
    printf("Notas de 5: %d\n", valor / 5);
    valor = valor % 5;
    printf("Notas de 2: %d\n", valor / 2);
    valor = valor % 2;
    printf("Notas de 1: %d\n", valor);

    /* Resposta: sim. Guardando as cédulas em uma coleção (vetor), daria para
       usar um laço para repetir a mesma conta para cada cédula. */

    /* ===== Desafio final - Sistema de menu ===== */
    /* O menu reaparece até o usuário escolher 0 */
    printf("\n=== Desafio final - Sistema de menu ===\n");
    int opcao;
    float n1, n2;
    int tabuada;

    do {
        printf("=====================\n");
        printf("    MENU PRINCIPAL\n");
        printf("=====================\n");
        printf("1 - Somar dois numeros\n");
        printf("2 - Calcular media\n");
        printf("3 - Tabuada\n");
        printf("0 - Sair\n");
        printf("=====================\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                /* ler dois números e somar */
                printf("Digite dois numeros: ");
                scanf("%f %f", &n1, &n2);
                printf("Soma: %.2f\n", n1 + n2);
                break;
            case 2:
                /* ler notas e calcular média (igual à Atividade 2) */
                soma = 0;
                printf("Quantidade de notas: ");
                scanf("%d", &quantidade);
                for (i = 1; i <= quantidade; i++) {
                    printf("Nota %d: ", i);
                    scanf("%f", &nota);
                    soma += nota;
                }
                printf("Media: %.2f\n", soma / quantidade);
                break;
            case 3:
                /* ler número e mostrar a tabuada de 1 a 10 com for */
                printf("Digite um numero: ");
                scanf("%d", &tabuada);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", tabuada, i, tabuada * i);
                }
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 0);

    return 0;
}

/* Questões de fixação:
   1. Off-by-one é quando o limite do laço faz uma repetição a mais ou a
      menos do que deveria (ex.: usar <= no lugar de <).
   2. Porque i-- faz i diminuir, então i nunca passa de 10 e a condição
      i <= 10 continua sempre verdadeira.
   3. do-while (repetir o menu), switch (escolher a opção), for (média e
      tabuada), além de scanf, printf, variáveis e expressões. */
