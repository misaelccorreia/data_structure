#include <stdlib.h>
#include <stdio.h>
#include "no.h"

void inserir(No **fila, int num);
No* remover(No **fila);
No* imprimir(No **fila);

void inserir(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL)
            *fila = novo;
        else{
            aux = *fila;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }else
        printf("\nErro ao alocar memória\n");
}

No* remover(No **fila){
    No* remove = NULL;

    if(*fila){
        remove = *fila;
        *fila = remove->proximo;
    }else
        printf("\n Fila vazia.\n");
    return remove;
}

No* imprimir(No **fila){ //erro
    while(fila){
        printf("%d",fila->valor);
        fila = fila->proximo;
    }
    printf("\n");
}

