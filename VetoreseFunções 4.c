#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int lim){
srand(time(NULL));

    for (int i = 0; i < n; i++){
        v[i] = rand() %(lim + 1);
    }
}

int main() {
    int vetor[10];
    int tamanho = 10;
    int limite = 50;

    preencheVetor(vetor, tamanho, limite);

    printf("Vetor preenchido: ");
    for (int i = 0; i <tamanho; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
