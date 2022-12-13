//Faça um programa que apresente os resultados da tabuada de 1 a 9.
#include <stdio.h>
void main(){
 int i,j;
 for(i=0;i<11;i++){
 printf("\nA tabuada de %d e:\n",i);
 for(j=0;j<11;j++){
 printf("%d X %d = ",i,j);
 printf("%d\n",i*j);
 }
 }
 return 0;
}
