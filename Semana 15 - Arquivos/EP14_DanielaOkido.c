#include <stdio.h>

/*/
Entrega Programada 14 - E
Descricao: Estatisticas do Arquivo

Faca um programa que peca para o usuario entrar o nome de um arquivo texto existente no computador. Entao, leia o conteudo do arquivo
informado e gere as seguintes estatisticas:
- Quantidade de Linhas: X
- Quantidade de Caracteres: Z
- Quantidade de Palavras: Y
Onde X, Y e Z serao substituidos pelas estatisticas correspondentes conforme o arquivo lido. Salve as estatistica geradas em um arquivo
de saida chamado “stats.txt”.

Dica:
- Considere que o arquivo de entrada tera apenas palavras separadas por 1 espaço em branco (nada de pontuacao, hifens, etc.);
- Na contagem de caracteres, desconsidere os espaços em branco e quebras de linha (\n).

Atencao: O programa devera obrigatoriamente manipular arquivos texto.
/*/


int main(){

    printf("\n\n   Entrega Programada 14 - E\n\n   Descricao: Estatisticas do Arquivo\n\n\n");
    printf("  Vamos analisar as estatisticas de um arquivo inserido pelo usuario:\n\n");

    int X = 0, X1 = 0, X2 = 0, Z = 0, Y = 0;
    char texto[1000+1], leitura_caractere;
    FILE *entrada, *saida;

    printf("  --------------------\n\n  Insira o nome do arquivo: ");
    scanf("%s", &texto);
    entrada = fopen(texto, "r");
    if (entrada == NULL){
        printf("\n  Erro na abertura do arquivo!\n\n\n");
        system("pause");
        return 0;
    }

    printf("\n  --------------------\n\n  Confira abaixo o arquivo inserido:\n\n");
    while (fgets(texto, 1000, entrada) != NULL){
        printf("  ->  %s", texto);
    }
    rewind(entrada);

    //printf("\n\n  --------------------\n\n  Analises:\n\n");

    //Contagem de Linhas X:
    //NOTA: Eu entendi que apenas na contagem de caracteres devemos desconsiderar as quebras de linha (\n);
    //      Logo, suponho que na contagem de linhas devemos considerar as quebras de linhas - por isso fiz a somatoria de X1 e X2!
    while (fgets(texto, 1000, entrada) != NULL){
        if (texto[0] != '\n'){
            X1 = X1 + 1;
            //printf("  X = %s", texto);
        } else {
            X2 = X2 + 1;
        }
    }
    X = X1 + X2;
    rewind(entrada);

    //Contagem de Caracteres Z:
    while (!feof(entrada)){
        leitura_caractere = getc(entrada);
        if (leitura_caractere != ' ' && leitura_caractere != '\n' && leitura_caractere != EOF){
            Z = Z + 1;
            //printf("  Z = %c\n", leitura_caractere);
        }
    }
    rewind(entrada);

    //Contagem de Palavras Y:
    while ( fscanf(entrada, "%s", texto) != EOF){
        Y = Y + 1;
        //printf("  Y = %s\n", texto);
    }
    rewind(entrada);

    printf("\n\n  --------------------\n\n  Estatisticas do Arquivo:\n");
    printf("\n  Quantidade de Linhas: X = %d", X);
    printf("\n  Quantidade de Caracteres: Z = %d", Z);
    printf("\n  Quantidade de Palavras: Y = %d\n", Y);

    fclose(entrada);

    //Salvando as estatistica geradas em um arquivo de saida chamado “stats.txt”;

    saida = fopen("stats.txt", "w+");
    fprintf(saida, "\n  Estatisticas do Arquivo Inserido\n\n");
    fprintf(saida, "  Quantidade de Linhas: X = %d\n", X);
    fprintf(saida, "  Quantidade de Caracteres: Z = %d\n", Z);
    fprintf(saida, "  Quantidade de Palavras: Y = %d", Y);
    fclose(saida);

    printf("\n  --------------------\n\n  Analise disponivel no arquivo de saida 'stats.txt'!\n\n\n");

    return 0;

}
