#include <stdio.h>

int main()
{
    float idade, idadeT;
    printf("Quando anos voce tem? ");
    scanf("%f", &idade);
    idadeT = idade * 365;
    printf("Aproximadamente voce viveu %.0f", idadeT);
    printf(" dias");
    return 0;
}
