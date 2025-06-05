#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int A[N][N];
    int maxElement = A[0][0];
    int maxRow = 0, maxCol = 0;
    
    srand(time(NULL));

    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 100;
            printf("%3d ", A[i][j]);

            if (A[i][j] > maxElement || (i == 0 && j == 0)) {
                maxElement = A[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
        printf("\n");
    }

    int minimax = A[maxRow][0];
    int minimaxCol = 0;
    for (int j = 1; j < N; j++) {
        if (A[maxRow][j] < minimax) {
            minimax = A[maxRow][j];
            minimaxCol = j;
        }
    }

    printf("\nMaior elemento da matriz: %d (linha %d, coluna %d)\n", maxElement, maxRow, maxCol);
    printf("Elemento minimax: %d (linha %d, coluna %d)\n", minimax, maxRow, minimaxCol);

    return 0;
}
