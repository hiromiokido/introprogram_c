#include <stdio.h>

/*/
Entrega Programada 5 - D
Descricao: Pesquisa

Faça um programa que leia o sexo(char) M ou F, a idade (int) e o salario (float) de uma pessoa
entrevistada. Apos ler os dados de um entrevistado o programa deve perguntar ao usuario se ele
deseja informar os dados de mais uma pessoa (‘s’ ou ‘n’). Ao final, depois de ler todos os dados dos
entrevistados, o programa devera exibir a media de idades de cada um dos sexos e a media de
salarios de cada um dos sexos.

Entrada:
M 18 2000.00 s
M 20 1000.00 s
F 19 2200.00 s
F 19 2500.00 n
Saida:
M 19 1500.00
F 19 2350.00

Dica: atencao para os casos onde nenhuma pessoa de um determinado sexo for informada
Nesse exercicio deve-se usar while ou do...while
/*/


int main(){

    printf("\n\n   Entrega Programada 5 - D\n\n   Descricao: Pesquisa\n\n");

    //declarando as variaveis
    char genero, op;
    int idade, pessoas_f, pessoas_m;
    float salario, somasalario_f, somasalario_m, salariomedio_f, salariomedio_m, somaidade_f, somaidade_m, idademedia_f, idademedia_m;

    //definindo variaveis de controle
    pessoas_f = 0;
    pessoas_m = 0;
    somaidade_f = 0;
    somaidade_m = 0;
    somasalario_f = 0;
    somasalario_m = 0;

    printf("\n  Este programa ira ler os dados das pessoas entrevistadas.\n\n"
           "  Quando voce terminar de inserir os dados o programa vai exibir uma \n  tabela com a media de idade e salario de cada um dos generos.\n"
           "\n  Vamos comecar adicionando os dados dos entrevistados.\n\n");

    //processamento
    do{
        //primeiro dado a ser inserido: genero
        printf("\n  Insira o genero da pessoa entrevistada. Escolha entre 'F' e 'M': ");
        scanf(" %c", &genero);
        //segundo dado a ser inserido: idade
        printf("  Insira a idade da pessoa entrevistada: ");
        scanf("%d", &idade);
        //terceiro dado a ser inserido: salario
        printf("  Insira o salario da pessoa entrevistada: ");
        scanf("%f", &salario);

        //dependendo do genero
        if (genero == 'f' || genero == 'F'){

            pessoas_f = pessoas_f + 1;
            somaidade_f = somaidade_f + idade;
            somasalario_f = somasalario_f + salario;

        } else if (genero == 'm' || genero == 'M'){

            pessoas_m = pessoas_m + 1;
            somaidade_m = somaidade_m + idade;
            somasalario_m = somasalario_m + salario;

        }

        printf("\n  Deseja adicionar mais dados? Digite 's' para continuar e 'n' para terminar: ");
        scanf(" %c", &op);

    } while (op == 's' || op == 'S');

    //para evitar problemas caso nao for adicionado nenhuma pessoa de um determinado genero
    if (pessoas_f == 0){
        idademedia_f = 0;
        salariomedio_f = 0;
        idademedia_m = somaidade_m/pessoas_m;
        salariomedio_m = somasalario_m/pessoas_m;
    } else if (pessoas_m == 0){
        idademedia_f = somaidade_f/pessoas_f;
        salariomedio_f = somasalario_f/pessoas_f;
        idademedia_m = 0;
        salariomedio_m = 0;
    } else {
        idademedia_f = somaidade_f/pessoas_f;
        salariomedio_f = somasalario_f/pessoas_f;
        idademedia_m = somaidade_m/pessoas_m;
        salariomedio_m = somasalario_m/pessoas_m;
    }

    printf("\n\n  TABELA FINAL COM A MEDIA DOS DADOS\n"
           "  Genero    Media das Idades    Salario Medio (R$)\n"
           "  F               %.1f              %.2f\n"
           "  M               %.1f              %.2f\n\n", idademedia_f, salariomedio_f, idademedia_m, salariomedio_m);

    return 0;
}
