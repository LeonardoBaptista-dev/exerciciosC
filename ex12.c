#include "stdio.h"
#include "locale.h"

void main()

{
    setlocale(LC_ALL, "Portuguese");
    int A,B,C;

    printf("Informe A: ");
    scanf("%d",&A);
    printf("\nInforme B: ");
    scanf("%d",&B);
    C = A+B;

    printf("\nSoma: %d",C);

}
