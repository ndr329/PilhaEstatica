# Pilha Estática

Implementação de uma estrutura de dados do tipo **Pilha (Stack)** utilizando a 
linguagem C e um vetor de tamanho fixo.

## Estrutura da Pilha

O projeto apresenta a Implementação de uma pilha estática utilizando um vetor para 
armazenar os elementos.
A pilha segue o princípio **LIFO (Last In, First Out)**, no qual o último elemento 
inserido é o primeiro a ser removido da pilha.

```c
#define TAM_MAX 1000

typedef int TipoItem;

typedef struct {
    TipoItem vet[TAM_MAX];
    int topo;
} Pilha;
```

---

## Funcionalidades

As operações implementadas são:
- criar pilha vazia;
- inserir um elemento no topo da pilha (`push`);
- exibir os elementos da pilha;
- remover um elemento do topo da pilha (`pop`);
- interação com o usuário por meio de um menu.

---

## Estrutura do projeto

```text
.
|- main.c
|- pilha.h
|- pilha.c
|- utils.h
|- utils.c
|- README.txt
```

---

## Compilação

Utilizando o GCC:

```dash
gcc *.c -o pilhaEstatica
```

---

## Execução

Linux/macOS:

```dash
./pilhaEstatica
```

Windows:

```cmd
pilhaEstatica.exe
```

---

# Autor

André Brandão