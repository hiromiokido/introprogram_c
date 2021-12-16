#include <stdio.h>
#include <string.h>
#define LIN 3
#define COL 5

/*/
Entrega Programada 10 - E
Descricao: Maiores Valores

Faca um programa que exiba o maior valor contido em cada uma das linhas de uma matriz com 3 linhas e 5 colunas. Os valores devem ser
exibidos em ordem crescente. Construa uma funcao para ler os valores da matriz com numeros pertencentes ao intervalo [0, 100].

Dicas:
- O programa ira chamar a funcao de leitura 15 vezes;
- A funcao chamada eh que vai garantir que o valor lido pertence ao intervalo valido;
- A funcao chamada so retornara quando o usuario digitar um valor valido;
- Essa funcao de leitura nao devera fazer mais nenhum outro procedimento;
- Os calculos devem ficar na main();

Atencao: o programa devera obrigatoriamente usar funcoes.
/*/


//Criando a funcao de leitura:
//- A funcao chamada vai garantir que o valor lido pertence ao intervalo valido [0, 100];
//- A funcao chamada retornara quando o usuario digitar um valor valido;
//- A funcao de leitura nao devera fazer mais nenhum outro procedimento;
float leitura() {
    float valor;
    do{
        printf("  Insira um valor valido que pertence ao intervalo entre 0 e 100: ");
        scanf("%f", &valor);
    } while(valor < 0 || valor > 100);
    return valor;
}

//Na funcao principal main():
//- O programa exibe o maior valor contido em cada uma das linhas de uma matriz com 3 linhas e 5 colunas;
//- Os valores devem ser exibidos em ordem crescente;
int main(){

    printf("\n\n   Entrega Programada 10 - E\n\n   Descricao: Maiores Valores\n\n");

    float matriz[LIN][COL], maior_valor;
    int linha, coluna, aux, k;

    //O programa ira chamar a funcao de leitura 15 vezes;
    for (linha = 0; linha <  LIN; linha++) {
        for (coluna = 0; coluna < COL; coluna++) {
            printf("  Posicao matriz[linha %d][coluna %d]\n", linha+1, coluna+1);
            matriz[linha][coluna] = leitura();
        }
    }

    //Print teste da matriz
    printf("\n  Matriz construida pelo usuario: \n\n");
    for(linha = 0; linha <  LIN; linha++){
        for(coluna = 0; coluna < COL; coluna++){
            printf("   %03.0f", matriz[linha][coluna]);
        }
        printf("\n\n");
    }

    //Os calculos devem ficar na main(): valores em ordem crescente
    for(linha = 0; linha <  LIN; linha++){
        for(k = 0; k < COL; k++){
            for (coluna = k+1; coluna < COL; coluna++) {
                if (matriz[linha][k] > matriz[linha][coluna]) {
                    aux = matriz[linha][coluna];
                    matriz[linha][coluna] = matriz[linha][k];
                    matriz[linha][k] = aux;
                }
            }
        }
    }

    //Os calculos devem ficar na main(): print dos valores em ordem crescente
    printf("\n");
    for(linha = 0; linha <  LIN; linha++){
        printf("  Linha %d da matriz em ordem crescente:", linha+1);
        for(coluna = 0; coluna < COL; coluna++){
            printf("  %03.0f", matriz[linha][coluna]);
        }
        printf("\n");
    }

    //Os calculos devem ficar na main(): maior valor contido na linha da matriz
    printf("\n  Conclusoes finais:\n");
    for(linha = 0; linha <  LIN; linha++){
        maior_valor = matriz[linha][0];
        for(coluna = 0; coluna < COL; coluna++){
            if (matriz[linha][coluna] > maior_valor){
                maior_valor = matriz[linha][coluna];
            }
        }
        printf("  O maior valor contido na linha %d da matriz eh %.0f.\n", linha+1, maior_valor);
    }

    return 0;

}
