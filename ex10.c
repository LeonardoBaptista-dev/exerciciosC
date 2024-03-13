#include "locale.h"
#include "stdio.h"

void main()

{
    setlocale(LC_ALL, "Portuguese");
    char nome[40] = "Leonardo"; //reserva 40 espaços para a string "a"
    char endereco[50] = "Rua Raimundo Kulik, 113";
    int idade = 36;
    float preco_do_pao = 9.99;

    printf("\nNome: %s \nEndereço:%s \nIdade: %d \nPreço do pão: %.2f\n",nome,endereco,idade,preco_do_pao);
}


