#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct { 
    int qtd;
    int dados[MAX];
} lista;

 int insercao_ordenada (lista *li, int valor) {
     if (li == NULL)
    return 0; // lista inválida

    if (li->qtd ==MAX)
    return 0; // lista cheia

    int i = 0;

    while (i < li->qtd && li->dados[i] < valor ) {
        i++;
    }

    for(int j = li->qtd -1; j>=i; j--) {
        li->dados[j + 1] = li->dados[j];
    }

    li->dados[i]=valor;
    li->qtd++;

    return -1;
 }

int main() {
 lista *li= (lista*) malloc(sizeof(lista));
 if (li == NULL) return -1;

 li-> qtd = 0;

 insercao_ordenada(li, 20);
 insercao_ordenada(li, 5);
 insercao_ordenada(li, 15);
 insercao_ordenada(li, 10);

 printf("Lista ordenada:\n");
 for (int i = 0; i<li->qtd; i++) {
    printf("%d " , li->dados[i]);
}

free(li); 
return 0;
}
