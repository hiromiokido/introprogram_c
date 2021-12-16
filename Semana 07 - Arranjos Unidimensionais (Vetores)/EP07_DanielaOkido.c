#include <stdio.h>
#define MAX 5

/*/
Entrega Programada 7 - B
Descricao: Planilha Notas

Faca um programa para ler e armazenar (em tres vetores) o Numero de Matricula (inteiro), a Nota1 (real) e a Nota2 (real)
de cada aluno de uma turma de 5 alunos. Calcular a nota final de cada aluno (media das suas notas), a media da turma, o
numero de alunos com nota final inferior a media. Imprimir no final todos os dados envolvidos como segue:

No. Matricula  Nota01  Nota02  Nota Final
0001            7.00    8.50     7.75
0022            8.00    7.90     7.95
0019            6.00    6.70     6.35
0123            6.90    8.90     7.90
0055            8.80    9.20     9.00

Media da turma: 7.79
Alunos com nota inferior a media: 2

Dicas:
Para imprimir os numeros de matricula com zeros a esquerda utilize: printf(“%04d”, numero); onde o numero 4 define a
quantidade total de dígitos impressos, ou seja, se o numero tiver dois digitos serao adicionados mais dois zeros a esquerda.
/*/


int main(){

    printf("\n\n   Entrega Programada 7 - B\n\n   Descricao: Planilha de Notas\n\n");
    printf("  Este programa calcula a nota final de cada aluno (fazendo uma media de suas notas),\n  a media da turma e o numero de alunos com nota final inferior a media.\n");


    //nota-se que matricula[MAX],nota1[MAX], nota2[MAX], soma_aluno[MAX] e nota_final[MAX] sao vetores de 5 elementos, cujos indices variam de 0 a 4
    //no caso de 'abaixo_da_media' e 'soma_total' vemos definicao + instanciacao
    int i, matricula[MAX], abaixo_da_media = 0;                                                   //definindo variaveis inteiras;
    float nota1[MAX], nota2[MAX], soma_aluno[MAX], nota_final[MAX], soma_total = 0, media_final;  //definindo variaveis reais;

    //primeiramente queremos que o usuario digite o numero de matricula e as notas 1 e 2 de cada aluno
    for(i = 0; i < MAX; i++){
        printf("\n\n  ALUNO %d\n", i+1);
        printf("  Digite o Numero de Matricula: ");
        scanf("%d", &matricula[i]);
        printf("  Digite a Nota 1 desse aluno: ");
        scanf("%f", &nota1[i]);
        printf("  Digite a Nota 2 desse aluno: ");
        scanf("%f", &nota2[i]);

        //com as informacoes fornecidas podemos calcular a nota final dos 5 alunos
        soma_aluno[i] = nota1[i] + nota2[i];
        //teste para verificar se soma_aluno[i] esta funcionando corretamente
        //printf("  A soma das notas 1 e 2 desse aluno eh: %.2f", soma_aluno[i]);

        //calculando a nota final do aluno (ou seja, a media final dele)
        nota_final[i] = soma_aluno[i]/2.;
        //teste para verificar se nota_final[i] esta funcionando corretamente
        //printf("  A nota final do aluno de matricula %04d eh %.2f.", matricula[i], nota_final[i]);

        //para calcular a media da turma precisamos fazer o somatorio das notas finais
        soma_total = soma_total + nota_final[i];
    }

    //calculando a media da turma
    media_final = soma_total/MAX;
    //teste para verificar se a soma_total e a media_final estao funcionando corretamente
    //printf("\n  A soma total de todas as notas finais eh dada por: %.2f\n", soma_total);
    //printf("\n\n  Media da turma: %.2f\n", media_final);

    //agora vamos calcular o numero de alunos com nota final inferior a media; usaremos 'for' para identificar quais notas sao inferiores a media
    for(i = 0; i < MAX; i++){
        if (nota_final[i] < media_final){
            abaixo_da_media = abaixo_da_media + 1;
        }
    }

    //teste para verificar se a abaixo_da_media esta funcionando corretamente
    //printf("  Alunos com nota inferior a media: %d.\n\n\n", abaixo_da_media);

    //    PRINT FINAL
    printf("\n\n  -- PLANILHA DE NOTAS --\n\n");
    printf("  No. Matricula\t\t Nota 01\t Nota 02\t Nota Final\n");
    for(i = 0; i < MAX; i++){
        printf("  %04d \t\t\t %.2f \t\t %.2f \t\t %.2f\n", matricula[i],nota1[i],nota2[i],nota_final[i]);
    }
    printf("\n  Media da turma: %.2f\n", media_final);
    printf("  Aluno(s) com nota inferior a media: %d\n\n\n", abaixo_da_media);

    return 0;

}
