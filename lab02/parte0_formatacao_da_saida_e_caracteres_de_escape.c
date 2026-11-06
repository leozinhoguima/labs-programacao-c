/* Roteiro Aula 2: Formatação da saída e caracteres de escape */

#include <stdio.h> /* biblioteca de entrada e saída (printf) */

int main(void) {
    /* Atividade 1 - Controlando casas decimais */
    float preco = 19.5f; /* o 'f' no final indica que o valor é float */

    printf("%f\n", preco);   /* %f mostra 6 casas decimais: 19.500000 */
    printf("%.2f\n", preco); /* %.2f mostra só 2 casas decimais: 19.50 */

    return 0;
}
