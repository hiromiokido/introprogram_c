#include <stdio.h>
#include <string.h>
#define MAX 10

/*/
Laboratorio 13 - B
Descricao: Produto Estruturado

Considerando o registro de um produto de uma loja contendo as seguintes informacoes:
- Descricao (120 caracteres);
- Valor (float);
Fazer um programa que, dado o registro de 10 produtos, exiba-os na ordem inversa em que foram digitados.

Atencao: O programa devera obrigatoriamente usar struct
/*/


//Declaracao da estrutura
typedef struct {
    char descricao[121]; //120 caracteres + 1 para englobar o caractere delimitador de fim \0;
    float valor;
} loja;  //Nome do tipo eh loja;

int main(){

    printf("\n\n   Laboratorio 13 - B\n\n   Descricao: Produto Estruturado\n\n\n");

    loja produto[MAX];
    int  i, inverso;

    for (i = 1; i <= MAX; i++){

        printf("  Insira uma descricao do produto %d (tamanho maximo de 120 caracteres): ", i);
        fflush(stdin); //fflush(stdin) antes de cada funcao gets para previnir erros
        gets(produto[i].descricao);

        printf("  Insira o valor do produto: R$");
        scanf("%f", &produto[i].valor);
        printf("\n");

    }

    printf("\n  ---- Conferindo produtos inseridos --- \n\n");
    for (inverso = MAX; inverso >= 1; inverso--){

        printf("  Produto %d\n", inverso);

        printf("  Descricao: ");
        puts(produto[inverso].descricao);

        printf("  Valor: R$%.2f", produto[inverso].valor);
        printf("\n\n");

    }

    return 0;

}
