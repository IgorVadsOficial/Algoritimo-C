#include <stdio.h>

int main()
{ int x;
    printf ("Digite um numero:" );
    scanf("%i",&x);
    printf("Antecessor: " "%i \n",x-1);
    printf("Numero digitado: " "%i \n",x);
    printf("Posterior:  " "%i \n",x+1);
    return 0;
}
