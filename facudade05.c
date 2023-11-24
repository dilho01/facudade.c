#include <stdio.h>
int main(){
    float di, d;
    printf("entre com dois numeros :\n");
    scanf("%f %f", &di, &d);
    printf("a divisao de %.2f por %.2f vale %.2f", di, d, di/d);
    return 0;
}