#include <stdio.h>

double soma (double n1, double n2 ){

    return n1+ n2;
}

double sub (double n1, double n2 ){

    return n1-n2;
}

double div (double n1, double n2 ){

    return n1/n2;
}

double multi (double n1, double n2 ){

    return n1*n2;
}

 int main() 
{
 double num1, num2;
 char op;
 
 printf("digite um numero\n");
 scanf("%lf", &num1);
 printf("digite outro numero\n");
 scanf("%lf", &num2);
 printf("digite a operação\n");
 scanf(" %c", &op);
 if (op == '+') printf("soma = %.2lf", soma(num1, num2));
 else if (op == '-') printf("sub = %.2lf", sub(num1, num2));
 else if (op == '/') printf("div = %.2lf", div(num1, num2));
 else if (op == '*') printf("multi = %.2lf", multi(num1, num2));
 else 
 {
    printf("a operação %c é inválida\n", op);
 }

    return 0;
}

