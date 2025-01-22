#include<stdio.h>

/*
Entrada e saida de dados

As mais usadas são:

*** printf - Saida de dados ***
*** scanf - Entrada de dados ***

Outras funções para entrada: 
gets
fgets
getc
getch

Outras funcoes para saida:
putc
puts
fputs
putchar
____________________________________


 */


int main(){

    char nome[20];
    int idade;
    int resultado;

    printf("Qual seu nome?\n");
    scanf("%s",&nome);    

    printf("Qual sua idade?\n");
    scanf("%d",&idade);       

    printf("Seu nome é %s e sua idade é %d?\n",nome, idade);
    printf("Digite 1 para sim e 2 para não:\n");
    scanf(" %c",&resultado);
    
    if (resultado <= 1 )
    {
        printf("Obrigado %s!\n", nome);        
    }
    else
    {
        printf("Desculpe!\n");        
    }     
    return 0;
}