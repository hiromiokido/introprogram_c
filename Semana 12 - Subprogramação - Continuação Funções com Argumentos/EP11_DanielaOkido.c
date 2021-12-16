#include <stdio.h>

/*/
Entrega Programada 11 - B
Descricao: Acha Primos

Escreva um programa em C que acha todos os numeros primos ate 1000. Numero primo eh aquele que eh divisível somente por 1 e por ele mesmo.
Para verificar se um numero eh primo, devera ser criada um funcao que receba um numero inteiro e retorne 0 se nao for primo ou 1 se for primo. A
funcao principal (main) tera um laco gerando os numeros inteiros de 2 até 1000, enviando os numeros para funcao. Se a funcao retornar que o
numero eh primo, entao imprima esse numero na tela no main.

Atencao: o programa devera obrigatoriamente usar funcoes
/*/


//Para verificar se um numero eh primo vamos fazer uma funcao que recebe um numero inteiro e retorna 0 se nao for primo ou 1 se for primo;
//Numero primo eh aquele que eh divisível somente por 1 e por ele mesmo;
//Sabemos que nenhum numero par eh primo, entao podemos 'cortar' eles primeiro!
//Em seguida testamos os numeros impares;
int primo(int numero) {

    int flag = 0, n;

    if (numero != 2 && numero % 2 == 0){
        flag = 0;
    } else {
        //Vamos trabalhar em cima dessa flag agora, sob a ideia de que "eh primo ate provarmos o contrario";
        flag = 1;
    }

    n = 3;
    while (n <= numero/2){
        if (numero % n == 0){
            flag = 0;
        }
        n = n + 2;
    }

    if (flag == 1 || flag == 0){
        //printf(" %3d ", numero); //teste
        //printf(" %3d ", flag);   //teste
        return flag;
    }

}

//O programa deve achar todos os numeros primos ate 1000 - numero primo eh aquele que eh divisível somente por 1 e por ele mesmo;
//A funcao principal (main) tera um laco gerando os numeros inteiros de 2 até 1000, enviando os numeros para funcao;
//Se a funcao retornar que o numero eh primo, o programa imprime o numero na tela;
int main(){

    printf("\n\n   Entrega Programada 11 - B\n\n   Descricao: Acha Primos\n\n\n");
    printf("  Veja abaixo todos os numeros primos (encontrados pelo programa) ate o numero 1000.\n\n");

    int i, flag;
    for (i = 2; i <= 1000; i++){
        flag = primo(i);
        if (flag == 1){
            printf(" %3d ", i);
        }
    }
    printf("\n\n");

    return 0;

}
