#include "stdio.h"
#include "locale.h"
#include "math.h"

void main()
{
        setlocale(LC_ALL, "Portuguese");

        int a,b,c,d,e,f,g;
        int raizquadrada, potencia;

        a = 5;
        b = 6;
        c = a+b;
        d = a-b;
        e = a*b;
        f = a/b;
        g = a%b;
        raizquadrada=sqrt(4);
        potencia = pow(2,3);



        printf("\nSoma: %d",c);
        printf("\nSubtração: %d",d);
        printf("\nMultiplicação: %d",e);
        printf("\nDivisão: %d",f);
        printf("\nResto: %d",g);
        printf("\nRaiz quadrada: %d", raizquadrada);
        printf("\nPotencia: %d", potencia);
}
