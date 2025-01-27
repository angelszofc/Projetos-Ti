#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com Subtração (-=)
    Atribuição com Multiplicação (*=)
    Atribuição com Divisão (/=)
    */

    int n1 = 10, n2, result;

    result = 10;
    printf("Resultado: %d\n", result);

    //Resultado = resultado + 20
    result += 20;
    printf("Resultado: %d\n", result);

    //Resultado = resultado - numero 1
    result -= n1;
    printf("Resultado: %d\n", result);

    //Resultado = resultado * 5
    result *= 5;
    printf("Resultado: %d\n", result);
    
    //Resultado = resultado - numero 1
    result /= 2;
    printf("Resultado: %d\n", result);



}