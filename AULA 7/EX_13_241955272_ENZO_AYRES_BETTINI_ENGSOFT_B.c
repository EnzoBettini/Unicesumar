#include <stdio.h>

int main (){

int bonus, p1, p2, p3, q1, q2, q3;


printf("Digite o valor de pontos para a quantidade maxima\n");
scanf("%d", &q1);
printf("Digite o valor de pontos para a quantidade mediana\n");
scanf("%d", &q2);
printf("Digite o valor de pontos para a quantidade minima\n");
scanf("%d", &q3);

printf("Digite o valor do bonus maximo\n");
scanf("%d", &p1);
printf("Digite o valor do bonus mediano\n");
scanf("%d", &p2);
printf("Digite o valor do bonus minimo\n");
scanf("%d", &p3);

printf("Digite a quantidade de pontos do funcionario\n");
scanf("%d", &bonus);
if (bonus>=q1){


    printf("o valor do bonus é %d ", p1);
}
else if (bonus>=q2){


    printf("o valor do bonus é %d ", p2);
}
else if (bonus>=q3){


    printf("o valor do bonus é %d ", p3);
} else printf("nao é aplicavel\n");


















    return 0;
}