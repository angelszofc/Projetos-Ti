#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

 int main() {
    /*Declaração de Variaveis*/
    char *cod_carta[3][4] = {};
    char *estado[2][4] = {};    
    char *nome_cidade[20][4] = {};
    int populacao[4] = {}, num_ponto_tur[4] = {}, menu;
    float aream2[4] = {}, pib[4] = {};
    int result = 0;

    int i;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    /*Criando Funções para Menu*/
    while (menu != 4)
    {
        printf("Bem vindo ao Super Trunfo!\n");
        printf("----------MENU PRINCIPAL---------\n");
        printf("Escolha uma opcao abaixo:\n");
        printf("1 - Cadastrar Cartas\n");
        printf("2 - Consultar Cartas\n");
        printf("3 - Opcoes\n");
        printf("4 - Sair\n");
        printf("---------------------------------\n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            //Rotina de Cadastro
            /*Confirmando que ja teve cadastro de cartas*/ 
            result = 1;  
            i = 1;         
            /*Entrada de dados da PRIMEIRA carta*/
            if (i == 1)
            {
                int ii  = 1;
                printf("Digite o codigo da primeira carta:\n");
                scanf(" %s", &cod_carta[1]);
                printf("Digite a Sigla do Estado: (Exemplo: MG) \n");
                scanf(" %s", &estado[1]);
                printf("Digite o nome da cidade:\n");
                scanf(" %s", &nome_cidade[1]);
                printf("Digite o numero da populacao dessa cidade:\n");
                scanf("%d", &populacao[1]);
                printf("Digite o numero de pontos turisticos dessa cidade:\n");
                scanf("%d", &num_ponto_tur[1]);
                printf("Digite a area em metros quadrados dessa cidade:\n");
                scanf("%f", &aream2[1]);
                printf("Digite o PIB dessa cidade:\n");
                scanf("%f", &pib[1]);
                /*Imprimindo dados da PRIMEIRA carta*/
                printf("Dados da Primeira carta:\n");
                printf("Codigo da Carta: %s\n",cod_carta[1]);
                printf("Estado: %s\n",estado[1]);
                printf("Cidade: %s\n",nome_cidade[1]);
                printf("Numero da Populacao: %d\n",populacao[1]);
                printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[1]);
                printf("Area em M2: %f\n",aream2[1]);
                printf("PIB: %f\n\n",pib[1]);

                while (i != 2 && ii != 4)
                {
                    printf("Deseja Cadastrar mais uma carta?\n 1-Sim\n 2-Nao\n");
                    scanf("%d", &i);

                    switch (i)
                    {
                    case 1:
                    ii = ii + 1;
                        /*Entrada de dados da SEGUNDA carta*/
                        printf("Digite o codigo da carta:\n");
                        scanf(" %s", &*cod_carta[ii]);
                        printf("Digite a Sigla do Estado: (Exemplo: MG)\n");
                        scanf(" %s", &*estado[ii]);
                        printf("Digite o nome da cidade:\n");
                        scanf(" %s", &*nome_cidade[ii]);
                        printf("Digite o numero da populacao dessa cidade:\n");
                        scanf("%d", &populacao[ii]);
                        printf("Digite o numero de pontos turisticos dessa cidade:\n");
                        scanf("%d", &num_ponto_tur[ii]);
                        printf("Digite a area em metros quadrados dessa cidade:\n");
                        scanf("%f", &aream2[ii]);
                        printf("Digite o PIB dessa cidade:\n");
                        scanf("%f", &pib[ii]);
                        /*Imprimindo dados da SEGUNDA carta*/
                        printf("Dados da Segunda carta:\n");
                        printf("Codigo da Carta: %s\n",cod_carta[ii]);
                        printf("Estado: %s\n",estado[ii]);
                        printf("Cidade: %s\n",nome_cidade[ii]);
                        printf("Numero da Populacao: %d\n",populacao[ii]);
                        printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[ii]);
                        printf("Area em M2: %f\n",aream2[ii]);
                        printf("PIB: %f\n\n",pib[ii]);

                        if (ii == 4)
                        {
                            printf("Cadastro Finalizado!\n");
                            printf("Pressione Enter para continuar!\n");
                            getch();
                            
                            continue;
                        }
                        
                        break;

                        case 2:
                            printf("Cadastro Finalizado!\n");
                            printf("Pressione Enter para continuar!\n");
                            getch();
                            break;

                    
                    default:
                        printf("Opção Invalida!\n");
                        printf("Pressione Enter para continuar!\n");
                        getch();
                        break;
                    }                        

                }
            }
            else if (i == 2)
            {
                printf("Cadastro Finalizado!\n");
                printf("Pressione Enter para continuar!\n");
                getch();
            }
            else
                printf("Opção Invalida!\n");
                printf("Pressione Enter para continuar!\n");
                getch();
            break;

        case 2:
            //Rotina de Consultas
            i = 0;//declarando variavel para consultar as cartas 
            if (result == 1)
            {                  
                printf("Qual a carta deseja consultar?\n");
                scanf("%d", &i);

                switch (i)
                {
                case 1:
                    printf("Dados da Primeira carta:\n");
                    printf("Codigo da Carta: %s\n",cod_carta[i]);
                    printf("Estado: %s\n",estado[i]);
                    printf("Cidade: %s\n",nome_cidade[i]);
                    printf("Numero da Populacao: %d\n",populacao[i]);
                    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[i]);
                    printf("Area em M2: %f\n",aream2[i]);
                    printf("PIB: %f\n\n",pib[i]);
                    break;
                case 2:
                    printf("Dados da Segunda carta:\n");
                    printf("Codigo da Carta: %s\n",cod_carta[i]);
                    printf("Estado: %s\n",estado[i]);
                    printf("Cidade: %s\n",nome_cidade[i]);
                    printf("Numero da Populacao: %d\n",populacao[i]);
                    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[i]);
                    printf("Area em M2: %f\n",aream2[i]);
                    printf("PIB: %f\n\n",pib[i]);
                    break;
                case 3:
                    printf("Dados da Terceira carta:\n");
                    printf("Codigo da Carta: %s\n",cod_carta[i]);
                    printf("Estado: %s\n",estado[i]);
                    printf("Cidade: %s\n",nome_cidade[i]);
                    printf("Numero da Populacao: %d\n",populacao[i]);
                    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[i]);
                    printf("Area em M2: %f\n",aream2[i]);
                    printf("PIB: %f\n\n",pib[i]); 
                    break;
                case 4:
                    printf("Dados da Quarta carta:\n");
                    printf("Codigo da Carta: %s\n",cod_carta[i]);
                    printf("Estado: %s\n",estado[i]);
                    printf("Cidade: %s\n",nome_cidade[i]);
                    printf("Numero da Populacao: %d\n",populacao[i]);
                    printf("Numero de Pontos Turisticos: %d\n",num_ponto_tur[i]);
                    printf("Area em M2: %f\n",aream2[i]);
                    printf("PIB: %f\n\n",pib[i]);
                    printf("Pressione Enter para continuar!\n");
                    getch();
                    break;
                default:
                    if (i>4)
                    {
                        printf("Esta carta nao existe. \n");
                        printf("Pressione Enter para continuar!\n");
                        getch();
                        continue;
                    }      
                    break;
                }       

                break;
            }
            else
            {                
                result = 0;
                printf("Voce ainda nao cadastrou nenhuma carta!\n");
                printf("Pressione Enter para continuar!\n");
                getch();
                continue;            
            }

            case 3:
                //Rotina de testes
                printf("TESTE\n\n");
                printf("Codigos das cartas:  %s, %s, %s, %s\n",cod_carta[1], cod_carta[2],cod_carta[3],cod_carta[4]);
                printf("Estados:  %s, %s, %s, %s\n",estado[1],estado[2],estado[3],estado[4]);
                printf("Nome da Cidade:  %s, %s, %s, %s\n",nome_cidade[1],nome_cidade[2],nome_cidade[3],nome_cidade[4]);
                printf("Populacao: %d, %d, %d, %d\n",populacao[1],populacao[2],populacao[3],populacao[4]);
                printf("Numero Pontos Turisticos: %d, %d, %d, %d\n",num_ponto_tur[1],num_ponto_tur[2],num_ponto_tur[3],num_ponto_tur[4]);
                printf("Area: %f, %f, %f, %f\n",aream2[1],aream2[2],aream2[3],aream2[4]);
                printf("PIB: %f, %f, %f, %f\n\n",pib[1],pib[2],pib[3],pib[4]);  
                printf("Pressione Enter para continuar!\n");
                getch();
                break;                

        default:
            if (menu <= 4)
            {
                continue;
            }

            printf("Opção Invalida!");

            break;
        }       
        
        
    }    

    if( menu == 4)
    printf("\n\n Ate mais!");
    getch();   
  

    return 0;
}
