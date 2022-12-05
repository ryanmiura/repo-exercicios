//Faça um programa que receba um valor inteiro e apresente se o valor é par ou ímpar. Dica: use o operador % (resto da divisão de inteiros). Por exemplo: 5 % 2 retornará o resto da divisão de 5 por 2. Então, 5 % 2 = 1 (porque 5 dividido por 2 é igual a 2 e resta 1). Por outro lado, 6 % 2 = 0, porque 6 dividido por 2 é igual a 3 e resta 0.

#include <stdio.h>
void main(){
 int valor;
 printf("Digite um valor :\n");
 scanf("%d",&valor);
 if(valor%2==0){
 printf("Esse numero e par");
 }else{
 printf("Esse numero e impar");
 }
 return 0;
}
