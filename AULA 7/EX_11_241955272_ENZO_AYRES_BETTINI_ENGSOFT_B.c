#include <stdio.h>


int main (){



int l1, l2, l3;


printf("Digite o valor do lado 1\n");
scanf("%d", &l1);

printf("Digite o valor do lado 2\n");
scanf("%d", &l2);

printf("Digite o valor do lado 3\n");
scanf("%d", &l3);


if (l1==l2 && l1==l3 && l2==l3){


    printf("É um triangulo equilátero\n");

}else if (l1==l2 || l2==l3 || l1==l3){


    printf("É um triangulo isoceles");
}else printf("É um triangulo escaleno\n");







    return 0;
}