#include <stdio.h>

void transf (double cot, double vi){
double vf;
    vf = vi/cot;
    printf("o valor %.2f em reais e equivalente a %.2f dolares\n", vi, vf);

}

int main (){

double cott, v1;

printf("digite a cotação\n");
scanf("%lf", &cott);
printf("digite o valor em reais\n");
scanf("%lf", &v1);

transf (cott, v1);


    return 0;
}