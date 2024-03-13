#include "stdio.h"
#include "locale.h"
#include "string.h"
void main()

{
    setlocale(LC_ALL, "Portuguese");
    char a[40] = "João da Silva"; // reserva 40 espaços para a string "a"
    char b[40];
    strcpy(b,"Andre da Silva");

    // não consigo atribuir tipo string para essa variavel dessa forma:
    // b = "André da Silva;
    // ou faz assim:
    // char a[40] = "João da Silva";
    // ou faz assim:
    // #include "string.h"
    // char b[40];
    // strcpy(b,"Andre da Silva");

    printf("Nome: %s",a);
    printf("\nNome: %s",b);


}
