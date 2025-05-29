#include <stdio.h>
#define MAX_N 10

int fatorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}
int binomial(int n, int r) {
    if (r > n) return 0;
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}
void gerarTrianguloPascal(int n) {
    int mat[MAX_N][MAX_N] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            mat[i][j] = binomial(i, j);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)
                printf("%4d ", mat[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Digite o número de linhas do triângulo de Pascal (1 a %d): ", MAX_N);
    scanf("%d", &n);
    if (n < 1 || n > MAX_N) {
        printf("Número de linhas inválido! Deve ser entre 1 e %d.\n", MAX_N);
        return 1;
    }
    gerarTrianguloPascal(n);
    return 0;
}
