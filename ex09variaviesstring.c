#include "stdio.h"
#include "locale.h"
#include "string.h"
void main()

{
    setlocale(LC_ALL, "Portuguese");
    char a[40] = "Jo�o da Silva"; // reserva 40 espa�os para a string "a"
    char b[40];
    strcpy(b,"Andre da Silva");

    // n�o consigo atribuir tipo string para essa variavel dessa forma:
    // b = "Andr� da Silva;
    // ou faz assim:
    // char a[40] = "Jo�o da Silva";
    // ou faz assim:
    // #include "string.h"
    // char b[40];
    // strcpy(b,"Andre da Silva");

    printf("Nome: %s",a);
    printf("\nNome: %s",b);


}
