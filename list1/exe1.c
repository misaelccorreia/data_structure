#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ajustar(int *x){
    if(*x>=24){
        *x=25;
    }else{
        *x=18;
    }
    return *x;
}

int main(void){
    int i, tam, *vet;//duas variaveis e um vetor
    printf("Quantas temperaturas você quer aferir?");
    scanf("%d",&tam);

    srand(time(NULL));
    
    vet=malloc(tam*sizeof(int));

    if(vet){ 
        printf("Memoria alocada com sucesso!\n");
        for(i=0;i<tam;i++){
            *(vet+i)=rand()%40;
            printf("Valor original %d°C, valor ideal ajustado:",*(vet+i));
            *(vet+i)=ajustar(vet+i);
            printf("%d°C \n",*(vet+i));
        }
    }
    return 0;
}

//Na linha 14 que me pega essa variavel 'vet' ela não foi declarada em lugar nenhum, quando eu crio um ponteiro automaticamente eu crio uma variável a apartir daque endereço?