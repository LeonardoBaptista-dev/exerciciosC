#include "stdio.h"

void main()

{
    float a,b,c;
    a = 5.3;
    b = 10.4;
    c = 15.6;
    printf("Valor de a:%06.3f b:%06.1f c:%-7.1f",a,b,c);
    printf(" Valor de %07.3f",a); //7 casas decimais 3 casa depois da virgula
}
