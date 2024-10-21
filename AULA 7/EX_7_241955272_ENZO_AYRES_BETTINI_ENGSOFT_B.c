#include <stdio.h>

int main (){


int login, senha, login1, senha1;


printf("Digite seu novo usuário para login: \n");
scanf("%d", &login);

printf("Digite sua nova senha: \n");
scanf("%d", &senha);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");


printf("Digite seu numero de usuario: \n");
scanf("%d", &login1);

printf("Digite sua nova senha: \n");
scanf("%d", &senha1);


if (login == login1 && senha==senha1){


    printf("Acesso concedido!");
}else printf("acesso negado!");










    return 0; 
}