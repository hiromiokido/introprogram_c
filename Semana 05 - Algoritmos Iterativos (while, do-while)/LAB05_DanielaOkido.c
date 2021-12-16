#include <stdio.h>

/*/
Laboratorio 5 – E
Descricao: Soma Pares

Criar um algoritmo que determine a soma de numeros inteiros pares dentre
varios numeros positivos lidos. Se o numero for par, entao some, e entao
continue lendo e calculando a soma dos numeros ate que o usuario entre com o
numero 0 (zero).

Dicas:
- Podemos usar uma variavel auxiliar iniciada em 0 para guardar a soma dos numeros pares.
- Para cada numero lido, devemos perguntar se ele eh par, para entao soma-lo.
- Nao se esqueca de iniciar a variavel auxiliar antes de ser usada.

Nesse exercicio deve-se usar while ou do...while
/*/

int main(){

    printf("\n   Laboratorio 5 - E\n\n   Descricao: Soma Pares   \n\n");
    printf("  Vamos determinar a soma de numeros inteiros pares dentre "
           "varios numeros positivos lidos.\n  O programa termina quando "
           "voce inserir o numero 0 (zero). Vamos comecar!\n\n");

    //definindo variaveis
    int soma, numero;
    //variavel auxiliar iniciada
    soma = 0;
    while (numero != 0){
        //entrada de um valor no programa
        printf("  Insira um numero (aperte 0 se quiser encerrar): ");
        scanf("%d", &numero);
        /*/
        somente se o numero for positivo e par (numero%2==0) que o programa fara a soma;
        caso contrario o programa apenas ignorara o valor inserido. Exemplo: numeros negativos
        e/ou numeros impares serao ignorados pelo programa. Alem disso, o programa so funciona
        para numeros inteiros. Caso for inserido valores nao inteiros, o programa falha (glitch).
        /*/
        if ( numero > 0 && (numero % 2 == 0) ){
            soma = soma + numero;
            printf("  A soma dos numeros pares eh %d.\n", soma);
        /*/
        quando inserir o numero 0 (zero), o programa sera encerrado e apresentara a soma final
        dos numeros inteiros pares.
        /*/
        } else if (numero == 0){
            printf("\n\n  A soma final dos numeros pares eh %d.\n", soma);
            printf("  O programa foi encerrado.\n\n");
        }
    }

    return 0;

}
