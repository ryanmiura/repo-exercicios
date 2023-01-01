//Faça um programa que solicite o mês do ano (um número de 1 a 12). O algoritmo deve apresentar a mensagem de quantos dias o mês tem, ou “mês inválido”, caso digite um mês inválido.


#include <stdio.h>
void main(){
 int mes;
 printf("Digite um mes (de 1 a 12) :\n");
 scanf("%d",&mes);
 if(mes==1){
 printf("Janeiro tem 31 dias");
 }else if(mes==2){
 printf("Fevereiro tem 28 ou 29 dias");
 }else if(mes==3){
 printf("Marco tem 31 dias");
 }else if(mes==4){
 printf("Abril tem 30 dias");
 }else if(mes==5){
 printf("Maio tem 31 dias");
 }else if(mes==6){
 printf("Junho tem 30 dias");
 }else if(mes==7){
 printf("Julho tem 31 dias");
 }else if(mes==8){
 printf("Agosto tem 31 dias");
 }else if(mes==9){
 printf("Setembro tem 30 dias");
 }else if(mes==10){
 printf("Outubro tem 31 dias");
 }else if(mes==11){
 printf("Novembro tem 30 dias");
 }else if(mes==12){
 printf("Dezembro tem 31 dias");
 }else{
 printf("Digite o numero de um mes valido");
 }
 return 0;
}
