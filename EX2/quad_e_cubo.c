#include <stdio.h>
#include <math.h>

int main(void)
{
    float quad, cubo, result1, result2;
    printf("Digite um numero: ");
    scanf("%f", &quad);
    printf("Digite um numero: ");
    scanf("%f", &cubo);
    result1 = pow(quad,2); //Para dar o resulto do quadrado do numero.
    result2 = pow(cubo,3); //Para dar o resulto do cubo do numero.
    printf("O quadrado do seu numero eh: %.0f\n", result1);
    printf("O cubo do seu numero eh: %.0f\n", result2);
    return 0;
}
