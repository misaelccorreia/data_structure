#include <stdio.h>
#include <stdlib.h>

int tabuleiro[];
int tam;

//criar dinamicamente matriz
void gerarMatriz(int tam){
  int *vet;
  for (int i = 0; i < tam; i++){
      tabuleiro[i] = malloc(sizeof(int));
  }
  printf("Ponteiros criados com sucesso.");
}

void imprimirMatriz(){
  //while (*proximo != NULL)
  for (int i = 0; i < tam; i++){
    printf("[ %i ]",tabuleiro[i]);
  }
}

int main(void){

  int c;
  printf("Digite o númeo de colunas da Matriz: ");
  scanf("%d",&tam);

  gerarMatriz(tam);
  imprimirMatriz();

}



