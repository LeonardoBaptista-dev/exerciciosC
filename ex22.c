#include "stdio.h"
#include "locale.h"


void main()

{
    setlocale(LC_ALL, "Portuguese");
    float real,cotacaodolar,valorconvertido ;

    printf("Informe o valor a ser convertido para dolar em real: ");
    scanf("%f",&real);

    printf("Informe a cota��o do dolar: ");
    scanf("%f",&cotacaodolar);

    valorconvertido = real/cotacaodolar;

    printf("O valor total convertido ser� de %.2f reais",valorconvertido);


}
