#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
   int qtd;
   int dados[MAX];
} lista;

lista* cria_lista() {
    lista *li = (lista*) malloc(sizeof(lista));
    if(li != NULL)
    li->qtd= 0;
    return li;
}

int insere_final(lista *li, int valor) {
    if(li == NULL) return 0;
    if(li->qtd == MAX) return 0;

    li->dados[li->qtd] = valor;
    li->qtd++;
    return 1;
}

int consulta_lista(lista *li, int valor) {
    if(li == NULL) return -1;
    if(li->qtd == 0) return -1;

    for(int i= 0; i< li->qtd; i++) {
        if(li->dados[i] == valor)
        return i;
        return -1;
 }
}

 int main() {
    lista *li = cria_lista();

    insere_final(li, 10);
    insere_final(li, 20);
    insere_final(li, 30);
    insere_final(li, 40);

    int num;
    printf("Digite um valor para consultar: ");
    scanf("%d" , &num);

    int pos = consulta_lista(li, num);

    if (pos != -1)
        printf("Valor %d encontrado %d.\n" , num, pos);
    else
        printf("valor %d NAO existe na lista.\n" , num);

    return 0;
 }
