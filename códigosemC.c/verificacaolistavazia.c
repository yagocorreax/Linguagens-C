#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
   int qtd;
   int dados[MAX];
} lista;


int tamanho_lista(lista* li) {
    if (li == NULL)
        return -1;
    else
    return li->qtd;
}

int main() { 
    lista *li;

    li = (lista*) malloc(sizeof(lista)); // aloca memoria

    if (li !=NULL)
        li->qtd=0; // inicializa a lista
    
        int x = tamanho_lista(li);

        printf("Tamanho %d\n", x);

        return 0;
}

    
