#include <stdio.h>
#define ALUNOS 15

/*/
Entrega Programada 12 - C
Descricao: Media Aparada

Faca um programa para calcular a media aparada das notas reais de 15 alunos. A media aparada deve ser
calculada descartando a maior e a menor nota. Para isso, crie uma funcao que localize e retorne o maior
valor e uma outra funcao para localizar e retornar o menor valor de um vetor. Entao calcule a media aparada.
A media deve ser impressa com duas casas decimais.

Dicas: Podemos fazer 3 funcoes.
- MenorValor() que recebe o vetor e retorna o menor valor contido nele.
- MaiorValor() que recebe o vetor e retorna o maior valor contido nele.
- MediaAparada(), que recebe o vetor, chama as duas outras funcoes para descobrir quais sao os valores extremos,
calcula e retorna a media aparada.
Se houverem varias notas empatadas como maior ou menor nota deve-se desconsiderar todas.

Atencao: o programa devera obrigatoriamente usar funcoes
/*/


//MaiorValor() recebe o vetor e retorna o maior valor contido nele;
float MaiorValor(float *vetor){
    int i;
    float valormaior = vetor[0];
    //*****Procurando o maior valor;
    for(i = 0; i < ALUNOS; i++){
        if (vetor[i] > valormaior){
            valormaior = vetor[i];
        }
    }
    return valormaior;
}

//MenorValor() recebe o vetor e retorna o menor valor contido nele;
float MenorValor(float *vetor){
    int i;
    float valormenor = vetor[0];
    //*****Procurando o menor valor;
    for(i = 0; i < ALUNOS; i++){
        if(vetor[i] < valormenor){
            valormenor = vetor[i];
        }
    }
    return valormenor;
}

//MediaAparada() recebe o vetor, chama as duas outras funcoes para descobrir os valores extremos, calcula e retorna a media aparada;
float MediaAparada(float *vetor){

    int i;
    float mediaaparada, maior, menor, contagem_maior = 0, contagem_menor = 0, soma_total = 0, somamedia = 0, total_alunos;

    menor = MenorValor(vetor);
    //printf("\n  Menor valor: %.2f\n", menor);
    maior = MaiorValor(vetor);
    //printf("  Maior valor: %.2f\n", maior);

    //*****Verificando se existem numeros repetidos do menor valor;
    for(i = 0; i < ALUNOS; i++){
        if (menor == vetor[i]){
            contagem_menor = contagem_menor + 1;
        }
    }
    //printf("\n  Numero menor %.2f repete %.0f vez(es)\n", menor, contagem_menor);
    if(contagem_menor == 1){
        menor = menor * 1;
    } else if (contagem_menor > 1){
        menor = menor * contagem_menor;
    }

    //*****Verificando se existem numeros repetidos do maior valor;
    for(i = 0; i < ALUNOS; i++){
        if (maior == vetor[i]){
            contagem_maior = contagem_maior + 1;
        }
    }
    //printf("  Numero maior %.2f repete %.0f vez(es)\n", maior, contagem_maior);
    if(contagem_maior == 1){
        maior = maior * 1;
    } else if (contagem_maior > 1){
        maior = maior * contagem_maior;
    }

    //*****Calculando a soma total;
    for(i = 0; i < ALUNOS; i++){
        soma_total = soma_total + vetor[i];
    }

    //printf("\n  Soma total: %.2f\n", soma_total);
    somamedia = soma_total - maior - menor;
    //printf("  Soma sem os valores maior(es) e menor(es): %.2f\n\n", somamedia);
    total_alunos = ALUNOS - contagem_maior - contagem_menor;
    //printf("\n  Quantidade de alunos que entram na media aparada: %.2f\n", total_alunos);

    //*****Calculando a Media Aparada;
    mediaaparada = somamedia/total_alunos;
    return mediaaparada;

}


int main(){

    printf("\n\n   Entrega Programada 12 - C\n\n   Descricao: Media Aparada\n\n\n");
    printf("  Vamos calcular a media aparada das notas dos 15 alunos da turma!\n\n");

    int i;
    float notas[ALUNOS], media;

    for (i = 0; i < ALUNOS; i++){
        printf("  Digite a nota do aluno %2d: ", i+1);
        scanf("%f", &notas[i]);
    }

    media = MediaAparada(notas);
    printf("\n  O valor da media aparada eh %.2f\n\n\n", media);

    return 0;

}
