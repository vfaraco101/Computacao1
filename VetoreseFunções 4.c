#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherVetor(int v[], int n, int lim)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        v[i] = rand() %(lim + 1);
    }
}

int main()
{
    int vetor[10];
    int limite = 50;

    preencherVetor(vetor, 10, limite);

    printf("Vetor preenchido: ");
    for (int i = 0; i <10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
