//Faça um programa que receba um número inteiro e apresente a tabuada desse número.
#include <stdio.h>
void main(){
 int valor,i;
 printf("Digite um valor :\n");
 scanf("%d",&valor);
 printf("A tabuada desse valor e:\n");
 for(i=0;i<11;i++){
 printf("%d X %d = ",valor,i);
 printf("%d\n",valor*i);
 }
 return 0;
}
