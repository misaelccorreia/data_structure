#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int normalizar(int *x){
    if(*x>=24){
        *x=25;
    }else{
        *x=18;
    }
    return *x;
}

int main(){
    int i, tam, *vet;//duas variaveis e um vetor
    srand(time(NULL));
    
    printf("Quantas temperaturas você quer aferir?");
    scanf("%d",&tam);
    

    vet=malloc(tam*sizeof(int));

    if(vet){ 
        printf("Memoria alocada com sucesso!\n");
        for(i=0;i<tam;i++){
            *(vet+i)=rand()%40;
            printf("Valor original %d°C, valor ideal ajustado:",*(vet+i));
            *(vet+i)=normalizar(vet+i);
            printf("%d°C \n",*(vet+i));
        }
    }
    return 0;  
}
