#include <stdio.h>
#include <math.h>

/*/
Laboratorio 11 - A
Descricao: Media Geometrica

Faca um programa para calcular a media geometrica de N numeros reais. O usuario ira digitar numeros para o calculo da media geometrica, continuar
lendo ate o usuario digitar zero. Crie uma funcao para retornar o modulo do numero, esta funcao devera ser usada para todos os numeros lidos.

Dicas:
- A funcao de modulo devera verificar se o numero for negativo, entao multiplica-lo por -1.
- Para a raiz, podemos usar pow(base, exp), sendo exp = 1.0/N
- Lembre de usar: #include <math.h>

Atencao: O programa devera obrigatoriamente usar funcoes.
/*/


//Funcao para retornar o modulo do numero, usada para todos os numeros lidos;
//Funcao de modulo devera verificar se o numero for negativo, entao multiplica-lo por -1.
float modulo(float numero){
    float negativo = -1;
    if (numero < 0){
        numero = numero * negativo;
        return numero;
    } else if (numero > 0){
        return numero;
    }
}

//Programa para calcular a media geometrica de N numeros reais;
//Para a raiz, podemos usar pow(base, exp), sendo exp = 1.0/N;
//Usuario ira digitar numeros para o calculo da media geometrica, o programa continuara lendo ate o usuario digitar zero;
int main(){

    printf("\n\n   Laboratorio 11 - A\n\n   Descricao: Media Geometrica\n\n\n");
    printf("  Calculo da media geometrica de N numeros reais. Insira quantos numeros reais desejar.\n  Para calcular a media digite 0 (ZERO).\n\n");

    float n, produto, contagem, exp, mediageometrica;
    produto = 1;
    contagem = 0;

    do{
        printf("  Insira um numero real: ");
        scanf("%f", &n);
        if (n != 0){
            produto = produto * modulo(n);
            contagem = contagem + 1;
        }
    } while(n != 0);

    exp = (1/contagem);
    mediageometrica = pow(produto, exp);

    //printf("\n  Produto final = %.1f\n", produto);
    //printf("  N = %.0f\n\n", contagem);
    printf("\n  A media geometrica de %.0f numeros reais eh dada por %.2f.\n\n\n", contagem, mediageometrica);

    return 0;

}
