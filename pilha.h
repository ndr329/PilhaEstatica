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


#endif /* pilha_h */