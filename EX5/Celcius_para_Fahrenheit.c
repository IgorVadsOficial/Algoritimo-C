#include <stdio.h>

int main()
{
    float tempcl, tempfa;
    printf("Digite a Temperatura (em Celcius):");
    scanf("%f", &tempcl);
    tempfa = (tempcl * 1.8) + 32;
    printf("A sua temperatura em Fahrenheit eh: %f\n", tempfa);
    return 0;
}
