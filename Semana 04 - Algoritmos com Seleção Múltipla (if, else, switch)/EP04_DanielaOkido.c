#include <stdio.h>

/*/
Entrega Programada 4 - D
Descricao: Ovos de Pascoa

Uma industria de ovos de Pascoa fornece tres tipos diferentes de ovos de chocolate: tipo A com valor unitario de R$12, tipo B com valor unitario
de R$15.50 e tipo C com valor unitario de R$21.30. Faca um programa que leia os dados relativos a um pedido (tipo de Ovo e quantidade) e informe:

- o produto solicitado (tipo de ovo A, B ou C. Fazer consistencia do tipo);
- o numero de unidades vendidas (com mensagem do limite ultrapassado, se for o caso);
- o total a ser pago, em reais;

Suponha que em cada pedido somente podera ser solicitado um tipo de ovo.

Alem disso, com a intencao de satisfazer a um maior numero de clientes, foi limitado o numero de ovos a serem fornecidos por pedido, de acordo
com o tipo de ovo solicitado: o numero maximo de unidades do ovo A eh 50, do B eh 30 e do C eh 20.

Caso o pedido supere o numero limite de unidades correspondente ao tipo de ovo do pedido, o programa devera emitir uma mensagem indicando que
nao podera atender o total do pedido, dizendo que serao fornecidas apenas as unidades estabelecidas para o tipo.

Atencao: Nesse exercicio, deve-se usar switch()
/*/


int main(){

    printf("\n   Entrega Programada 4 - D\n\n   Descricao: Ovos de Pascoa\n\n");

    //declarando as variaveis
    char tipo;
    int nA, nB, nC, cinquenta, trinta, vinte;
    float valor, vA, vB, vC;

    //Valores do produto (R$)
    vA = 12;
    vB = 15.50;
    vC = 21.30;
    //Lote max dependendo do tipo
    cinquenta = 50;
    trinta = 30;
    vinte = 20;

    printf(" Nossa industria oferece tres tipos diferentes de ovos de chocolate:\n"
           "\n                   Tipo     Preco (por unidade)"
           "\n                    A           R$12,00"
           "\n                    B           R$15,50"
           "\n                    C           R$21,30\n"
           "\n Vamos realizar o seu pedido!\n"
           "\n Qual o tipo de chocolate voce deseja (A, B ou C)? ");
    scanf(" %c", &tipo);

    //Processamento
    switch(tipo){

    case 'A':
        printf(" Voce selecionou ovos de chocolate do tipo A. \n\n"
               " Quantos ovos desse tipo de chocolate voce deseja comprar? ");
        scanf("%d", &nA);
        printf(" Voce deseja comprar %d ovo(s) de chocolate.\n\n", nA);
        if(nA > cinquenta){
            nA = cinquenta;
            printf(" O pedido superou o limite de unidades possiveis para a compra."
                   " Nao poderemos atender ao total do pedido.\n"
                   " Neste pedido voce podera adquirir, no maximo, 50 unidades."
                   " Caso queira adquirir mais produtos, favor realizar uma nova compra.\n\n");
            valor = nA*vA;
            printf(" Valor total: R$%.2f\n\n\n", valor);
            //Conclusao
            printf("       == Comanda final ==         "
                   "\n Tipo de chocolate solicitado: %c"
                   "\n Quantidade solicidada:        %d unidades"
                   "\n Total a pagar:                R$%.2f\n\n\n", tipo, nA, valor);
        }
        else {
            valor = nA*vA;
            printf(" Valor total: R$%.2f\n\n\n", valor);
            //Conclusao
            printf("       == Comanda final ==         "
                   "\n Tipo de chocolate solicitado: %c"
                   "\n Quantidade solicidada:        %d unidades"
                   "\n Total a pagar:                R$%.2f\n\n\n", tipo, nA, valor);
        }
        break;

    case 'B':
        printf(" Voce selecionou ovos de chocolate do tipo B.\n\n"
               " Quantos ovos desse tipo de chocolate voce deseja comprar? ");
        scanf("%d", &nB);
        printf(" Voce deseja comprar %d ovo(s) de chocolate.\n\n", nB);
        if(nB > trinta){
            nB = trinta;
            printf(" O pedido superou o limite de unidades possiveis para a compra."
                   " Nao poderemos atender ao total do pedido.\n"
                   " Caso queira adquirir mais produtos, favor realizar uma nova compra."
                   " Neste pedido voce podera adquirir, no maximo, 30 unidades.\n\n");
            valor = nB*vB;
            printf(" Valor total: R$%.2f\n\n\n", valor);
            //Conclusao
            printf("       == Comanda final ==         "
                   "\n Tipo de chocolate solicitado: %c"
                   "\n Quantidade solicidada:        %d unidades"
                   "\n Total a pagar:                R$%.2f\n\n\n", tipo, nB, valor);
        }
        else {
            valor = nB*vB;
            printf(" Valor total: R$%.2f\n\n\n", valor);
            //Conclusao
            printf("       == Comanda final ==         "
                   "\n Tipo de chocolate solicitado: %c"
                   "\n Quantidade solicidada:        %d unidades"
                   "\n Total a pagar:                R$%.2f\n\n\n", tipo, nB, valor);
        }
        break;

    case 'C':
        printf(" Voce selecionou ovos de chocolate do tipo C.\n\n"
               " Quantos ovos desse tipo de chocolate voce deseja comprar? ");
        scanf("%d", &nC);
        printf(" Voce deseja comprar %d ovo(s) de chocolate.\n\n", nC);
        if(nC > vinte){
            nC = vinte;
            printf(" O pedido superou o limite de unidades possiveis para a compra."
                   " Nao poderemos atender ao total do pedido.\n"
                   " Neste pedido voce podera adquirir, no maximo, 20 unidades."
                   " Caso queira adquirir mais produtos, favor realizar uma nova compra.\n\n");
            valor = nC*vC;
            printf(" Valor total: R$%.2f\n\n\n", valor);
            //Conclusao
            printf("       == Comanda final ==         "
                   "\n Tipo de chocolate solicitado: %c"
                   "\n Quantidade solicidada:        %d unidades"
                   "\n Total a pagar:                R$%.2f\n\n\n", tipo, nC, valor);
        }
        else {
            valor = nC*vC;
            printf(" Valor total: R$%.2f\n\n\n", valor);
            //Conclusao
            printf("       == Comanda final ==         "
                   "\n Tipo de chocolate solicitado: %c"
                   "\n Quantidade solicidada:        %d unidades"
                   "\n Total a pagar:                R$%.2f\n\n\n", tipo, nC, valor);
        }
        break;

    default:
        if(tipo == 'a' || tipo == 'b' || tipo == 'c')
            printf("\n Nao esqueca de inserir o tipo desejado em letra maiuscula. Tente novamente.\n\n\n");
        else
            printf("\n O tipo inserido esta indisponivel.\n\n\n");
        break;
    }

    return 0;

}

