#include <stdio.h>

/*/
Laboratorio 14 - F
Descricao: Poema

Faca um programa que leia um arquivo de texto contendo um poema e exiba na tela quantos versos e quantas estrofes tem o poema, sendo cada verso
uma linha com palavras e cada estrofe um bloco de versos separado do bloco anterior por uma linha em branco. O nome do arquivo devera ser informado
pelo usuario e o arquivo nao devera ser alterado.

Dica: Uma linha em branco nao é um verso.
Atencao: O programa devera obrigatoriamente manipular arquivos texto.
/*/


/*/
- O nome do arquivo devera ser informado pelo usuario e o arquivo nao devera ser alterado.
- Exibe na tela quantos versos e quantas estrofes tem o poema;
    - Cada verso uma linha com palavras;
    - Cada estrofe um bloco de versos separado do bloco anterior por uma linha em branco;
/*/
int main(){

    printf("\n\n   Laboratorio 14 - F\n\n   Descricao: Poema\n\n\n");

    int  contagem_versos = 0, contagem_estrofes = 0;
    char poema[1000+1];
    FILE *entrada;

    printf("  Entre com o nome do arquivo: ");
    scanf("%s", poema);
    entrada = fopen(poema,"r");
    if (entrada == NULL){
        printf("\n  Erro na abertura do arquivo!\n\n\n");
        system("pause");
        return 0;
    }

    printf("\n  ----------\n\n");

    printf("  Confira abaixo o poema inserido: \n\n");
    while (fgets(poema, 1000, entrada) != NULL){
        printf("  ->  %s", poema);
        if (poema[0] == '\n'){
            contagem_estrofes = contagem_estrofes + 1;
        } else {
            contagem_versos = contagem_versos + 1;
        }
    }
    printf("\n\n");

    //na logica o programa nao conta uma estrofe, portanto devemos realizar mais uma contagem para que esteja correto;
    contagem_estrofes = contagem_estrofes + 1;

    printf("\n  --- Conclusao ---\n");
    printf("\n  Contagem de versos: %d\n", contagem_versos);
    printf("  Contagem de estrofes: %d\n\n", contagem_estrofes);

    fclose(entrada);
    return 0;

}
