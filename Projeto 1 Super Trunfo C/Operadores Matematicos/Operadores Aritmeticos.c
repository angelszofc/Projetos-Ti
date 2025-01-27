#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão(/)
    */

   int n1, n2;
   int soma, sub, mult, div;

   printf("Entre com o numero 1:\n");
   scanf("%d", &n1);
   printf("Entre com o numero 2:\n");
   scanf("%d", &n2);

   soma = n1 + n2;//operação soma

   sub = n1 - n2;//operação subtração

   mult = n1 * n2;//operação multiplicação

   div = n1 / n2;//operação divisão
   
   printf("A soma e: %d\n", soma);

   printf("A subtracao e: %d\n", sub);

   printf("A multiplicacao e: %d\n", mult);

   printf("A divisao e: %d\n", div);

}