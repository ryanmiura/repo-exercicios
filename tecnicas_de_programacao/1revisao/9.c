//Faça um programa que leia o preço de um produto e apresente esse valor acrescido de 100% caso o valor lido seja menor que 200,
//ou apresente o valor acrescido de 50%, caso o valor lido seja maior ou igual a 200.

#include <stdio.h>
void main(){
 int valor,result;
 printf("Digite o preco do produto :\n");
 scanf("%d",&valor);
 if(valor<200){
 result=valor*2;
 printf("O preco final = %d",result);
 }else if(valor>199){
 result=valor*1.5;
 printf("O preco final = %d",result);
 }
 return 0;
}
