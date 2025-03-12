#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


void Chama_Menu(void){

    printf("Bem vindo ao Super Trunfo!\n");
    printf("----------MENU PRINCIPAL---------\n");
    printf("Escolha uma opcao abaixo:\n");
    printf("1 - Cadastrar Cartas\n");
    printf("2 - Consultar Cartas\n");
    printf("3 - Opcoes\n");
    printf("4 - Sair\n");
    printf("---------------------------------\n");

    return;
}

int Confirma_Cadastro(int valor){
//Função para Confirmar cadastro e verificar se ja foram cadastrados as 4 cartas
    int confirma;

    confirma;

    if (valor == 4)
    {
        valor = 4;        
        return(valor);
    }
    else
    {
        confirma = confirma + 1;
        return(confirma);
    }

}

void Consulta(int i, char *v1[3][4], char *v2[20][4], char *v3[20][4], int v4[4], int v5[4], float v6[4], float v7[4]){
    
    char *carta;

    if (i == 1)
    {
        carta = "Primeira";
    }
    else if (i == 2)
    {
        carta = "Segunda";
    }
    else if (i == 3)
    {
        carta = "Terceira";
    }
    else if (i == 4)
    {
        carta = "Quarta";
    }
    
    if (i == 5)
    {
        i = 0;
        while(i != 5)
        {
            i++;

            if (i == 1)
            {
                carta = "Primeira";
            }
            else if (i == 2)
            {
                carta = "Segunda";
            }
            else if (i == 3)
            {
                carta = "Terceira";
            }
            else if (i == 4)
            {
                carta = "Quarta";
            }

            printf("Dados da %s carta:\n", carta);
            printf("Codigo da Carta: %s\n",v1[i]);
            printf("Estado: %s\n",v2[i]);
            printf("Cidade: %s\n",v3[i]);
            printf("Numero da Populacao: %d\n",v4[i]);
            printf("Numero de Pontos Turisticos: %d\n",v5[i]);
            printf("Area em M2: %f\n",v6[i]);
            printf("PIB: %f\n\n",v7[i]); 
        }        
        
    }
    else
    {
        printf("Dados da %s carta:\n", carta);
        printf("Codigo da Carta: %s\n",v1[i]);
        printf("Estado: %s\n",v2[i]);
        printf("Cidade: %s\n",v3[i]);
        printf("Numero da Populacao: %d\n",v4[i]);
        printf("Numero de Pontos Turisticos: %d\n",v5[i]);
        printf("Area em M2: %f\n",v6[i]);
        printf("PIB: %f\n\n",v7[i]);
    }

    return;
}

void Cadastro(int i, char *v1[3][4], char *v2[20][4], char *v3[20][4], int v4[4], int v5[4], float v6[4], float v7[4]){
    
    char *carta;

    if (i == 1)
    {
        carta = "Primeira";
    }
    else if (i == 2)
    {
        carta = "Segunda";
    }
    else if (i == 3)
    {
        carta = "Terceira";
    }
    else if (i == 4)
    {
        carta = "Quarta";
    }

    printf("Digite o codigo da %s carta:\n", carta);
    scanf(" %s", &v1[i]);

}

int Valida_Entrada(int valida){

    int validador;
    if (valida == 1)
    {
        validador == 1;
        return(validador);
    }
    else
    {
        validador = 2;
        return(validador);
    }    

}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

 int main() {
    /*Declaração de Variaveis*/
    char *cod_carta[3][4] = {};
    char *estado[20][4] = {};    
    char *nome_cidade[20][4] = {};
    int populacao[4] = {}, num_ponto_tur[4] = {}, menu;
    float aream2[4] = {}, pib[4] = {};
    int result = 0;

    int i, ii, valor = 0;
    int validador;
    // Cadastro das Cartas:
    /*Criando Funções para Menu*/
    while (menu != 4)
    {        
        Chama_Menu();
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            //Rotina de Cadastro                        
            i = 1;            
                       
            if (ii != 4)
            {        
                if (result < 1)
                {
                    /*Confirmando que ja teve cadastro de cartas*/ 
                    result = Confirma_Cadastro(valor); 
                    /*Entrada de dados da PRIMEIRA carta*/
                    ii  = 1;            
                    Cadastro(ii, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);            
                    /*Imprimindo dados da PRIMEIRA carta*/
                    Consulta(i, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                    valor = 2;                                   
                }                          
                
                while (i != 2 && ii != 4)
                {    
                    
                    printf("Deseja Cadastrar mais uma carta?\n 1-Sim\n 2-Nao\n");
                    scanf("%d", &i);
                    
                    switch (i)
                    {
                    case 1:

                    if (ii == 1)
                    {
                        ii = 2;
                    }
                    else if (ii == 2)
                    {
                        ii = 3;
                    }
                    else if (ii == 3)
                    {
                        ii = 4;
                    }

                    valor = ii;
                        /*Entrada de dados da cartas*/
                        Cadastro(ii, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);            
                        /*Imprimindo dados da cartas*/
                        Consulta(ii, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                        Confirma_Cadastro(valor);
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
            else
            {
                printf("Você ja cadastrou o maximo de cartas!\n"); 
                printf("Pressione Enter para continuar!\n");
                getch();
                result = Confirma_Cadastro(valor);
            }
            break;

        case 2:
            //Rotina de Consultas
            result = Confirma_Cadastro(valor);
            i = 0;//declarando valor a variavel para consultar as cartas 
            char s[20];//Declarando variavel para verificação se o usuario digitou um valor correto
            if (result >= 1)
            { 
                
                while (i == 0)
                {
                    printf("Qual a carta deseja consultar?\nDigite 5 para imprimir todas as cartas! \n");
                    scanf("%s", &s);
                    i = atoi(s);//Função para validar se a variavel é um numero

                    if (i==0)
                    {
                        printf("Valor Invalido! Tente novamente...\n\n");
                    }
                    
                }          

                switch (i)
                {
                case 1:
                    Consulta(i, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                case 2:
                   Consulta(i, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                    break;
                case 3:
                    Consulta(i, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                    break;
                case 4:
                    Consulta(i, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                    getch();
                    break;
                case 5:
                    Consulta(i, cod_carta, estado, nome_cidade, populacao, num_ponto_tur, aream2, pib);
                    break;
                default:
                    if (i > 5)
                    {
                        printf("Esta carta nao existe. \n");
                        printf("Pressione Enter para continuar!\n");
                        getch();
                        continue;
                    }
                    else
                    {
                        printf("Valor Invalido. \n");
                        printf("Pressione Enter para continuar!\n");
                        getch();
                        continue;
                    }      
                    break;
                }                  
            }
            else
            {                
                result = 0;
                printf("Voce ainda nao cadastrou nenhuma carta!\n");
                printf("Pressione Enter para continuar!\n");
                getch();
                continue;            
            }
                break;

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

            printf("Opção Invalida!\n");

            break;
        }       
        
        
    }    

    if( menu == 4)
    printf("Ate mais!\n");
    getch();   
  

    return 0;
}
