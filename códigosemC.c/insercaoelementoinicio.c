#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct { 
    int qtd;
    int dados[MAX];
} lista;

int insere_inicio(lista *li, int valor) {

    if(li ==NULL)
    return -1;

    if (li->qtd == MAX)
    return 0;

    for( int i = li->qtd - 1; i >= 0; i--) {
        li->dados[i + 1] = li->dados[i]; 
    }
li->dados[0] = valor;
li->qtd++;
}

int main() {
    lista *li = (lista*) malloc(sizeof(lista));

    if (li == NULL) {
        printf("Erro ao alocar memóri.\n");
        return 1;
     }
     li->qtd = 0;

     insere_inicio(li, 30);
     insere_inicio(li, 20);
     insere_inicio(li, 10);

     printf("Lista atual: ");
     for(int i=0; i<li->qtd; i++) {
        printf("%d" , li->dados[i]);
     }

     free(li);
     return 0;
    }