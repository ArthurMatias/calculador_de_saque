#include <stdio.h>
#include <math.h>

int cal_notas(int saque, int *notas100, int *notas50, int *notas20, int *notas10, int *notas5){
    
    *notas100 = saque / 100;
    saque %= 100;
    *notas50 = saque / 50;
    saque %= 50;
    *notas20 = saque / 20;
    saque %= 20;
    *notas10 = saque / 10;
    saque %= 10;
    *notas5 = saque / 5;
}

int main(void){

    int valor_saque;
    int notas100, notas50, notas20, notas10, notas5;

    printf("Valor do saque: R$ ");
    scanf("%d", &valor_saque);

    cal_notas(valor_saque, &notas100, &notas50, &notas20, &notas10, &notas5);

    printf("R$ 100,00: %d\n", notas100);
    printf("R$ 50,00: %d\n", notas50);
    printf("R$ 20,00: %d\n", notas20);
    printf("R$ 10,00: %d\n", notas10);
    printf("R$ 5,00: %d\n", notas5);

    return 0;
}
