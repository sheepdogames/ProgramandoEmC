#include <stdio.h>

main()
{
    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("Introduza o Raio da circunfer�ncia: ");
    scanf("%f", &raio); // O formato de leitura e escrita para numeros reais (float) � %f
    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("�rea = %f\nPerimetro = %f\n", area, perimetro);
}
