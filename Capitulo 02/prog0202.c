#include <stdio.h>

main()
{
    int num;

    printf("Introduca um N�:    ");
    scanf("%d",&num);
    printf("O N� introduzido foi:   %d\n",num);
    /*
        Para ler qualquer variavel do tipo int, char, float ou double utilizando a fun��o scanf � preciso
        preceder cada variavel de um & ("E" Comercial). Caso nao se fa�a isso, a execu��o do programa pode
        ter resultados inesperados.
    */
}
