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

// Verifica se a pilha está vazia
// Entrada: pilha
// Retorno: 1 se vazia ou 0 caso contrário
// Pré-condição: pilha criada
// Pós-condição: nenhuma
int vazia(Pilha* p);

// Exibe os elementos da pilha
// Entrada: pilha
// Retorno: nenhum
// Pré-condição: pilha criada
// Pós-condição: os elementos da pilha são exibidos na tela
void imprimir(Pilha* p);

// Desempilha um elemento
// Entrada: pilha
// Retorno: ponteiro para o elemento retirado do topo da pilha, ou NULL contrário
// Pré-condição: pilha criada
// Pós-condição: um elemento é removido do topo da pilha
TipoItem* pop(Pilha* p);

#endif /* pilha_h */