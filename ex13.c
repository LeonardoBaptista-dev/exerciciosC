#include "stdio.h"
#include "locale.h"
#include "math.h"


void main()
{
    setlocale(LC_ALL, "Portuguese");

    // receba um numero e calcule a area do quadrado (lado X lado)

    int a,areaquadrado;
    printf("Informe a: ");
    scanf("%d",&a);
    areaquadrado = a*a;

    printf("\nArea do quadrado: %d metros quadrados",areaquadrado);

    // receba os lados do retangulo e calcule o perimetro e a area do retangulo

    int b,c,perimetro, arearetangulo;

    printf("\n\nInforme b: ");
    scanf("%d",&b);
    printf("\nInforme c: ");
    scanf("%d",&c);
    perimetro = (b*2)+(c*2);
    arearetangulo = b*c;

    printf("\nO perimetro do retangulo de b e c é: %d e a área do retangulo é: %d ",perimetro,arearetangulo);

    // receba 3 numero e calcule a média, utilize o tipo de variavel float

    float d,e,f,media;

    printf("\n\nInforme d: ");
    scanf("%f",&d);
    printf("\nInforme e: ");
    scanf("%f",&e);
    printf("\nInforme f: ");
    scanf("%f",&f);
    media = (d+e+f)/3;

    printf("\nA média de d,e e f  é: %.2f ",media);







}

