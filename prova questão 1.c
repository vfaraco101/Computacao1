#include<stdio.h>
#define porta 0.8
    int main(){
        float altura, base, perimetro, rodape, area;
        printf("digite a base do quarto: ");
        scanf("%f", &base);
        printf("digite a altura do quarto: ");
        scanf("%f", &altura);
        perimetro = altura * 2 + base * 2;
        rodape = perimetro - porta;
        area = altura * base;


        printf("\nperimetro total: %.1f \nquantidade de rodape %.1f \nArea do quarto %.1f", perimetro, rodape, area);
    }
