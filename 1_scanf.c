#include<stdio.h>
int main(){

    float peso, alt, taxa;
    int idade,codigo;

    printf("Dgite o codigo:\n");
    scanf("%d", &codigo);

    printf("Digite a idade, o peso e a altura:\n");
    scanf("%d %f %f",&idade, &peso, &alt);

    printf("Digite a taxa:\n");
    scanf("%f", &taxa);

    printf("Codigo: %d \n");
    printf("Idade:%d \nPeso:%f \nAltura:%f\n", idade, peso, alt);
    printf("Taxa: %f", taxa);

    return 0;
}
