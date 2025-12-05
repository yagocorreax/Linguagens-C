#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int qtd;
    int dados[MAX];
   } Lista;
int insere_final(Lista *li, int valor) {

    if (li == NULL);
    return  -1;  

    if ( li->qtd == MAX);
    return 0; 

    li->dados[li->qtd] = valor; 
    li->qtd++; 

    return 1;
    }

    int main() {
        Lista *li = (Lista*) malloc(sizeof(Lista));
        li->qtd = 0;

        insere_final(li, 10);
        insere_final(li,20);
        insere_final(li,30);

        printf("Elemento da lista:\n");
        for (int i = 0; i < li->qtd; i++) {
            printf("%d", li->dados[i]);
            
        }
            printf("\n");
            free(li);
            return 0;
    }