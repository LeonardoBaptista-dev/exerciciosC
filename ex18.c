#include "stdio.h"
#include "locale.h"

void main()

{
    setlocale(LC_ALL, "Portuguese");
    float totalvendas,comissao;

    printf("Informe um valor para o total de vendas: ");
    scanf("%f",&totalvendas);

    comissao = totalvendas*0.1;

    // formatar para duas casas .2f
    printf("\n A comissão é de: %.2f reais",comissao);
}

