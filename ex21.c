#include "stdio.h"
#include "locale.h"


void main()

{
    setlocale(LC_ALL, "Portuguese");
    float valorproduto, percentualdesconto, valorcomdesconto, desconto ;

    printf("Informe o valor do produto: ");
    scanf("%f",&valorproduto);

    printf("Informe o percentual de desconto: ");
    scanf("%f",&percentualdesconto);

    desconto = valorproduto*(percentualdesconto/100);

    valorcomdesconto = valorproduto-desconto;

    printf("\nO valor do produto com desconto será de %.2f reais.",valorcomdesconto);


}

