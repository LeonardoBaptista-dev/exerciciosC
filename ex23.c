#include "stdio.h"
#include "locale.h"
void main()

{
    setlocale(LC_ALL, "Portuguese");
    int A,B,x,Ainvertido, Binvertido;

    printf("Informe A: ");
    scanf("%d",&A);
    printf("\nInforme B: ");
    scanf("%d",&B);
    x = A;
    A = B;
    B = x;

    printf("\nOs valor invertido de A seria %d e o valor de B seria %d",A,B);

}
