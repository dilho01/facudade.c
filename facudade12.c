#include <stdio.h>
int main(){
    const int tam = 2;
    float nota[tam],  media;
    int cont;
    
    for (cont = 1; cont <= 2; cont++){
        printf("digite a nota do aluno %d :", cont);
        scanf(" %f ", &nota[tam]);   
        }
    for(cont = 1; cont <= 2; cont ++){
        media = 7; 
        if(media >= nota[tam]){
            printf("nota dos alunos aprovados foram %f ", nota);
        }
    }
return 0;
   
}