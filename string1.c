#include <stdio.h>
#define tamanho 100
int main ()
{
    char nomes[3][tamanho];
    char nomedigitado[tamanho];
    int encontrado = 0;
    int i, j;

    printf("Digite 3 nomes:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d: ", i + 1);
        fgets(nomes[i], tamanho, stdin);
    }
    while (1)
    {
        printf("Digite um nome para verificar:\n");
        fgets(nomedigitado, tamanho, stdin);
        for (j = 0; j < 3; j++)
        {
            if (strcmp(nomedigitado, nomes[j]) == 0)
            {
                printf("nome encontrado na lista.");
                encontrado = 1;
                break;
            }
        }
        if (encontrado)
        {
            break;
        }
        else
        {
            printf("este nome nao esta na lista\n");
        }
    }

    return 0;
}
