#include <stdio.h>
#include <math.h>

int main(void)
{
    float n1, result;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    result = pow(n1,2);
    printf("O quadrado do seu numero eh: %.0f", result);
    return 0;
}

