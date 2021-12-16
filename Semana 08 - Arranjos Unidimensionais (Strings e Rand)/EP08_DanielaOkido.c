#include <stdio.h>
#include <string.h>
#define MAXIMO 100

/*/
Entrega Programada 8 - F
Descricao: Palindromo

Escreva um programa que le uma string informada pelo usuario com ate 100 caracteres. O programa deve informar se a string digitada
pelo usuario eh ou nao um palindromo e imprimi-la na tela.

Dica:
- Um palindromo eh uma palavra ou frase que, quando lida de tras pra frente, resulta na mesma palavra (exemplo: “ovo” e “arara”).
- Pode assumir que o usuario vai digitar apenas caracteres minusculos (nada de espacos, caracteres especiais, etc.)
/*/


int main(){

    printf("\n\n   Entrega Programada 8 - F\n\n   Descricao: Palindromo\n\n");

    //Definindo variaveis
    char palavra[MAXIMO+1], nova_palavra[MAXIMO+1]; //MAXIMO+1 = 101, indices variam de 0 a 100
    int i, j, eh_palindromo;

    /*/
    Como sugerido no enunciado do programa, iremos considerar que o usuario ira digitar apenas caracteres minusculos,
    sem espacos e sem caracteres especiais. Nesse caso podemos, portanto, usar scanf, pois nao nos preocuparemos com espacos.
    /*/

    printf("  Digite uma palavra (tamanho maximo de %d caracteres): ", MAXIMO);
    scanf("%s", palavra); //nao eh necessario colocar & no caso de uma string
    //printf("  Palavra inserida pelo usuario: %s\n\n", palavra); //teste
    //printf("  Tamanho da palavra inserida pelo usuario: %d\n\n", strlen(palavra)); //teste

    //Instanciacao
    j = 0;

    /*/
    Para o programa ler a string de tras para frente utilizamos a funcao for, na qual ele comeca lendo o ultimo caractere
    da string (para nao ser \0 colocamos 'strlen(palavra)-1'), e percorre (fazendo i=i-1) todo o tamanho da palavra até
    chegar a i>=0.

    Como (i) comeca de strlen(palavra)-1, criamos uma outra variavel (j) que comeca do 0, para que a string 'nova_palavra'
    seja a string invertida da 'palavra'.
    /*/

    for(i = strlen(palavra)-1; i >=0; i--){
        //printf("  %d\n", i); //teste
        //printf("%c", palavra[i]); //teste
        nova_palavra[j]=palavra[i];
        //printf("%c", nova_palavra[j]);
        if (j < strlen(palavra)){
            j=j+1;
        }
    }

    printf("  Palavra lida de tras para frente: %s\n\n", nova_palavra);

    /*/
    Agora veremos se a palavra inserida eh um palindromo. Vamos usar a funcao strcmp, que compara duas strings, caracter a caracter,
    com base na tabela ASCII. Caso a palavra inserida e a sua inversa sejam iguais (e, portanto, iguais a zero), a palavra inserida
    eh um palindromo!
    /*/

    eh_palindromo = strcmp(palavra, nova_palavra);
    if (eh_palindromo == 0){
        printf("  A palavra inserida eh um palindromo!\n\n");
    } else {
        printf("  A palavra inserida NAO eh um palindromo!\n\n");
    }

    return 0;

}
