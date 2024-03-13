#include "stdio.h"
#include "locale.h"

// Objetivos receber caracteres

void main()
{
    char a,b;
    printf("Informe uma letra: ");
    scanf(" %c",&a);
    printf("Informe uma letra: ");
    scanf(" %c",&b);

    printf("As letras informadas foram: %c e %c", a,b);


}
