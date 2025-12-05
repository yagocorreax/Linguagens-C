#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int matricula;
    char nome[30];
} aluno;

typedef struct {
    int qtd;
    aluno dados[MAX];
} lista;

int remove_lista(lista *li , int mat) {
    if(li == NULL) return 0;
    if (li->qtd == 0) return 0;

    int i = 0, k;

    while (i < li->qtd && li->dados[i].matricula != mat){
        i++;
    }

    if(i == li->qtd)  
        return 0;

    for(k = i; k < li->qtd - 1; k++)
        li->dados[k] = li->dados[k + 1];

    li->qtd--;
    return 1;
}

void mostra_lista(lista *li) {

    if (li->qtd == 0) {
        printf("\nLista vazia.\n");
        return;
    }

    printf("\n--- Lista de alunos ---\n");
    for(int i = 0; i < li->qtd; i++){
        printf("Matrícula: %d | Nome: %s\n", 
               li->dados[i].matricula,
               li->dados[i].nome);
    }
    printf("------------------------\n");
}

int main() {
    lista *li = (lista*) malloc(sizeof(lista));
    li->qtd = 0;

    // adicionando alunos manualmente
    li->dados[0].matricula = 10;
    sprintf(li->dados[0].nome, "Joao");

    li->dados[1].matricula = 20;
    sprintf(li->dados[1].nome, "Maria");

    li->dados[2].matricula = 30;
    sprintf(li->dados[2].nome, "Anna");

    li->dados[3].matricula = 40;
    sprintf(li->dados[3].nome, "Tiago");

    li->dados[4].matricula = 50;
    sprintf(li->dados[4].nome, "Fred");

    li->dados[5].matricula = 60;
    sprintf(li->dados[5].nome, "Mateus");

    li->qtd = 6;

    printf("ANTES da remoção:\n");
    mostra_lista(li);

    int mat;
    printf("\nDigite a matricula a remover: ");
    scanf("%d", &mat);

    if(remove_lista(li, mat))
        printf("\nAluno removido com sucesso!\n");
    else
        printf("\nMatrícula não encontrada!\n");

    printf("\nDEPOIS da remoção:\n");
    mostra_lista(li);

    free(li);
    return 0;
}






