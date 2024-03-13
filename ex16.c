#include "stdio.h"
#include "locale.h"

//

void main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[40];
    char endereco_comercial[60];
    printf("Informe o nome: ");
    gets(nome);
    printf("Informe o endereco: ");
    gets("endereco_comercial");
    printf("\nDados na tela");
    printf("\nNome:%s",nome);
    printf("\nEndereço Comercial: %s",endereco_comercial);


}
