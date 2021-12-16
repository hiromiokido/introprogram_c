#include <stdio.h>

/*/
Entrega Programada 2 - E
Descricao: Conversoes de Temperaturas

Implemente o programa que leia um valor real referente a uma temperatura em graus Celsius e
converta essa medida para as escalas Kelvin e Fahrenheit.

T(F) = T(C)*9/5 + 32
T(K) = T(C) + 273.15
/*/


int main(){

    //declarando as variaveis reais
    float celsius, fahrenheit, kelvin;

    printf("\n  Entrega Programada 2 - E\n\n  Descricao: Conversoes de Temperaturas\n\n");

    //valor de entrada em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    //processamento: convertendo para Fahrenheit e Kelvin
    fahrenheit = (celsius*(9./5.)) + 32.;
    kelvin = celsius + 273.15;

    //valores de saida
    printf(
           "\n Celsius       Fahrenheit      Kelvin\n\n"
           "%f      %f       %f                    \n\n", celsius, fahrenheit, kelvin
           );

    return 0;

}
