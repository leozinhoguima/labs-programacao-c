/* Roteiro Aula 5 - Parte 0: Introdução a funções e decomposição */

#include <stdio.h> /* biblioteca de entrada e saída (printf) */

/* ===== Atividade 1 - Do problema grande às pequenas responsabilidades =====
   Sistema acadêmico
       -> cadastrar aluno
       -> calcular média
       -> verificar aprovação
       -> mostrar relatório
       -> registrar frequência        (nova responsabilidade)
       -> cadastrar disciplina        (nova responsabilidade)
   Dividir o problema facilita porque cada parte fica menor e mais clara,
   pode ser feita e testada separadamente e é mais fácil achar erros. */

/* ===== Atividade 2 - Nossa primeira função =====
   Nome: mostrarMensagem | Retorno: void (não devolve valor)
   Parâmetros: nenhum, indicado por (void) | Chamada: mostrarMensagem(); */
void mostrarMensagem(void) {
    printf("Ola!\n");
}

/* ===== Atividade 3 - Reutilização: cabeçalho do sistema =====
   O cabeçalho fica escrito em um só lugar e é chamado várias vezes. */
void mostrarCabecalho(void) {
    printf("====================\n");
    printf("   SISTEMA CODING\n");
    printf("====================\n");
}

/* ===== Desafio - Menu reutilizável ===== */
void mostrarMenu(void) {
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("0 - Sair\n");
}

int main(void) {
    /* Atividade 2: chamada da primeira função */
    mostrarMensagem();

    /* Atividade 3: mostrarCabecalho() chamada três vezes em pontos diferentes */
    mostrarCabecalho();
    printf("Inicio do programa\n");

    mostrarCabecalho();
    printf("Meio do programa\n");

    mostrarCabecalho();
    printf("Fim do programa\n");

    /* Desafio: o main só chama a função do menu */
    mostrarMenu();

    return 0;
}

