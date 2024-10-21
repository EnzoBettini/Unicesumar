#include <stdio.h>


int main(){

double valor, aux2, porcentagem, aux1;


printf("Digite o valor do produto; \n");
scanf("%lf", &valor);

printf("Digite quantos %% sera o desconto (ex: 10, 20, 30, 40...)\n");
scanf("%lf", &porcentagem);


aux1 = porcentagem/100;

aux2 = valor - (valor * aux1);

printf("O valor %.2f com %.0f %% de desconto é %.2f\n", valor, porcentagem, aux2);

return 0;
}