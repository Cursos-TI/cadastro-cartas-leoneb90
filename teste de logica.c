#include <stdio.h>

int main(){
/*
Soma (+)
Subtracao (-)
Multiplicacao(*)
Divisao(/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

printf("Entre como numero1: \n");
scanf("%d", &numero1);
printf("Entre com o numero2: \n");
scanf("%d", &numero2);

//operacao soma
soma = numero1 + numero2;

//operacao subtracao
subtracao = numero1 - numero2;

//operacao multiplicacao
multiplicacao = numero1 * numero2;

//operacao divisao
divisao = numero1 / numero2;
printf("A some é: %d\n", soma);
printf("A subtracao é %d\n:", subtracao);
printf("A multiplicacao é %d\n:", multiplicacao);
printf("A divisao é %d\n:", divisao);

}