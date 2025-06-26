#include <stdio.h>

int main()
{
    FILE *arquivo1, *arquivo2;
    char string [200];
    int numero = 1;

    arquivo1 = fopen("teste1.txt", "r");
    if (arquivo1 == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    arquivo2 = fopen("teste1_.txt", "w");
    if (arquivo2 == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        fclose(arquivo2);
        return 1;
    }
    while (fgets(string, string, arquivo1) != NULL)
    {
        fprintf(arquivo2, "%d. %s", numero++, string);
    }
    fclose(arquivo1);
    fclose(arquivo2);

    printf("Arquivo com numeração das linhas foi gerado com sucesso!\n");
    return 0;
}
