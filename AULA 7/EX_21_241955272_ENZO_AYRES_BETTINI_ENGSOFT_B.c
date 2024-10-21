#include <stdio.h>
#include <math.h>

int main() {
    double wmpr, tx, tmp, mont;
    int jur;

    
    printf("Digite o valor do emprestimo");
    scanf("%lf", &wmpr);

    printf("Digite a taxa de juros\n 0.10 para 10%% (exemplo) ");
    scanf("%lf", &tx);

    printf("Digite a quantidade em meses");
    scanf("%lf", &tmp);

    printf("Digite se se o juros é simples ou composto\n 1 para simples\n 2 para composto");
    scanf("%d", &jur);

    switch(jur){

case 1:

mont = wmpr * tx *tmp;
printf("O montante acumulado é: %.2lf\n", mont);
break;

case 2:


mont = wmpr * pow((1 + tx), tmp);
printf("O montante acumulado é: %.2lf\n", mont);
break;

default:
printf("Opção inválida!\n");
   
    
    }

    
    
    return 0;
}
