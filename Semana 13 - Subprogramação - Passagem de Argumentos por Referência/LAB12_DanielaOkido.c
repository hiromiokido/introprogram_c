#include <stdio.h>
#include <string.h>
#define MAX 500

/*/
Laboratorio 12 - A
Descricao: Conta Letras

Faca um programa que leia um texto de ate 500 caracteres, e entao leia uma letra. Crie entao uma funcao que conte quantas vezes
aquela letra aparece no texto.

Dicas:
- Devemos passar o texto por referencia para a funcao;
- A funcao ira receber o texto e a letra, e retornar o numero de repeticoes da letra;

Atencao: O programa devera obrigatoriamente usar funcoes.
/*/


//A funcao precisa retornar o numero de repeticoes da letra, entao nao pode ser void;
int quantas_vezes_letra_aparece(char *vetor, char letra){

    int i, quantidade = 0, tamanho = strlen(vetor);

    for(i = 0; i < tamanho; i++){
        if (vetor[i] == letra){
            //printf("  A letra '%c' foi encontrada na posicao %d\n", letra, i+1);
            quantidade = quantidade + 1;
        }
    }

    return quantidade;

}

//O texto deve conter ate 500 caracteres, entao temos 500+1 para englobar o caractere delimitador de fim \0;
//Aplicamos fflush(stdin) antes de cada funcao gets para previnir erros indesejaveis quando usamos gets e scanf no mesmo programa.
int main(){

    printf("\n\n   Laboratorio 12 - A\n\n   Descricao: Conta Letras\n\n\n");

    char texto[MAX+1], letra, quantidade;

    printf("  Digite um texto (tamanho maximo de %d caracteres): ", MAX);
    fflush(stdin);
    gets(texto);

    printf("  Digite uma letra para saber quantas vezes ela aparece no texto inserido: ");
    scanf(" %c", &letra);

    //printf("  Quantidade de caracteres: %d\n\n", strlen(texto));

    quantidade = quantas_vezes_letra_aparece(texto, letra);

    if (quantidade != 0){
        printf("\n  A letra '%c' aparece %d vez(es) no texto.\n\n", letra, quantidade);
    } else if (quantidade == 0){
        printf("\n  A letra '%c' nao aparece no texto.\n\n", letra);
    }

    return 0;

}
