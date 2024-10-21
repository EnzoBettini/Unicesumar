#include <stdio.h>

int main(){
double mi,n1,n2,n3,n4,n5, msala, rep;
printf ("Digite qual a a nota de corte da média das turmas\n");
scanf("%lf", &mi);

printf ("Digite qual a a nota de reprovação\n");
scanf("%lf", &rep);

printf("Digite a nota do aluno 1\n");
scanf("%lf", &n1);

printf("Digite a nota do aluno 2\n");
scanf("%lf", &n2);

printf("Digite a nota do aluno 3\n");
scanf("%lf", &n3);

printf("Digite a nota do aluno 4\n");
scanf("%lf", &n4);

printf("Digite a nota do aluno 5\n");
scanf("%lf", &n5);


msala = (n1+n2+n3+n4+n5)/5;

if (msala<rep){


    printf("Sala maioria reprovada");

    return 0;
}

if (msala >= mi){


    printf("A media da sala é maior que a nota de corte\n");
} else if (msala<mi) printf("A maioria da sala está de recuperação\n");








    return 0;
}