#include "utils.h"

#include <stdlib.h>

#include "pilha.h"

// Exibe o menu do usuário
// Entrada: nenhuma
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: o menu de opções é exibido para o usuário
void menu(void) {
    Pilha* p = cria_pilha_vazia();

    TipoItem info;
    TipoItem* x;
    int op = -1;

    while(op != 0) {
        printf("\nEscolha uma das opções:\n\n");
        printf("1. Inserir um elemento na pilha\n");
        printf("2. Exibir pilha\n");
        printf("3. Desempilhar um elemento")
        printf("0. Encerrar programa\n");
        printf("\nOpção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o valor do elemento: ");
                scanf("%d", &info);
                push(p, info);
                break;

            case 2:
                printf("Pilha: ");
                imprimir(p);
                break;

            case 3:
                x = pop(p);
                if(x != NULL) {
                    printf("O elemento %d foi removido da pilha.\n", *x);
                    free(x);
                }
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;  

            default:
                printf("Opção inválida.\n");
                break;
        }
    }

    free(p);
    printf("\n");
}