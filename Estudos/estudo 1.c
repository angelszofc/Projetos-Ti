#include<stdio.h>


int main(){

    int a = 10;
    int b = 3;
    float c = 3.5;
    float resultado = (float) a / b; // Fazendo casting para converter variaveis de forma explicita
    float resultado2 = a + c; // Convertendo variavel de forma implicita a variavel a para float

    printf("Quociente: %.2f\n", resultado);
    printf("Quociente 2: %.2f\n", resultado2);
  
    return 0;
}