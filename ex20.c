#include "stdio.h"
#include "locale.h"

//Calculando �rea para um terreno

void main()

{
    setlocale(LC_ALL, "Portuguese");
    float salario, percentualreajuste, reajuste, salarioreajustado ;

    printf("Informe o sal�rio: ");
    scanf("%f",&salario);

    printf("Informe o percentual de reajuste: ");
    scanf("%f",&percentualreajuste);

    reajuste = salario*(percentualreajuste/100);

    printf("\nO reajuste do sal�rio ser� de %.2f reais.",reajuste);

    salarioreajustado = salario+reajuste;

    printf("\nO novo sal�rio ser� de %.2f reais.",salarioreajustado);
}
