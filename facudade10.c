#include <stdio.h>
int main(){
    int numero, cont, maior;
    maior = 0;
    for (cont = 1; cont <= 15; cont++) {
        printf("digite o numero :");
        scanf("%d", &numero);
        if (numero > maior){
            maior=numero;
        }
    }
    printf("o maior numero foi %d ", maior);
    return 0;
}