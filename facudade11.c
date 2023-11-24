#include <stdio.h>
int main() {
    int num;
    printf("digite um numero: ");
    scanf(" %d ", &num);
    while (num != 0)
    {
        printf("\no numero digitado = %d \n", num);
        printf("\ndigite o numero novamente: \n");
        scanf("%d", &num);
    }
    return 0;
}