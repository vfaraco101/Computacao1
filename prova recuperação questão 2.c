#include<stdio.h>

int main()
{
    int base, inicial, fim, i, mult, div, ini, soma;

    printf("digite o numero base: ");
    scanf("%d", &base);
    printf("digite o valor inicial do intervalo: ");
    scanf("%d", &inicial);
    printf("digite o valor final do intervalo: ");
    scanf("%d", &fim);

    for (int i = inicial; i <= fim; i++){
            if (i % base == 0) {
                    soma += i;
            }
    }

    printf("A soma dos multiplos de %d no intervalo eh: %d", base, soma);
}
