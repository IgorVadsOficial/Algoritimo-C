#include <stdio.h>

int main()
{
    float volume, comprimento, largura, altura;
    printf("Digite o comprimento do seu retangulo\n (Metros)");
    scanf("%f", &comprimento);
    printf("Digite o largura do seu retangulo\n (Metros)");
    scanf("%f", &largura);
    printf("Digite o altura do seu retangulo\n (Metros)");
    scanf("%f", &altura);
    volume = comprimento * largura * altura;
    printf("O raio do seu circulo eh: %.2f\n", volume);
    return 0;
}
