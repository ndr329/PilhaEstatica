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

// Verifica se a pilha está vazia
// Entrada: pilha
// Retorno: 1 se vazia ou 0 caso contrário
// Pré-condição: pilha criada
// Pós-condição: nenhuma
int vazia(Pilha* p) {
    return (p->topo == 0);
}

// Exibe os elementos da pilha
// Entrada: pilha
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: os elementos da pilha são exibidos na tela
void imprimir(Pilha* p) {
    if(vazia(p)) {
        printf("[ ]\n");
        return;
    }

    printf("[ ");

    for(int i = 0; i < p->topo; i++)
        printf("%d ", p->vet[i]);

    printf("]\n");
}

// Desempilha um elemento
// Entrada: pilha
// Retorno: ponteiro para o elemento retirado do topo da pilha, ou NULL contrário
// Pré-condição: pilha criada
// Pós-condição: um elemento é removido do topo da pilha
TipoItem* pop(Pilha* p) {
    if(vazia(p)) {
        printf("Pilha vazia.\n");
        return NULL;
    }

    TipoItem* aux = malloc(sizeof(TipoItem));

    if(aux == NULL) {
        printf("Erro de alocação de memória.\n");
        return NULL;
    }

    p->topo--;
    *aux = p->vet[p->topo];

    return aux;
}