#include <stdio.h>

int main (){

double num;
int sub;
double dec;
double fin;

printf("digite um numero que pode ou não ser decimal\n");
scanf("%lf",&num);
sub = num;
dec = num;
fin = dec - sub;

printf("%.0f numero inteiro\n", num);
printf("%.2f parte decimal", fin);




return 0;

}