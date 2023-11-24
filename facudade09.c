#include <stdio.h>

int numero, cont;
int main(){
printf("digite um numero:");
scanf( " %d ", &numero);
for (cont = 1; cont <= 20; cont = cont + 1 ) {
    printf("\n numero = %d ", numero);
}
return 0;
}