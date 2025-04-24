#include<stdio.h>
int main()
{
    int forca, nivel;
    float mult, dano;

    printf("digite a forca, nivel e multiplicaodr: ");
    scanf("%d %d %f", &forca, &nivel, &mult);
    dano = forca * nivel * mult;

    if (dano >= 5000)
    {
        printf("Dano criico massivo!");
    }
    else if (dano >= 1000 && dano<= 5000)
    {
        printf("dano critico!");
    }
    else
    {
        printf("dano normal");
    }
    return 0;
}
