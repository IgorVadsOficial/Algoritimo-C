#include <stdio.h>
// Um programa para calcular o fatorial de n, onde o valor de n deve ser
// fornecido pelo usuario. O programa deve exibir uma mensagem seguindo
// o padrao ilustrado nas condicoes a seguir.

// *Se o usuario digitar um valor maior ou igual a zero (n >= 0), como, por
//  exemplo, n = 4, o programa deve exibir na tela a seguinte mensagem: 4! = 24;

// *Senao, o programa deve exibir na tela a seguinte mensagem: Nao existe
//  fatorial de numero negativo.

int main(void)
{
    float nf;
    int i;
    double fatorial = 1;
    printf("Digite um numero que deseja descobrir o fatorial: ");
    scanf("%f", &nf);

    if (nf >= 0)
    {
        for (i = 1; i <= nf; i++)
        {
            fatorial = fatorial * i;
        }
        printf("\n---------------------------------------\n");
        printf("\n %.0f! = %.0lf\n ", nf, fatorial);
        printf("\n---------------------------------------\n");
    }
    else
    {
        printf("\n---------------------------------------\n");
        printf("\nNao existe fatorial de numero negativo!\n");
        printf("\n---------------------------------------\n");
    }
    return 0;
}
