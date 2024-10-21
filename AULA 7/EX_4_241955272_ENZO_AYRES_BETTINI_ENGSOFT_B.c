#include <stdio.h>

void qpft(int num, int nx){
    if (nx*nx == num){

        printf("é um quadrado perfeito!\n");
    } else{

        printf("não é um quadrado perfeit!\n");
    }




}

int main() {


int n1, n2;

printf("digite um numero para verificar se é um quadrado perfeito!\n");
scanf("%d", &n1);

if (n1 < 0){

    printf("não existe raiz de numero negativo!!!");
    return 0;

}




    for (n2=0; n2 * n2 < n1; n2++); // não tem como fazer sem laço de repetição essa parte

qpft(n1, n2);

return 0;

}