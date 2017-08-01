#include <stdio.h>

main()
{
    int num;

    printf("Introduca um Nº:    ");
    scanf("%d",&num);
    printf("O Nº introduzido foi:   %d\n",num);
    /*
        Para ler qualquer variavel do tipo int, char, float ou double utilizando a função scanf é preciso
        preceder cada variavel de um & ("E" Comercial). Caso nao se faça isso, a execução do programa pode
        ter resultados inesperados.
    */
}
