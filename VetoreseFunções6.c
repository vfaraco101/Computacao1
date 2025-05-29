#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int lim){
srand(time(NULL));

    for (int i = 0; i < n; i++){
        v[i] = rand() %(lim + 1);
    }
}

void imprimeDireto(int v[], int n) {
    printf("Ordem direta:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void imprimeInverso(int v[], int n) {
    printf("Ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];
    int tamanho = 10;
    int limite = 50;

    preencheVetor(vetor, tamanho, limite);

    imprimeDireto(vetor, tamanho);
    imprimeInverso(vetor, tamanho);

    return 0;
}
