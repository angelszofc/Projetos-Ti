#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

 int main() {
    /*Declaração de Variaveis*/
    char cod_carta[3],cod_carta2[3];
    char estado[20], estado2[20];    
    char nome_cidade[20], nome_cidade2[20];
    int populacao, num_ponto_tur, populacao2, num_ponto_tur2;
    float aream2, pib, aream2_2, pib2;
    
    printf("Digite o codigo da Primeira carta:\n");
    scanf("%s", &cod_carta); 
    printf("Digite a Sigla do Estado: (Exemplo: MG) \n");
    scanf("%s", &estado);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nome_cidade);
    printf("Digite o numero da Populacao dessa cidade:\n");
    scanf("%d", &populacao);
    printf("Digite o numero de Pontos turisticos dessa cidade:\n");
    scanf("%d", &num_ponto_tur);
    printf("Digite a area em Metros quadrados dessa cidade:\n");
    scanf("%f", &aream2);
    printf("Digite o PIB dessa cidade:\n");
    scanf("%f", &pib); 

    printf("Digite o codigo da Segunda carta:\n");
    scanf("%s", &cod_carta2); 
    printf("Digite a Sigla do Estado: (Exemplo: MG) \n");
    scanf("%s", &estado2);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", &nome_cidade2);
    printf("Digite o numero da Populacao dessa cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite o numero de Pontos turisticos dessa cidade:\n");
    scanf("%d", &num_ponto_tur2);
    printf("Digite a area em Metros quadrados dessa cidade:\n");
    scanf("%f", &aream2_2);
    printf("Digite o PIB dessa cidade:\n");
    scanf("%f", &pib2); 
                                   
    printf("\n---------------------------------");
    printf("\nDados da Primeira carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta);
    printf("Estado: %s\n",estado);
    printf("Cidade: %s\n",nome_cidade);
    printf("Numero da Populacao: %d\n",populacao);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur);
    printf("Area em M2: %f\n",aream2);
    printf("PIB: %f\n\n",pib); 
    printf("\n---------------------------------");
    printf("\nDados da Segunda carta:\n");
    printf("Codigo da Carta: %s\n",cod_carta2);
    printf("Estado: %s\n",estado2);
    printf("Cidade: %s\n",nome_cidade2);
    printf("Numero da Populacao: %d\n",populacao2);
    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur2);
    printf("Area em M2: %f\n",aream2_2);
    printf("PIB: %f\n\n",pib2); 
   
   
    getch();
                  

}
