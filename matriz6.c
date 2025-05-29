
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void preencheBingo(int m[][N], int nl, int nc) {
    int numerosGerados[100] = {0};
    int contador = 0;
    int numero;
    int i, j;

    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            do {
                numero = rand() % 100;
            } while (numerosGerados[numero] == 1);

            m[i][j] = numero;
            numerosGerados[numero] = 1;
        }
    }
}

void Matriz(int m[][N], int nl, int nc) {
    int i, j;
    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            printf("%2d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    int cartela[N][N];
    preencheBingo(cartela, N, N);
    Matriz(cartela, N, N);
    return 0;
}
