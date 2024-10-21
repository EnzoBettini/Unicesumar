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
    printf ("soma =%.2f\n",soma(3,3));
    printf ("sub =%.2f\n",sub(3,3));
    printf ("div =%.2f\n",div(3,3));
    printf ("multi =%.2f\n",multi(3,3));

    return 0;
}


