#include <stdio.h>

/*/
Laboratorio 10 - B
Descricao: Ler Sexo

Faca um programa que leia o sexo de 10 alunos, calculando o numero de alunos do sexo masculino e do sexo feminino.
Para ler o sexo dos alunos 'F' ou 'M', crie uma funcao.

Dicas:
- O programa ira chamar a funcao de leitura 10 vezes.
- A funcao chamada eh que vai garantir que o valor lido eh valido.
- A funcao chamada so retornara quando o usuario digitar um caracter valido.
- Essa funcao de leitura nao devera fazer mais nenhum outro procedimento.
- Os calculos devem ficar na main().

Atencao: O programa devera obrigatoriamente usar funcoes.
/*/


//Criando a funcao de leitura (escopo)
//- Vai garantir que o valor lido eh valido;
//- So retornara quando o usuario digitar um caracter valido;
//- Nao devera fazer mais nenhum outro procedimento.
char leitura() {
    char leitura_sexo;
    do{
        printf("  Digite o sexo do aluno: ");
        scanf(" %c", &leitura_sexo);
    } while (leitura_sexo != 'M' && leitura_sexo != 'F' && leitura_sexo != 'm' && leitura_sexo != 'f');
    return leitura_sexo;
}

int main(){

    printf("\n\n   Laboratorio 10 - B\n\n   Descricao: Ler Sexo\n\n");

    int aluno, f, m;
    char sexo;
    f = 0;
    m = 0;

    //O programa ira chamar a funcao de leitura 10 vezes.
    for (aluno = 0; aluno < 10; aluno++){
        printf("  Aluno %d \n", aluno+1);
        //Chamada da funcao de leitura
        sexo = leitura();
        printf("\n");

        //Calculos na main()
        if (sexo == 'F' || sexo == 'f') {
            f = f + 1;
        } else if (sexo == 'M' || sexo == 'm') {
            m = m + 1;
        }
    }

    printf("  Temos %d estudantes do sexo Feminino e %d estudantes do sexo Masculino.\n\n", f, m);
    return 0;

}
