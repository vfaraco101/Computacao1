#include <stdio.h>
#include <string.h>

#define empresas_maximas 6

void inverterString(char str[])
{
    int inicio = 0;
    int fim = strlen(str) - 1;
    while (inicio < fim)
    {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}
int main()
{
    char empresas[6][100];
    char empresaslido[6][100];
    FILE *arquivo;

    printf("Digite os nomes de 6 empresas:\n");
    for (int i = 0; i < empresas_maximas; i++)
    {
        printf("Empresa %d: ", i + 1);
        fgets(empresas[i], empresas[i], stdin);
        empresas[i][strcspn(empresas[i], "\n")] = '\0';
    }
    arquivo = fopen("empresas.txt", "w");
    for (int i = 0; i < empresas_maximas; i++)
    {
        fprintf(arquivo, "%s\n", empresas[i]);
    }
    fclose(arquivo);
    arquivo = fopen("empresas.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo empresas.txt\n");
        return 1;
    }
    for (int i = 0; i < empresas_maximas; i++)
    {
        fgets(empresaslido[i], sizeof(empresaslido[i]), arquivo);
        empresaslido[i][strcspn(empresaslido[i], "\n")] = '\0';
    }
    fclose(arquivo);
    printf("\nNomes das empresas:\n");
    for (int i = 0; i < empresas_maximas; i++)
    {
        printf("%s\n", empresas[i]);
    }
    arquivo = fopen("nomes_invertidos.txt", "w");
    for (int i = 0; i < empresas_maximas; i++)
    {
        inverterString(empresaslido[i]);
        fprintf(arquivo, "%s\n", empresaslido[i]);
    }
    fclose(arquivo);

    printf("\nNomes das empresas invertido:\n");
    arquivo = fopen("nomes_invertidos.txt", "r");
    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo nomes_invertidos.txt\n");
        return 1;
    }
    char linha[100];
    while (fgets(linha, sizeof(linha), arquivo))
    {
        printf("%s", linha);
    }
    fclose(arquivo);

    printf("\n\nNomes invertidos foram gravados no arquivo nomes_invertidos.txt\n");

    return 0;
}
