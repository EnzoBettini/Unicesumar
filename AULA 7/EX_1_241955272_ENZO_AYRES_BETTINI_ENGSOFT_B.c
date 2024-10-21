#include <stdio.h>

int main (){

double ve, vd;

printf("digite o valor para ver o desconto\n");
scanf("%lf", &ve);
if (ve<100){
    printf("não há desconto, valor final %.2f\n", ve);
}
else if(ve>=500){
vd=ve*0.8;
printf("valor com 20%% de desconto %.2f", vd);

}
else if (ve>=100){
vd=ve*0.9;
printf("valor com 10%% de desconto %.2f", vd);

}

return 0;
}