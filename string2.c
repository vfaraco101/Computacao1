#include <stdio.h>
#include <ctype.h>

#define tamanho 50
#define L 3
#define C 3

int vogal(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int consoante(char c)
{
    c = tolower(c);
    return (isalpha(c) && !vogal(c));
}
void inverter(char *str)
{
    int comprimento = strlen(str);
    int comeco = 0;
    int fim = comprimento - 1;
    char temp;

    while (comeco < fim)
    {
        temp = str[comeco];
        str[comeco] = str[fim];
        str[fim] = temp;
        comeco++;
        fim--;
    }
}
void mostramatriz(char matriz[L][C][tamanho], const char *titulo)
{
    printf("\n%s:\n", titulo);
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%-12s", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    char matrizO[L][C][tamanho];
    char matrizM[L][C][tamanho];

    printf("Matriz\n");
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Digite a string da posicao [%d][%d]: ", i, j);
            scanf("%49s", matrizO[i][j]);
            strcpy(matrizM[i][j], matrizO[i][j]);
        }
    }
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            int len = strlen(matrizM[i][j]);

            if (len > 0)
            {
                char primeiro = matrizM[i][j][0];
                char ultimo = matrizM[i][j][len - 1];

                if (vogal(primeiro) && consoante(ultimo))
                {
                    inverter(matrizM[i][j]);
                }
            }
        }
    }
    mostramatriz(matrizO, "Matriz Original");
    mostramatriz(matrizM, "Matriz Modificada");

    return 0;
}
