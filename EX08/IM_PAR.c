#include <stdio.h>
/*Uma funcao, sem retorno, que recebe um valor inteiro por parametro, verifica e
informa se tal numero eh par ou impar.*/

void pa_im(int paim);

int main(void)
{
    int n;

    printf("Digite um numero: ");
    scanf("%i", &n);

    pa_im(n);

    return 0;
}
void pa_im(int paim)
{
    if (paim % 2 == 0)
    {
        printf("Esse numero eh par!");
    }
    else
    {
        printf("Esse numero eh impar!");
    }
}
