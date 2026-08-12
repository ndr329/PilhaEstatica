#include "pilha.h"

#include <stdlib.h>

// Cria uma pilha vazia
// Entrada: nenhuma
// Retorno: ponteiro para a pilha criada ou NULL em caso de erro
// Pré-condição: nenhuma
// Pós-condição: pilha criada com topo igual a 0
Pilha* cria_pilha_vazia(void) {
    Pilha* p = malloc(sizeof(Pilha));

    if(p == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL;
    }

    p->topo = 0;

    return p;
}

// Verifica se a pilha está cheia
// Entrada: pilha
// Retorno: 1 se cheia ou 0 caso contrário
// Pré-condição: pilha criada
// Pós-condição: nenhuma
int cheia(Pilha* p) {
    return (p->topo == TAM_MAX);
}

// Empilha um elemento
// Entrada: pilha e elemento a ser inserido
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: um elemento é inserido no topo da pilha, se houver espaço
void push(Pilha* p, TipoItem info) {
    if(!cheia(p)) {
        p->vet[p->topo] = info;
        p->topo++;
    }
    else 
        printf("Pilha cheia.\n");
}