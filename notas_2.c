#include<stdio.h>
int main()
{
    float n1, n2, n3, media;
    int frequencia, ad;

    printf("Digite a nota 1, 2 e 3:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3;

    printf("Digite a frequencia:\n");
    scanf("%d", &frequencia);

    if (media >=8 && frequencia >= 75)
    {
        printf("O estudante foi aprovado com distincao pois teve media %.1f e frequencia %d%%\n", media, frequencia);
    }
    else if (media >=6 && media <=8 && frequencia >= 75)
    {
        printf("O estudante foi aprovado direto pois teve media %.1f e frequencia %d%%\n", media, frequencia);
    }
    else if (media >=4 && media <=6 && frequencia >= 75)
    {
        printf("O estudante vai para final pois teve media %.1f e frequencia %d%%\n", media, frequencia);
    }
    else
    {
        printf("O estudante foi reprovado direto pois teve media %.1f e frequencia %d%%\n", media, frequencia);
    }
    return 0;
}
