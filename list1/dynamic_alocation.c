#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  int tam_x,tam_y, **x, i,j;

  printf("Digite o tamanho do eixo x: ");
  scanf("%d",&tam_x);
  printf("Digite o tamanho do eixo y: ");
  scanf("%d",&tam_y);

  x = malloc(tam_x *sizeof(int));
  
  //expondo o vetor
  printf("Endereços no vetor:\n");
  for(i=0;i<tam_x;i++){
    printf("%i\n",&x[i]);
  }

  for(i=0;i<tam_x;i++){
    *x[i]= malloc(tam_y *sizeof(int));

    //preciso de um ponteiro para ponteiro para poder acessar o local na memoria e então a função calloc abrir mais. 
    for(j=0;j<tam_y;j++){
      printf("[ %i ] ",&x[i][j]);
    }
    printf("\n");
  }

}