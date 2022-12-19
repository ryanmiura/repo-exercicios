//Faça um programa que solicite uma temperatura em graus Celsius e apresente seu respectivo valor em Fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32.
#include <stdio.h>
void main(){
 float cel,fah;
 printf("Digite uma temperatura em Celsius :\n");
 scanf("%f",&cel);
 fah=(9*cel/5)+32;
 printf("%.1f graus Celsius, sao %.1f graus Fahrenheit\n",cel,fah);
 return 0;
}
