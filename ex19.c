#include "stdio.h"
#include "locale.h"

void main()

{
    setlocale(LC_ALL, "Portuguese");
    float largura, comprimento, area;

    printf("Informe um valor para a largura: ");
    scanf("%f",&largura);
    printf("Informe um valor para o comprimento: ");
    scanf("%f",&comprimento);

    area = largura*comprimento;

    printf("\nA área total do terreno é de %.2f metros quadrados.",area);
}

