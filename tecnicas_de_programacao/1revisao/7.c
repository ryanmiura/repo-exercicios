//Faça um programa que solicite 5 números positivos, some todos os números inferiores a 50 e apresente o valor da soma.


#include <stdio.h>
void main(){
 int i;
 float valor,result=0;
 printf("Digite 5 numeros positivos :\n");
 for(i=0;i<5;i++){
 printf("Digite o %d numero: ",i+1);
 scanf("%f",&valor);
 if(valor<51){
 result= result+valor;
 }
 }
 printf("A soma de todos os numero menores q 50 = %.2f",result);
 return 0;
}
