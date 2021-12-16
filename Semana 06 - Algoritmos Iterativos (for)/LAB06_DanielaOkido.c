#include <stdio.h>

/*/
Laboratorio 6 - C
Descricao: Media de Pesos

Faca um programa que leia o peso (numero real) de 10 pessoas. No final do programa deve ser impresso a
media dos pesos, o maior peso e o menor peso lidos. Imprimir todos com duas casas decimais.

Dicas:
- Pode haver empate entre pesos (maior ou menor);
- O programa nao precisa controlar quantos pesos empatam como maior
ou menor, nem dizer de qual pessoa eh o peso em questao;
- Pede-se para informar somente o valor dos pesos (maior ou menor);

Atencao: programa devera usar o comando for()
/*/

int main(){

    printf("\n\n   Laboratorio 6 - C\n\n   Descricao: Media de Pesos\n\n");
    printf("  Este programa calcula o peso de 10 pessoas. No final imprimira\n  a media dos pesos, o maior peso e o menor peso lidos.\n\n");

    //definindo variaveis
    int i;
    float peso, media_peso, maior_peso, menor_peso;

    media_peso = 0;

    //como o programa comeca em 1, entao ele devera ir ate <=10, pois assim ele fara 10 iteracoes
    for(i = 1; i<=10; i++){

        printf("  Insira o peso da pessoa %d: ", i);
        scanf("%f", &peso); //peso com duas casas decimais

        media_peso = media_peso + peso; //para fazer a media

        //para ver o maior e menor
        //para o primeiro caso iremos definir o mesmo peso tanto para o menor quanto para o maior
        if (i == 1){
            menor_peso = peso;
            maior_peso = peso;
        //para i > 1 iremos fazer comparacao com o i anterior do for
        } else if (i != 1){
            if (peso >= maior_peso){
                maior_peso = peso; //se o peso for maior que o maior_peso, ele vira o maior_peso
            } else if (peso <= menor_peso){
                menor_peso = peso; //se o peso for menor que o menor_peso, ele vira o menor_peso
            }
        }
    }

    printf("\n\n  -- RESULTADOS --\n\n"); //resultados
    media_peso = media_peso/10.;  //calculando a media dos pesos de 10 pessoas
    printf("  A media dos pesos eh dada por %.2f.\n", media_peso);

    if (maior_peso != menor_peso){
        printf("  O valor do maior peso eh dado por %.2f.\n", maior_peso);
        printf("  O valor do menor peso eh dado por %.2f.\n\n\n", menor_peso);
    } else if (maior_peso == menor_peso){
        printf("  O maior e menor peso sao iguais, cujo valor eh dado por %.2f.\n\n\n", maior_peso);
    }

    return 0;
}
