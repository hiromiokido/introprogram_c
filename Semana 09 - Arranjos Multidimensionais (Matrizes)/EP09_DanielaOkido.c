#include <stdio.h>
#include <string.h>
#define MAX 5

/*/
Entrega Programada 9 - B
Descricao: Bingo

Faca um programa que implemente uma matriz 5x5 para ajudar frequentadores de um bingo. Primeiro o programa devera ler os numeros inteiros da matriz, linha por linha. Ao terminar
de ler a matriz, a mesma devera ser impressa. Depois o usuario ira informar todos os numeros sorteados. Quando a cartela for completada, o programa devera indicar BINGO!

Dicas:
- Os numeros da cartela sao numeros positivos (0 <= x <= 99).
- Devemos ler todos os elementos de uma linha, antes de começar a ler elementos da proxima linha.
- Os numeros inteiros podem ser impressos com %02d para deixar a matriz uniforme.
/*/


int main(){

    printf("\n\n   Entrega Programada 9 - B\n\n   Descricao: Bingo\n\n");

    //Definindo variaveis
    int matriz[MAX][MAX];
    int linha, coluna, bingo, numero;

    //Leitura dos numeros inteiros da matriz
    for(linha = 0; linha < MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            do{
            printf("  Insira um numero na posicao [%d][%d] da cartela (no intervalo de 0 a 99): ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
            } while (matriz[linha][coluna] < 0 || matriz[linha][coluna] >= 100);
        }
        printf("\n");
    }

    //IMPRESSAO da matriz
    printf("  ---- CARTELA CRIADA PELO USUARIO ---- \n\n");
    for(linha = 0; linha < MAX; linha++){
        for(coluna = 0; coluna < MAX; coluna++){
            printf("     %02d", matriz[linha][coluna]);
        }
        printf("\n\n");
    }
    printf("  ------------------------------------\n\n");

    //Agora o usuario informarah todos os numeros sorteados. Quando a cartela for completada, o programa indicara BINGO!
    bingo = 0; //Instanciacao
    do{
        printf("  Informe um numero sorteado: ");
        scanf("%d", &numero);
        for(linha = 0; linha < MAX; linha++){
            for(coluna = 0; coluna < MAX; coluna++){
                if(matriz[linha][coluna] == numero){
                    printf("  Numero sorteado %d encontrado na cartela (posicao [%d][%d])!\n", numero, linha+1, coluna+1);
                    bingo = bingo + 1;
                }
            }
        }
    } while(bingo < 25); //pois a matriz 5x5 contem 25 elementos

    if (bingo == 25){
        printf("\n  ------------ BINGO!! ------------ \n\n");
    }

    /*/
    Ressalvas que reconheco sobre o programa!
    - Quando o programa pede para o usuario inserir numeros inteiros na matriz, reconheco que o mesmo pode inserir valores repetidos.
    No entanto, o programa reconhecerah a repeticao e farah a soma corretamente.
    - Presumo que quando o usuario informar os numeros sorteados, o mesmo vai digitar o numero apenas uma vez (para que a soma ocorra
    corretamente). Assim evitaremos problemas do programa informar "Bingo!" soh porque a soma chegou ao valor que temos interesse.
    /*/

    return 0;

}
