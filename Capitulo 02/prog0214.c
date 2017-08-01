#include <stdio.h>

main()
{
    int num;
    printf("Introduza um Inteiro:   ");
    scanf("%d",&num);
    printf("Foi introduzido %d cujo caractere = '%c'\n",
           num, (char) num);
    printf("O Caractere seguinte = '%c' tem o ASCII N. %d\n",
           (char) {num+1}, num+1);
}
