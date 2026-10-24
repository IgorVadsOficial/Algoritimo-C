#include <stdio.h>
#include <math.h>

#define pi 3.14

int main()
{
    float area, raio;
    printf("Digite o raio do seu circulo:\n ");
    scanf("%f", &raio);
    area = pi * powf(raio, 2);
    printf("O raio do seu circulo eh: %.2f\n", area);
    return 0;
}
