#include <stdio.h>

main()
{
    float x;
    printf("Introduza um N� real:   ");
    scanf("%f",&x);
    printf("Parte Inteira       :%d\n",(int) x); //um casting para o int para obter a parte inteira de um real e alteralo
    printf("Parte Fracionaria   :%f\n",x - ((int) x)); // � retirado do valor x a sua parte inteira para obter a parte fracionaria
}
