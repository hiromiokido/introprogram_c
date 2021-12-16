#include <stdio.h>
#include <string.h>
#define MAXIMO 500

/*/
Laboratorio 8 - C
Descricao: Conta Espacos

Escreva um programa que leia uma frase (string), e entao o algoritmo devera contar e exibir quantos espaços existem na frase de entrada. A frase tera no maximo 500 letras.

Dicas:
- Usar gets() na leitura para permitir a digitacao de espaços;
- Lembre-se que toda string é terminada pelo caractere '\0'
- Toda string comeca da posicao 0, ou seja, minha_string[0] e podemos percorrer a string caractere a caractere acessando os índices como qualquer arranjo
/*/

int main(){

    printf("\n\n   Laboratorio 8 - C\n\n   Descricao: Conta Espacos\n\n");

    //Definindo variaveis
    char textao[MAXIMO+1], espaco; //MAXIMO+1 = 501, indices variam de 0 a 500
    int i, existe, quantia;

    //Desenvolvimento: pedimos para o usuario inserir um texto
    printf("\n  Digite uma frase (tamanho maximo de %d caracteres): ", MAXIMO);
    fflush(stdin);
    gets(textao);

    /*/
    - Por recomendacao dos slides aplicamos o comando fflush(stdin) antes de cada funcao gets, que previne erros indesejaveis quando usamos gets e scanf no mesmo programa.
    - Estou ciente que as strings sao representadas pelas aspas duplas e os caracteres pelos apostrofos. No entanto, no print abaixo decidi destacar o texto inserido pelo usuario com aspas simples,
    para que o mesmo consiga ver o inicio e o fim da frase.
    /*/

    printf("\n  Texto destacado em aspas simples abaixo:\n  '%s'\n\n", textao);
    printf("  Quantidade de caracteres: %d\n\n", strlen(textao));

    //Instanciacao
    existe = 0;
    espaco = ' ';
    quantia = 0;

    //Usamos for para percorrer todos os caracteres do texto
    for(i = 0; i < strlen(textao); i++){
        if (textao[i] == espaco){
            printf("  Espaco encontrado na posicao %d\n", i);
            existe = 1;             //caso exista espaco na frase, a flag sera igual a 1, caso contrario, permanecera 0;
            quantia = quantia + 1;  //contagem dos espacos
        }
    }
    printf("\n  Quantia final de espacos: %d\n", quantia); //Contagem final/resultante de todos os espacos

    //Caso a flag permaneca igual a 0 (zero), o programa indicara que nao ha espacos na frase
    if (!existe){
        printf("  Nao ha espacos nesta frase.\n\n");
    }

    return 0;
}
