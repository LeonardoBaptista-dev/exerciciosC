#include "stdio.h"
#include "locale.h"

void main()
{
    setlocale(LC_ALL, "Portuguese");
    //exemplo de uso do \t que faz tabulação
    printf("\n Nome     \t Endereço           \t uf");
    printf("\n Leonardo \t R. Raymundo Kulik  \t PR");
    // usar \ antes para imprimir "
    // printf("\n João D\"agostin");
    /*

    %c

    */
    printf("\n Tenho %d anos de idade",36);
    printf("\n Valor do alface é %.2f ",0.99);
    printf("\n O caractere %c identifica sexo feminino",'F');
    printf("\n A turma %s formará no final de 2026","tads2024");
    printf("\n %c %s foi campeão do JIFPR %d",'O', "IFPR Campus Colombo", 2015);
    printf("\n O valor da água é %.2f",2.99);
    printf("\n O valor da água é %05.2f",2.99);
    printf("\n O valor da água é %07.3f",2.99);
    printf("\n A temperatura atual é %05d Graus celsius",28);
    printf("\n Matando a curiosidade %-06d \n",21);

}

