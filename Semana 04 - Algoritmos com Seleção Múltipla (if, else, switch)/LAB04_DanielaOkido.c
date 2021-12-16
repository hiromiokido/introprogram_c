#include <stdio.h>

/*/
Laboratorio 4 – B
Descricao: Lista de Produtos

Faca um programa que leia o codigo (numero inteiro) de um produto entre 1 e 10.
Para cada codigo, crie um produto ficticio e um preco (numero real). Quando o
usuario digitar o codigo do produto, imprima na tela o nome do produto e seu preco.
Todos os precos devem ser apresentados em reais (R$) com duas casas decimais.

Atencao:
Nesse exercicio, deve-se usar switch()
/*/

int main(){

    printf("\n   Laboratorio 4 - B\n\n   Descricao: Lista de Produtos   \n\n");

    //Definindo variaveis de interesse; numero inteiro -> int
    int codigo;

    //Entrada do codigo no programa
    printf(" Insira o codigo de um produto (entre 1 e 10): ");
    scanf("%d", &codigo);

    //Queremos ler o codigo e, assim, mostrar o produto e seu preco.
    switch (codigo)
    {
        case 1:
            printf("\n Codigo inserido:  1"
                   "\n         Produto:  Garrafa da agua 0,5L"
                   "\n           Preco:  R$1,00\n\n"
                   );
            break;

        case 2:
            printf("\n Condigo inserido:  2"
                   "\n          Produto:  Barra de Chocolate"
                   "\n            Preco:  R$5,50\n\n");
            break;

        case 3:
            printf("\n Condigo inserido:  3"
                   "\n          Produto:  Pacote de Cogumelos Shimeji"
                   "\n            Preco:  R$17,30\n\n");
            break;

        case 4:
            printf("\n Condigo inserido:  4"
                   "\n          Produto:  Pacote de Broto de Feijao"
                   "\n            Preco:  R$12,00\n\n");
            break;

        case 5:
            printf("\n Condigo inserido:  5"
                   "\n          Produto:  Creme de leite"
                   "\n            Preco:  R$2,30\n\n");
            break;

        case 6:
            printf("\n Condigo inserido:  6"
                   "\n          Produto:  Pacote de Alfafa"
                   "\n            Preco:  R$6,10\n\n");
            break;

        case 7:
            printf("\n Condigo inserido:  7"
                   "\n          Produto:  Sabonete Liquido 1L"
                   "\n            Preco:  R$20,90\n\n");
            break;

        case 8:
            printf("\n Condigo inserido:  8"
                   "\n          Produto:  Arroz Japones 1kg"
                   "\n            Preco:  R$6,30\n\n");
            break;

        case 9:
            printf("\n Condigo inserido:  9"
                   "\n          Produto:  Desodorante"
                   "\n            Preco:  R$14,80\n\n");
            break;

        case 10:
            printf("\n Condigo inserido:  10"
                   "\n          Produto:  Suco de Laranja Natural"
                   "\n            Preco:  R$6,75\n\n");
            break;

        default:
            printf("\n Codigo indisponivel.\n\n");
    }

    return 0;

}
