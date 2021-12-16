#include <stdio.h>
#define MAX 20

/*/
Laboratorio 7 - D
Descricao: Quantas repeticoes

Faca um programa que leia um conjunto de 20 numeros inteiros. Em seguida, voce devera ler um numero N informado pelo usuario.
O seu programa devera informar quantas vezes o numero N se repete entre os 20 numeros digitados anteriormente.

Exemplo: Suponha que o usuario digitou 15 15 2 2 3 3 4 4 5 5 6 6 7 7 8 8 9 9 10 10 e então digitou 3;

Nesse caso, o seu programa devera informar algo como: “O numero 3 se repete 2 vezes”.
/*/

int main(){

    printf("\n\n   Laboratorio 7 - D\n\n   Descricao: Quantas repeticoes\n\n");
    printf("  Digite 20 numeros inteiros. Em seguida, digite um numero N qualquer. O programa calculara\n  quantas vezes esse numero N se repete entre os 20 numeros inteiros inseridos.\n\n");

    //definindo um vetor inteiro de 20 elementos, cujos indices podem variar de 0 a 19
    int numero[MAX];
    //definindo as variaveis inteiras; no caso da soma vemos definicao + instanciacao
    int i, N, soma = 0;

    //usaremos o 'for' para que o usuario digite os 20 numeros inteiros
    for(i = 0; i < MAX; i++){
        printf("  Informe o numero inteiro %d: ", i+1);
        scanf("%d", &numero[i]);
    }

    //para visualizarmos todos os numeros inseridos usaremos 'for' novamente
    printf("\n  Os 20 numeros inteiros inseridos sao: \n");
    for(i = 0; i < MAX; i++){
        printf("  %d ", numero[i]);
    }

    //a partir de agora iremos ver quantas vezes N se repete entre os 20 numeros inteiros
    printf("\n\n  Veremos agora quantas vezes um determinado numero N se repete na lista que acabamos de criar.\n  Digite um numero N: ");
    scanf("%d", &N);

    //novamente usaremos o 'for' para identificar quais numeros do vetor sao iguais a N
    for(i = 0; i < MAX; i++){
        if (numero[i] == N){
            soma = soma + 1;
        }
    }

    printf("\n  O numero N=%d se repete %d vez(es) entre os 20 numeros digitados anteriormente.\n\n\n", N, soma);

    return 0;

}
