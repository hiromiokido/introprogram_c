#include <stdio.h>
#include <string.h>
#define MAX 3

/*/
Laboratorio 9 - A
Descricao: Soma e Impressao de Matriz

Faca um programa que leia uma matriz 3x3 com valores informados pelo usuario controlando para que os valores estejam no intervalo [1..30]. A leitura devera ser feita por linhas da matriz. Ou seja, definir
todos os elementos de uma linha, entao passar para a proxima linha. Calcule entao a soma de todos os elementos da matriz. No final, imprima a matriz em forma linha por linha e a soma de seus elementos.

Dicas: deve-se usar dois lacos aninhados para a leitura e impressao dos elementos.
/*/


int main(){

    printf("\n\n   Laboratorio 9 - A\n\n   Descricao: Soma e Impressao de Matriz 3X3\n\n");

    //Definindo variaveis
    float matriz[MAX][MAX];
    float somatotal;
    int linha, coluna;


    //Desenvolvimento da matriz 3x3: como exigido pelo problema, a leitura eh feita por linhas da matriz. Ou seja, definimos todos os elementos de uma linha, para entao passarmos para a proxima linha.
    somatotal = 0; //Instanciacao
    for(linha = 0; linha < MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            do{
            printf("  Insira um valor (no intervalo de 1 a 30) para o elemento de matriz[%d][%d]: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
            } while (matriz[linha][coluna] < 1 || matriz[linha][coluna] > 30);
            somatotal = somatotal + matriz[linha][coluna]; //Calculando a soma de todos os elementos da matriz
        }
        printf("\n");
    }

    //IMPRESSAO da matriz linha por linha
    printf("  --- MATRIZ 3X3 CRIADA PELO USUARIO --- \n\n");
    for(linha = 0; linha < MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            printf("       %02.2f", matriz[linha][coluna]);
        }
        printf("\n\n");
    }

    //IMPRESSAO da soma de todos os elementos da matriz[3][3]
    printf("  Soma de todos os elementos da matriz: %.2f\n\n", somatotal);
    printf("  --------------------------------------\n\n");

    return 0;

}
