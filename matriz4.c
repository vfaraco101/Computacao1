#include <stdio.h>
#include <stdbool.h>

#define MAX 10

int main() {
    int A[MAX][MAX];
    int n;

    printf("Digite a ordem da matriz quadrada (máximo %d): ", MAX);
    scanf("%d", &n);

    if (n > MAX || n < 1) {
        printf("Ordem inválida.\n");
        return 1;
    }

    printf("Digite os elementos da matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    int magicSum = 0;
    bool ehMagico = true;

    for (int j = 0; j < n; j++)
        magicSum += A[0][j];

    for (int i = 1; i < n && ehMagico; i++) {
        int somaLinha = 0;
        for (int j = 0; j < n; j++)
            somaLinha += A[i][j];
        if (somaLinha != magicSum)
            ehMagico = false;
    }

    for (int j = 0; j < n && ehMagico; j++) {
        int somaColuna = 0;
        for (int i = 0; i < n; i++)
            somaColuna += A[i][j];
        if (somaColuna != magicSum)
            ehMagico = false;
    }

    int somaDiagPrincipal = 0;
    for (int i = 0; i < n; i++)
        somaDiagPrincipal += A[i][i];
    if (somaDiagPrincipal != magicSum)
        ehMagico = false;

    int somaDiagSecundaria = 0;
    for (int i = 0; i < n; i++)
        somaDiagSecundaria += A[i][n - 1 - i];
    if (somaDiagSecundaria != magicSum)
        ehMagico = false;

    if (ehMagico)
        printf("A matriz é um quadrado mágico!\n");
    else
        printf("A matriz NAO é um quadrado mágico.\n");

    return 0;
}
