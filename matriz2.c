#include <stdio.h>
#define max_n 10

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
void Pascal(int n) {
    int mat[max_n][max_n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            mat[i][j] = binomial(i, j);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i)
                printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Digite o numero de linhas do triangulo de Pascal (1 a %d): ", max_n);
    scanf("%d", &n);
    if (n < 1 || n > max_n) {
        printf("Número de linhas invalido! Deve ser entre 1 e %d.\n", max_n);
        return 1;
    }
    Pascal(n);
    return 0;
}
