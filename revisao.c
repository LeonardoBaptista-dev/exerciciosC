#include "stdio.h"
#include "locale.h"

// revisao aula passada
void main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("%c IFPR %s sa�da Turma Tads %d", 'O', "Campus Colombo", 2024);
}
