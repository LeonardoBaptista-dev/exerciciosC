#include "stdio.h"
#include "locale.h"

//Calculando área para um terreno

void main()

{
    setlocale(LC_ALL, "Portuguese");
    float salario, percentualreajuste, reajuste, salarioreajustado ;

    printf("Informe o salário: ");
    scanf("%f",&salario);

    printf("Informe o percentual de reajuste: ");
    scanf("%f",&percentualreajuste);

    reajuste = salario*(percentualreajuste/100);

    printf("\nO reajuste do salário será de %.2f reais.",reajuste);

    salarioreajustado = salario+reajuste;

    printf("\nO novo salário será de %.2f reais.",salarioreajustado);
}
