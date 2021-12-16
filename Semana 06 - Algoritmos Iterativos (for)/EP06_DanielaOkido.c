#include <stdio.h>

/*/
Entrega Programada 6 - A
Descricao: Numeros Primos

Faca um programa que leia um numero inteiro N maior ou igual a 1, o programa devera pedir um novo numero caso o usuario digite
um numero menor ou igual a zero. Verificar se N eh primo e escrever uma mensagem na tela se ele eh ou nao primo.

Dicas:
- Numero primo eh um inteiro, cujos divisores sao somente 1 e ele proprio;
- Usamos o do...while() ou while() para validar o numero N lido ate que o valor digitado seja valido;
- Para verificar se o numero eh primo podemos usar o laço for();

Atencao: Nesse exercicio deve-se usar laços de repeticao.
/*/


int main(){

    printf("\n\n   Entrega Programada 6 - A\n\n   Descricao: Numeros Primos\n\n");
    printf("  Este programa le um numero inteiro N maior ou igual a 1,\n  verificando se ele eh ou nao um numero primo.\n\n\n");

    //Declarando as variaveis;
    int i, primo, numero_inteiro;
    float numero;

    //Definindo a variavel sinalizadora;
    primo = 0;

    //Vamos usar o do...while() para validar o numero inserido;
    do{
        printf("  Insira um numero inteiro: ");
        scanf("%f", &numero);

        //Primeiramente queremos que ele seja inteiro E maior ou igual a 1;
        if (numero == (int)numero && numero >= 1){
            //Print para provar que eh inteiro e >= 1;
            printf("  O numero inserido eh valido!\n\n");
        } else {
            //Caso o numero inserido nao seja inteiro e >= 1, faremos com que o usuario tenha que inserir outro valor;
            printf("  O numero inserido nao eh valido, pois deve ser inteiro, maior ou igual a 1. Tente novamente.\n\n");
        }
    //Do...while() ira continuar repetindo se o usuario nao inserior um numero valido (inteiro e >= 1);
    } while (numero < 1 || numero != (int)numero);

    /*/
    Agora que sabemos que o numero esta dentro das condicoes exigidas, podemos sair do loop (repeticao).
    Para verificar se o numero eh primo, usaremos o laco 'for' atraves de uma variavel sinalizadora.
    Usamos float anteriormente pois consideramos que o usuario poderia digitar numeros com virgula.
    Agora, para conseguirmos calcular o resto da divisao, iremos considerar o numero inserido como um inteiro.
    /*/

    numero_inteiro = numero;

    //Se o numero inserido for 1, por mais que ele seja permitido pelo programa, ele nao eh primo;
    //Portanto inserimos a flag caso o usuario digite este numero;
    if (numero_inteiro == 1){
        primo = 1;
    }

    //Para os demais valores, a analise deve ser feita atraves do laco;
    for(i = 2; i < numero_inteiro; i++){
        if (numero_inteiro % i == 0){
                primo = 1;
        }
    }

    //Analise e resultado final: na saida sera indicado se o numero eh ou nao um numero primo.
    if (primo == 0){
        printf("  -- RESULTADO --\n  O numero %d EH um numero primo!\n\n", numero_inteiro);
    } else {
        printf("  -- RESULTADO --\n  O numero %d NAO EH um numero primo.\n\n", numero_inteiro);
    }

    return 0;

}
