#include <stdio.h>
#define MAX 10

/*/
Entrega Programada 13 - D
Descricao: Imposto de Renda

Faca um programa em c que calcule o imposto de renda de um conjunto de 10 pessoas. Os dados de cada pessoa devem ser armazenados em uma estrutura
que contenha os campos para o nome(string), salario mensal(float), deducoes(float), imposto devido(float) e restituicao(float).

1. Crie uma funcao que leia do usuario os tres primeiros campos da struct e a retorne para a funcao main. Essa funcao sera chamada 10 vezes, uma
para cada pessoa.
2. Crie uma funcao que sera chamada somente uma vez e que receba o vetor de structs e, a partir das informacoes de salario e deducoes, calcule o
imposto devido ou a restituicao a ser paga para cada pessoa de acordo com a seguinte formula:

Imposto ou Restituicao = Deducoes - 12*(Salario Mensal)*Aliquota

Se o resultado do calculo gerar um valor positivo entao a pessoa recebera restituicao do imposto e o valor calculado devera ser salvo no campo
restituicao enquanto que o campo imposto devido fica zerado.
Se o resultado do calculo gerar um valor negativo entao a pessoa devera pagar imposto e o modulo do valor calculado devera ser armazenado no
campo imposto devido enquanto que o campo restituicao fica zerado.

O valor referente a alíquota depende do salario mensal de cada pessoa, com a seguinte divisao:

Salario Mensal                Aliquota
Ate R$ 1.903                  0%
De  R$ 1.903 ate R$ 2.826     7,5%
De  R$ 2.826 ate R$ 3.751     15%
De  R$ 3.751 ate R$ 4.664     22,5%
A partir de R$ 4.664          27,5%

3. Crie uma funcao que receba o vetor de structs e exiba todas as informacoes de cada uma das pessoas, essa funcao sera chamada somente uma vez.

Atencao: O programa devera obrigatoriamente usar struct.
/*/



//Os dados de cada pessoa devem ser armazenados em uma estrutura que contenha os campos para o nome(string),
//salario mensal(float), deducoes(float), imposto devido(float) e restituicao(float);
typedef struct {
    char nome[300+1];
    float salario_mensal;
    float deducoes;
    float imposto_devido;
    float restituicao;
} imposto_de_renda;


//1. Funcao que le os 3 primeiros campos da struct e a retorne para a funcao main;
//le_dados() eh uma funcao que le a estrutura imposto_de_renda e a retorna;
imposto_de_renda le_dados(){
    imposto_de_renda dados; //Variavel local dados tipo imposto_de_renda;

    printf("  Nome: ");
    fflush(stdin);
    gets(dados.nome);

    printf("  Salario mensal: R$");
    scanf("%f", &dados.salario_mensal);

    printf("  Deducoes: R$");
    scanf("%f", &dados.deducoes);
    printf("\n");

    return dados;
}


