#include "stdio.h"
#include "locale.h"

void main()

{
    setlocale(LC_ALL, "Portuguese");
    int a,resultado;

    printf("Informe um valor para A: ");
    scanf("%d",&a);

    resultado = 2*a;

    printf("\nResultado de A multiplicado por 2: %d",resultado);

}
