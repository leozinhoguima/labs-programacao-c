/* Roteiro Aula 3 - Parte 1: if, else e else if */

#include <stdio.h> /* biblioteca de entrada e saída (printf e scanf) */

int main(void) {
    int idade;
    float media;
    int nota;
    int a, b;

    /* ===== Atividade 1 - Primeiro if ===== */
    /* Testar com 18, 17 e 30 */
    printf("=== Atividade 1 - Primeiro if ===\n");
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior de idade\n");
        printf("Entrada permitida\n"); /* segunda mensagem pedida no item 3 */
    }
    /* 1. O bloco executa com qualquer idade maior ou igual a 18 (ex.: 18 e 30).
       2. Se a condição for falsa (ex.: 17), o bloco é pulado e nada é impresso. */

    /* ===== Atividade 2 - Chaves e blocos ===== */
    /* Sem chaves, só o primeiro printf pertencia ao if.
       Corrigido: com { } as duas mensagens dependem da condição. */
    printf("\n=== Atividade 2 - Chaves e blocos ===\n");
    if (idade >= 18) {
        printf("Maior de idade\n");
        printf("Entrada permitida\n");
    }

    /* ===== Atividade 3 - Dois caminhos com if...else ===== */
    /* Testar com 17 e 18: exatamente um dos blocos é executado */
    printf("\n=== Atividade 3 - if...else ===\n");
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    /* ===== Atividade 4 - Aprovação ===== */
    /* Testar com 4.9, 5.0, 6.9, 7.0 e 10.0 */
    printf("\n=== Atividade 4 - Aprovacao ===\n");
    printf("Digite a media: ");
    scanf("%f", &media);                 /* entrada */

    if (media >= 7.0f) {                 /* comparação e decisão */
        printf("Aprovado\n");            /* saída */
    } else {
        printf("Reprovado\n");           /* saída */
    }

    /* ===== Atividade 5 - Mais de duas possibilidades ===== */
    /* As condições são testadas em ordem: no else if já sabemos que media < 7 */
    printf("\n=== Atividade 5 - else if ===\n");
    if (media >= 7.0f) {
        printf("Aprovado\n");
    } else if (media >= 5.0f) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    /* Erro lógico do exemplo: o teste (nota >= 5) vinha primeiro, então
       uma nota 9 já entrava nele e "Nota boa" nunca era mostrado.
       Correção: testar a faixa maior (nota >= 7) antes. Testar com nota 9. */
    printf("\nDigite a nota: ");
    scanf("%d", &nota);

    if (nota >= 7) {
        printf("Nota boa\n");
    } else if (nota >= 5) {
        printf("Nota razoavel\n");
    }

    /* ===== Desafio - Maior de dois números ===== */
    /* Testar os três cenários: a maior, b maior e iguais */
    printf("\n=== Desafio - Maior de dois numeros ===\n");
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d e maior\n", a);
    } else if (b > a) {
        printf("%d e maior\n", b);
    } else {
        printf("Os numeros sao iguais\n");
    }

    return 0;
}