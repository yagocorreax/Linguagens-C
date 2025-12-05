#include <stdio.h>
#include <stdlib.h>

 #define MAX 100

 typedef struct {
    int qtd;
 } Lista;
    
int lista_cheia(Lista* li) {
    if (li == NULL)
        return -1; 
    return(li->qtd == MAX); 
 }
  int main() { 
    Lista *li;
    
    li = (Lista*) malloc(sizeof(Lista));
    li-> qtd > 100; 

    int x = lista_cheia(li);

    if(x == 1)
    printf("A lista está cheia!\n"); 
    else if(x == 0)
    printf("A lista NÃO está cheia!\n"); 
    else
    printf("Erro: A lista não existe!\n");

    free(li);

    return 0;
 }
