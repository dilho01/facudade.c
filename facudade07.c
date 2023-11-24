#include <stdio.h>

int main(){
    int cadastrado, ativo, logado;
    char opcao;
    printf("Deseja cadastra sua conta? S/N \n");
    scanf(" %c ", &opcao);
    
    if(opcao == 'S'){
        cadastrado = 1;
        printf("\n sua conta esta cadastrada\n");
    }

    printf("deseja logar a conta? S/N");
    scanf(" %c ", &opcao);

    if(opcao == 'S'){
        ativo = 1;
        printf("\nconta ativada\n"); 
    }
    printf("deseja logor sua conta? S/N\n");
    scanf(" %c ", &opcao);
    if(opcao == 'S'){
        logado = 1;
        printf("\nconta logada\n");
    }

    if((cadastrado = 1) && (ativo == 1) || (logado == 1)){
        printf("\nsja bem vindo");
    }
    else{
        printf("algo deu erado");
    }
    
}