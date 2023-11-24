#include<stdio.h>
int main(){
    int opcao;
    printf("entre com um nuemro inteiro\n");
    scanf(" %d ", &opcao);

if(opcao >= 0){
        if(opcao ==0){
            printf("\n numero nulo");
        }else{
            printf("\n numero positivo\n");
        }
    }
    else{
        printf("numero negativo");
    }
}