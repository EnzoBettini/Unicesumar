#include <stdio.h>

int main (){

double alg, porcent, km, vp, vt;

printf("Digite o valor do aluguel:  \n");
scanf("%lf", &alg);

printf("Digite o valor da porcentagem por km:  \n");
scanf("%lf", &porcent);

printf("Digite quantos KM foram rodados acima do limite:  \n");
scanf("%lf", &km);

vp = alg + (alg*(porcent/100));


vt = vp * km;

printf("O valor final total é %.2f reais", vt);





    return 0;
}