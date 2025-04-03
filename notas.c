#include<stdio.h>
int main(){
float n1, n2, n3, media;

printf("Digote as tres notas: ");
scanf("%f %f %f", &n1, &n2, &n3);
media = (n1 + n2 + n3) / 3;

if (media >=8)
    printf("Aprovado com Distincao.");
else if (media >=6)
    printf("Aprovado Direto.");
else if (media >=4)
    printf("Vai para Final.");
else
    printf("Reprovado Direto.");
return 0;
}
