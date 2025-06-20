#include <stdio.h>

int main() {
    // Quantidade de casas para cada peça
    const int passosTorre = 5;
    const int passosBispo = 5;
    const int passosRainha = 8;

    // FOR - Movimento da Torre
    printf("Movimento da Torre\n");
    for (int i = 0; i < passosTorre; i++) {
        printf("Direita\n");
    }
    printf("Torre andou %d casas para a direita\n", passosTorre);

    // WHILE - Movimento do Bispo
    printf("\nMovimento do Bispo\n");
    int contadorBispo = passosBispo;
    while (contadorBispo > 0) {
        printf("Cima, Direita\n");
        contadorBispo--;
    }
    printf("Bispo andou %d casas em diagonal\n", passosBispo);

    // DO/WHILE - Movimento da Rainha
    printf("\nMovimento da Rainha\n");
    int contadorRainha = passosRainha;
    do {
        printf("Esquerda\n");
        contadorRainha--;
    } while (contadorRainha > 0);
    printf("Rainha andou %d casas para a esquerda\n", passosRainha);

    return 0;
}
