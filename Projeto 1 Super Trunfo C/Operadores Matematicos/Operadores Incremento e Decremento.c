#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    Incremento (++)
    Pre-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pre-Decremento --a
    Pos-Decremento a--
    */
    
    int n1 = 1, result;

    printf("Antes incremento: %d\n", n1);

    n1++;
    printf("Apos incremento: %d\n", n1);

    result = n1++;
    printf("Apos o Pos-Incremento: %d - Resultado: %d \n", n1, result);

    result = ++n1;
    printf("Apos o Pre-Incremento: %d - Resultado: %d \n", n1, result);
    
    result = n1--;
    printf("Apos o Pos-Decremento: %d - Resultado: %d \n", n1, result);

    result = --n1;
    printf("Apos o Pre-Decremento: %d - Resultado: %d \n", n1, result);
    
    n1--;
    printf("Apos decremento: %d\n", n1);
}