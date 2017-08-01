#include <stdio.h>

main()
{
    long int n_segundos;
    printf("Introduza o Nº de segundos: ");
    scanf("%ld", &n_segundos);
    printf("Horas   :   %d\n", (int) n_segundos / 3600); //numero de horas é calculado entre o numero total de segundos e o numeros de segundos contidos em uma hora (3600).
    printf("Minutos :   %d\n", (int)(n_segundos % 3600)/60); //numero de minutos é calculado do quiocente da divisao dos segundos restantes dividido pelo numero de segundos contidos em um minuto (60).
    printf("Segundos:   %d\n", (int) n_segundos % 60);//numero de segundos é obtido pelo resto da divisao entre o número total de segundos e 60.
}
