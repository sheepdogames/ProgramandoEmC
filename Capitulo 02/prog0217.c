#include <stdio.h>

main()
{
    int a, b;
    printf("Introduza dois Inteiros:    ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b); // Para escrever % num printf (caractere com um significado especial) � necessario escrever %%.

}
