#include "stdio.h"
#include "locale.h"

void main()
{
    // Para usar acentua��o devo usar setlocale
    setlocale(LC_ALL, "Portuguese");
    printf("\n+------------------------------------+");
    printf("\n| IFPR Campus Colombo                |");
    printf("\n| Desenvolvedor : /tLeonardo Baptista. |");
    printf("\n| Data: 28/02/2024                   |");
    printf("\n+------------------------------------+");
}