//2. Funcao que eh chamada somente uma vez e que recebe o vetor de structs e, a partir das informacoes de
//salario e deducoes, calcula o imposto devido ou a restituicao a ser paga para cada pessoa de acordo com a
//formula: Imposto ou Restituicao = Deducoes - 12*(Salario Mensal)*Aliquota;
imposto_de_renda calculo(imposto_de_renda *vetor){
    float imposto_ou_restituicao[MAX], aliquota, salario1 = 1903., salario2 = 2826., salario3 = 3751., salario4 = 4664., meses = 12., negativo = -1.;
    int i;

    for(i = 0; i < MAX; i++){

        //Calculando o valor da alíquota;
        if (vetor[i].salario_mensal < salario1){ // < 1903
            aliquota = 0;
        } else if (vetor[i].salario_mensal >= salario1 && vetor[i].salario_mensal < salario2){ // >= 1903 && < 2826
            aliquota = 0.075;
        } else if (vetor[i].salario_mensal >= salario2 && vetor[i].salario_mensal < salario3){ // >= 2826 && < 3751
            aliquota = 0.15;
        } else if (vetor[i].salario_mensal >= salario3 && vetor[i].salario_mensal < salario4){ // >= 3751 && < 4664
            aliquota = 0.225;
        } else if (vetor[i].salario_mensal >= salario4){ // >= 4664
            aliquota = 0.275;
        }

        //printf("\n  Salario: R$%.2f", vetor[i].salario_mensal);                   //teste
        //printf("\n  Deducao: R$%.2f", vetor[i].deducoes);                         //teste
        //printf("\n  Aliquota: %.2f", aliquota);                                   //teste
        imposto_ou_restituicao[i] = vetor[i].deducoes - (meses*(vetor[i].salario_mensal)*aliquota);
        //printf("\n  Imposto ou restituicao: %.2f", imposto_ou_restituicao[i]);    //teste

    /*/
    - Resultado positivo: a pessoa recebera restituicao do imposto; valor calculado deve ser salvo no campo restituicao,
    enquanto que o campo imposto devido fica zerado: vetor[i].restituicao = imposto_ou_restituicao[i], e vetor[i].imposto_devido = 0;

    - Resultado negativo: a pessoa devera pagar imposto e o modulo do valor calculado devera ser armazenado no
    campo imposto devido enquanto que o campo restituicao fica zerado: vetor[i].imposto_devido = imposto_ou_restituicao[i]*negativo, vetor[i].restituicao = 0;
    /*/

        if (imposto_ou_restituicao[i] > 0){
            vetor[i].restituicao = imposto_ou_restituicao[i];
            vetor[i].imposto_devido = 0;
            //printf("\n  O usuario recebera uma restituicao do imposto no valor de R$%.2f\n", vetor[i].restituicao);   //teste
        } else if (imposto_ou_restituicao[i] < 0){
            vetor[i].restituicao = 0;
            vetor[i].imposto_devido = imposto_ou_restituicao[i]*negativo;
            //printf("\n  O usuario devera pagar imposto no valor de R$%.2f\n", vetor[i].imposto_devido);               //teste
        }

    }
}


//3. Funcao que recebe o vetor de structs e exibe todas as informacoes de cada uma das pessoas, chamada somente uma vez;
imposto_de_renda imprimir(imposto_de_renda *vetor){
    int i;
    printf("\n  ---------------------------------------------------\n\n");
    for(i = 0; i < MAX; i++){
        printf("\n  ---- INFORMACOES FINAIS DO IMPOSTO DE RENDA %d ----\n", i+1);
        printf("  Nome: ");
        puts(vetor[i].nome);
        printf("  Salario Mensal: R$%.2f", vetor[i].salario_mensal);
        printf("\n  Deducoes: R$%.2f\n", vetor[i].deducoes);
        if (vetor[i].restituicao != 0) {
            printf("  Imposto devido: R$%.2f\n", vetor[i].imposto_devido);
            printf("  Restituicao: R$%.2f\n", vetor[i].restituicao);
            printf("  CONCLUSAO: RECEBERA UMA RESTITUICAO do imposto no valor de R$%.2f\n", vetor[i].restituicao);
        } else if (vetor[i].imposto_devido != 0){
            printf("  Imposto devido: R$%.2f\n", vetor[i].imposto_devido);
            printf("  Restituicao: R$%.2f\n", vetor[i].restituicao);
            printf("  CONCLUSAO: Deve realizar o PAGAMENTO DO IMPOSTO no valor de R$%.2f\n", vetor[i].imposto_devido);
        }
        printf("\n");
    }
}


int main(){

    printf("\n\n   Entrega Programada 13 - D\n\n   Descricao: Imposto de Renda\n\n\n");
    printf("  ---- Calculo do Imposto de Renda de 10 pessoas ----\n\n\n");

    //A funcao eh declarada do tipo imposto_de_renda, logo ela retorna ao final uma estrutura do tipo imposto_de_renda
    imposto_de_renda acessando_dados[MAX];    //Variavel local acessando_dados tipo imposto_de_renda
    int i;

    //1.
    for (i = 0; i < MAX; i++){
        printf("  ---- Dados do usuario %d ----\n", i+1);
        acessando_dados[i] = le_dados();
    }

    //2.
    calculo(&acessando_dados);

    //3.
    imprimir(&acessando_dados);

    return 0;

}
