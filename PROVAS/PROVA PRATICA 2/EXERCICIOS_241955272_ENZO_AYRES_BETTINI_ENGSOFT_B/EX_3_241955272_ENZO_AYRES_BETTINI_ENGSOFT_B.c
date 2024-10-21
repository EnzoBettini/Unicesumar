#include <stdio.h>

void Verificar (int n, int n2)
{
    if (n > n2) {
printf ("o numero %d e o maior", n);
    }

    else {
        printf("o numero %d e o maior", n2);
    }
}



int main(){

int num1, num2;

printf("digite dois numeros\n");
scanf("%d", &num1);
scanf("%d", &num2);

if (num1 == num2){

    printf("os numeros sao iguais!\n");
}
else {
    Verificar (num1, num2);
}


    return 0;
}


    
