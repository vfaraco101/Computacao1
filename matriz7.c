#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define TAM 10

int A[TAM][TAM], B[TAM][TAM];
bool matrizesCriadas = false;

void criarMatrizes() {
    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            A[i][j] = rand() % 100;
            B[i][j] = rand() % 100;
        }
    }
    matrizesCriadas = true;
    printf("Matrizes criadas com sucesso!\n");
}

void imprimirMatriz(int M[TAM][TAM], char nome) {
    printf("Matriz %c:\n", nome);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%4d", M[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizes() {
    if (!matrizesCriadas) {
        printf("As matrizes ainda nao foram criadas.\n");
        return;
    }
    imprimirMatriz(A, 'A');
    imprimirMatriz(B, 'B');
}

void somarMatrizes() {
    if (!matrizesCriadas) {
        printf("As matrizes ainda nao foram criadas.\n");
        return;
    }
    int soma[TAM][TAM];
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            soma[i][j] = A[i][j] + B[i][j];

    imprimirMatriz(soma, 'S');
}

void subtrairMatrizes() {
    if (!matrizesCriadas) {
        printf("As matrizes ainda nao foram criadas.\n");
        return;
    }
    int sub[TAM][TAM];
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            sub[i][j] = B[i][j] - A[i][j];

    imprimirMatriz(sub, 'D');
}

void multiplicarPorConstante() {
    if (!matrizesCriadas) {
        printf("As matrizes ainda não foram criadas.\n");
        return;
    }
    int C[TAM][TAM];
    int constante;
    printf("Digite a constante para multiplicar a matriz A: ");
    scanf("%d", &constante);

    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            C[i][j] = A[i][j] * constante;

    imprimirMatriz(C, 'M');
}

int main() {
    int opcao;
    do {
        printf("\nMenu de Opcoes:\n");
        printf("(0) Criar duas matrizes 10x10 com valores inteiros\n");
        printf("(1) Imprimir as matrizes originais\n");
        printf("(2) Somar as duas matrizes e imprimir o resultado\n");
        printf("(3) Subtrair a primeira matriz da segunda e imprimir o resultado\n");
        printf("(4) Multiplicar uma constante a primeira matriz e imprimir o resultado\n");
        printf("(5) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0: criarMatrizes(); break;
            case 1: imprimirMatrizes(); break;
            case 2: somarMatrizes(); break;
            case 3: subtrairMatrizes(); break;
            case 4: multiplicarPorConstante(); break;
            case 5: printf("Encerrando o programa.\n"); break;
            default: printf("Opcao invalida. Tente novamente.\n");
        }
    } while(opcao != 5);

    return 0;
}
