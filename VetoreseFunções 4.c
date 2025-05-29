#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int lim){
    for (int i = 0; i < n; i++){
        v[i] = rand() %(lim + 1);
    }
}

int main() {
    srand(time(NULL));
    int vetor[5];
    int tamanho = 5;
    int limite = 100;

    preencheVetor(vetor, tamanho, limite);

    printf("Vetor preenchido: ");
    for (int i = 0; i <tamanho; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
