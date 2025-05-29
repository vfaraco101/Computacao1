#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int lim){
    for (int i = 0; i < n; i++){
        v[i] = rand() %(lim + 1);
    }
}

void ordemDireto(int v[], int n) {
    printf("Ordem direta:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void ordemInversa(int v[], int n) {
    printf("Ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    int vetor[5];
    int tamanho = 5;
    int limite = 100;

    preencheVetor(vetor, tamanho, limite);

    ordemDireto(vetor, tamanho);
    ordemInversa(vetor, tamanho);

    return 0;
}
