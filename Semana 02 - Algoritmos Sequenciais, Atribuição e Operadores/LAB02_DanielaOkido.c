#include <stdio.h>
/*/
Laboratorio 2 – C
Descricao: Soma e Produto

Faca o algoritmo em fluxograma e o programa correspondente que leia tres valores
reais e entao calcule e exiba com duas casas decimais a soma e produto dos numeros
lidos.
/*/

int main(){
    //Definindo as variaveis reais com o float
    float numero1, numero2, numero3, soma, produto;

    printf("\n   Laboratorio 2 - C\n\n   Descricao: Soma e Produto  \n\n");

    //Entrada dos valores reais
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);

    //Imprimindo os tres valores reais
    printf("\nO primeiro numero eh %.2f, o segundo numero eh %.2f e o terceiro eh %.2f.\n", numero1, numero2,numero3);

    //Processamento
    soma = numero1 + numero2 + numero3;
    produto = numero1 * numero2 * numero3;

    //Saida
    printf("\nA soma dos tres numeros reais eh %.2f. O produto, por sua vez, eh dado por %.2f.\n", soma, produto);

    return 0;

}
