#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct lista {
    int qtd;
    struct aluno dados[MAX];
} Lista;

Lista* cria_lista() {
    Lista *li = (Lista*) malloc(sizeof(Lista));

    if (li != NULL)
        li->qtd = 0;

    return li;
}

void libera_lista(Lista *li) {
    free(li);
}

int main() {
    Lista *li;

    li = cria_lista();  // cria lista

    if(li != NULL)
        printf("Lista criada com sucesso!\n");

    libera_lista(li);   // libera memória
    printf("Lista liberada!\n");

    return 0;
}






