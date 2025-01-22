#include<stdio.h>

int main(){

    char nome[20];
    int idade, matricula;
    float altura;

    printf("Digite seu nome:\n");
    scanf("%s",&nome);    

    printf("Digite sua idade:\n");
    scanf("%d",&idade);

     printf("Digite sua altura:\n");
    scanf("%f",&altura);    

     printf("Digite sua matricula:\n");
    scanf("%d",&matricula);     

    printf("Seu nome é %s, voce tem %f de altura e sua idade é %d.\nSua matricula é %d.\n",nome, altura, idade, matricula);
    
    return 0;
    
}