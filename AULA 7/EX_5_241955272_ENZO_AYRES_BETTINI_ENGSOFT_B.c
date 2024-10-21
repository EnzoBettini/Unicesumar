#include <stdio.h>


void jogo (int nc, int ne, int *controle){
if (nc<10){
int num;
printf("Digite um numero para verificar se é o numero escolhido!\n");
scanf("%d", &num);


if (ne>num){
    printf("O número digitado é menor!\n");
} else if (ne<num){
    printf("On número digitado é maior\n");
} else if (ne == num){

    printf("Você acertou!\n");
    *controle =1;
}

} else if (nc>=10){


    printf("suas tentativas acabaram!\n");
}

}

int main () {



int n1, nc, controle;


nc=0;
controle =0;


printf("Digite um numero entre 1 e 100: \n");

scanf("%d", &n1);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");


if (n1>100){

printf(" O valor é maior que 100, número inválido");
return 0;
} else if (n1<1){

printf(" O valor é menor que 1, número inválido");
return 0;
}


// JOGO




printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ntentativa de numero %d\n", nc+1);
jogo(nc, n1, &controle);
nc=nc+1;


if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;
if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;if (controle == 0){
    printf("\n\n\ntentativa de numero %d\n\n\n", nc+1);
 jogo(nc, n1, &controle);
 nc=nc+1;
} else return 0;




    return 0;
}

