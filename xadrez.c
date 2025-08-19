#include <stdio.h>

int main()
{
    int contagemTorre = 5;
    int contagemBispo = 0;
    int contagemRainha = 0;

    // Movimento da torre

    printf("Início do movimento da torre. \n");
    for (size_t i = 0; i < contagemTorre; i++)
    {
        printf("Direita \n");
    }
    printf("Fim do movimento da torre. \n");

    // Movimento do Bispo

    printf("Início do movimento do Bispo. \n");
    while (contagemBispo < 5)
    {
        printf("Cima Direita \n");
        contagemBispo++;
    }
    printf("Fim do movimento do Bispo. \n");

    // Movimento da rainha

    printf("Início do movimento da rainha. \n");
    do
    {
        printf("Esquerda \n");
        contagemRainha++;
    } while (contagemRainha != 8);
    printf("Fim do movimento da rainha. \n");

    return 0;
}
