//Faça um programa que leia 3 valores inteiros e apresente: o maior valor recebido, o menor valor recebido e a média dos valores recebidos.


#include <stdio.h>
void main(){
 int i,valor[3],maior=0,menor,med,soma=0;
 printf("Digite 3 numeros inteiros :\n");
 for(i=0;i<3;i++){
 printf("Digite o %d numero: ",i+1);
 scanf("%d",&valor[i]);
 if(i==0){
 menor=valor[i];
 }
 if(valor[i]>maior){
 maior=valor[i];
 }else if(valor[i]<menor){
 menor=valor[i];
 }
 soma=soma+valor[i];
 }
 med=soma/i;
 printf("O maior valor e %d\n",maior);
 printf("O menor valor e %d\n",menor);
 printf("A media entr os valores e %d\n",med);
 return 0;
}
