# Laboratórios de Programação em C

**Disciplina:** _________________________

**Aluno:** Leonardo Guimarães

Códigos dos roteiros práticos da disciplina, escritos em C padrão.

## Laboratórios

### lab01 — Primeiros programas
| Arquivo | O que faz |
|---|---|
| `parte0_hello_world.c` | Imprime "Hello, World!" na tela. |
| `parte1_usando_printf.c` | Mostra uma ficha do aluno usando vários `printf`. |

### lab02 — Saída, entrada e operadores
| Arquivo | O que faz |
|---|---|
| `parte0_formatacao_da_saida_e_caracteres_de_escape.c` | Exibe um `float` com 6 e com 2 casas decimais (`%f` e `%.2f`). |
| `parte1_entrada_com_scanf.c` | Lê a idade com `scanf` e mostra o valor digitado. |
| `parte2_expressoes_e_operadores.c` | Calcula e imprime uma soma simples (`a + b`). |

### lab03 — Decisões
| Arquivo | O que faz |
|---|---|
| `parte1_if_else_e_elseif.c` | Maioridade, aprovação/recuperação, correção da ordem do `else if` e desafio do maior de dois números. |

### lab04 — Repetição
| Arquivo | O que faz |
|---|---|
| `parte5_exercicios_debugging_e_desafio_final.c` | Correção de erros em laços, média de N notas, análise de 10 números, caixa eletrônico e menu com `do-while` e `switch`. |

### lab05 — Funções
| Arquivo | O que faz |
|---|---|
| `parte0_introducao_e_funcoes.c` | Primeiras funções sem parâmetros: `mostrarMensagem()`, `mostrarCabecalho()` (reutilizada) e `mostrarMenu()`. |

## Como compilar e executar

É preciso ter o `gcc` instalado (no Windows, via MSYS2 ou MinGW).

```bash
gcc arquivo.c -o arquivo
./arquivo
```

Exemplo:

```bash
cd lab01
gcc parte0_hello_world.c -o parte0_hello_world
./parte0_hello_world
```

No Prompt de Comando do Windows, execute com `parte0_hello_world.exe`.
