#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void Matriz(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
}

void transposta(int mat[N][N], int matT[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matT[i][j] = mat[j][i];
        }
    }
}

int main() {
    int mat[N][N], matT[N][N];
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            mat[i][j] = rand() % 50;
        }
    }

    printf("Matriz original:\n");
    Matriz(mat);

    transposta(mat, matT);

    printf("\nMatriz transposta:\n");
    Matriz(matT);

    return 0;
}
