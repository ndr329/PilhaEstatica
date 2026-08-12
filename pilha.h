#ifndef pilha_h
#define pilha_h

#include <stdio.h>

#define TAM_MAX 1000

typedef int TipoItem;   // define o tipo de dados da pilha

// Estrutura Da Pilha
typedef struct {
    TipoItem vet[TAM_MAX];
    int topo;
} Pilha;

// Cria uma pilha vazia
// Entrada: nenhuma
// Retorno: ponteiro para a pilha criada ou NULL em caso de erro
// Pré-condição: nenhuma
// Pós-condição: pilha criada com topo igual a 0
Pilha* cria_pilha_vazia(void);

// Verifica se a pilha está cheia
// Entrada: pilha
// Retorno: 1 se cheia ou 0 caso contrário
// Pré-condição: pilha criada
// Pós-condição: nenhuma
int cheia(Pilha* p);

// Empilha um elemento
// Entrada: pilha e elemento a ser inserido
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: um elemento é inserido no topo da pilha, se houver espaço
void push(Pilha* p, TipoItem info);

#endif /* pilha_h */