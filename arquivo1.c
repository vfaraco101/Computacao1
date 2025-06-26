#include <stdio.h>

int main()
{
    FILE* arquivo;
    char string [100];
    arquivo = fopen("teste1.txt", "r");
    while (fgets(string, 100, arquivo)!= NULL)
    {
        printf("%s", string);
    }
    fclose(arquivo);
    return (0);
}
