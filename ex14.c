#include "stdio.h"
#include "locale.h"

void main()

{
    //setlocale(LC_ALL, "Portuguese");
    float A,B,C;

    printf("Informe A: ");
    scanf(" %f",&A);
    printf("\nInforme B: ");
    scanf(" %f",&B);
    C = A+B;

    printf("\nSoma: %f",C);

}
