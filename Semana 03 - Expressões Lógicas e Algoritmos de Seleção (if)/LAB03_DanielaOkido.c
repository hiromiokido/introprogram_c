#include <stdio.h>

/*/
Laboratorio 3 – A
Descricao: Maior Idade

Faca um programa que leia a idade de tres pessoas, e diga qual a
maior idade que o usuario digitou.

Dicas: Sempre podemos aninhar condicionais, uma dentro da outra.
Uma variavel auxiliar podera ser usada para achar a maior idade.

/*/

/*/
ATENCAO!
Como eu nao entendi se era para montar um programa um pouco mais
simples ou complexo, coloquei varias variaveis que eu achei que
ajudariam a resolver o problema. Por ex, idades iguais, idade
negativa (que nao existe), pelo menos duas idades iguais, etc.
/*/

int main(){
    //Definindo variaveis de interesse com float
    float idade1, idade2, idade3;

    printf("\n   Laboratorio 3 - A\n\n   Descricao: Maior Idade   \n\n");
    printf(" Vamos calcular a maior idade entre tres pessoas? \n\n");

    //Entrada dos valores reais
    printf(" Digite a primeira idade: ");
    scanf("%f", &idade1);

    printf(" Digite a segunda idade: ");
    scanf("%f", &idade2);

    printf(" Digite a terceira idade: ");
    scanf("%f", &idade3);

    //Imprimindo valores inseridos
    printf("\n As idades inseridas sao: %.0f, %.0f e %.0f anos. Quem tem a maior idade?\n\n", idade1, idade2, idade3);

    //Processamento
    if (idade1 < 0 || idade2 < 0 || idade3 < 0) //Tentar colocar idade negativa - nao existe
    {
        printf(" Nao existe idade negativa.\n\n");
    }
    else if (idade1 > idade2 && idade1 > idade3) //IDADE1 ser a maior
    {
        printf(" Vemos que a pessoa com maior idade tem %.0f ano(s).\n\n", idade1);
    }
    else if (idade2 > idade1 && idade2 > idade3) //IDADE2 ser a maior
    {
        printf(" Vemos que a pessoa com maior idade tem %.0f ano(s).\n\n", idade2);
    }
    else if (idade3 > idade1 && idade3 > idade2) //IDADE3 ser a maior
    {
        printf(" Vemos que a pessoa com maior idade tem %.0f ano(s).\n\n", idade3);
    }
    else if (idade1 == idade2 && idade2 == idade3 && idade1 == idade3) //Todos tem a mesma idade
    {
        printf(" Todas elas possuem a mesma idade, de %.0f ano(s).\n\n", idade3);
    }
    else if (idade1 == idade2 || idade1 == idade3) //Existe, pelo menos, duas pessoas com a mesma maior idade
    {
        printf(" Existem duas pessoas com a mesma idade. Ambas, portanto, apresentam a maior idade, de %.0f ano(s).\n\n", idade1);
    }
    else if (idade2 == idade1 || idade2 == idade3) //Existe, pelo menos, duas pessoas com a mesma maior idade
    {
        printf(" Existem duas pessoas com a mesma idade. Ambas, portanto, apresentam a maior idade, de %.0f ano(s).\n\n", idade2);
    }

    return 0;

}
