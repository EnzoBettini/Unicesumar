#include <stdio.h>
#include <math.h>

int main() {
    double pr, tx, tmp, mont;

    
    printf("Digite o valor de capital inicial ");
    scanf("%lf", &pr);

    printf("Digite a taxa de juros\n 0.10 para 10%% (exemplo) ");
    scanf("%lf", &tx);

    printf("Digite a quantidade de anos");
    scanf("%lf", &tmp);

    
    mont = pr * pow((1 + tx), tmp);

   
    printf("O montante acumulado é: %.2lf\n", mont);

    return 0;
}
