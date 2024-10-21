#include <stdio.h>

void PouI(int n) {
    if (n % 2 == 0) {
        printf("O numero %d e par\n", n);
    } else {
        printf("O numero %d e ímpar\n", n);
    }
}

int main() 
{
int num;
printf("Digite um numero para verificação se e par ou impar\n");
scanf("%d",&num);

PouI(num);

    return 0;
}