#include <stdio.h>

/*/
Entrega Programada 3 - A
Descricao: Poluicao

O departamento que controla o indice de poluicao do meio ambiente fiscaliza 3
grupos de industrias que sao altamente poluidoras do meio ambiente.

    Se o indice fica acima (>) de 0.3, as industrias do PRIMEIRO grupo sao
intimadas a suspenderem suas atividades;
    Se o indice fica acima (>) de 0.4, as do PRIMEIRO e do SEGUNDO grupos sao
intimadas a suspenderem suas atividades;
    Se o indice fica acima (>) de 0.5, TODOS OS TRES grupos devem ser notificados
a paralisarem suas atividades.

Escreva um programa que le o indice de poluição medido e emite a notificação
adequada aos diferentes grupos de empresas.

Atenção: O programa deve usar variaveis do tipo float. Nesse exercício,
deve-se usar if()...else()
/*/


int main(){

    //declarando as variaveis
    float indice, i1, i2, i3;

    printf("\n   Entrega Programada 3 - A\n\n   Descricao: Poluicao\n\n");

    //valor de entrada: leitura do indice de poluicao
    printf(" Insira o valor do indice de poluicao: ");
    scanf("%f", &indice);
    i1 = 0.3;
    i2 = 0.4;
    i3 = 0.5;

    /*/
    Processamento
    - abaixo de 0: valor negativo, nao eh possivel medir.
    - 0 <= indice <= 0.3: os grupos nao precisam suspender
    suas atividades;
    - 0.3 < indice <= 0.4: apenas ACIMA de 0.3 faria com
    que as industrias do PRIMEIRO grupo fechassem;
    - 0.4 < indice <= 0.5: apenas ACIMA de 0.4 faria com
    que as industrias do PRIMEIRO e SEGUNDO grupos fechassem;
    - 0.5 < indice: apenas ACIMA de 0.5 faria com que TODOS OS
    TRES GRUPOS fechassem.
    /*/

    printf("\n O valor inserido do indice de poluicao eh %.2f.\n", indice);

    if (indice<0){
        printf(" Valor inserido eh negativo, nao eh possivel fazer a analise.\n\n");
    }

    if (((indice<=i1)&&(indice>=0))){
        printf(" O indice de poluicao eh menor ou igual a 0.3, e as empresas podem continuar suas atividades.\n\n");
    } else if (((indice>i1)&&(indice<=i2))){
        printf(" Empresas do PRIMEIRO grupo serao intimadas a suspenderem suas atividades.\n\n");
    } else if (((indice<=i3)&&(indice>i2))){
        printf(" Empresas do PRIMEIRO e SEGUNDO grupos serao intimadas a suspenderem suas atividades.\n\n");
    } else if (i3<indice){
        printf(" Os TRES GRUPOS serao intimados a paralisarem suas atividades.\n\n");
    }

    return 0;

}
