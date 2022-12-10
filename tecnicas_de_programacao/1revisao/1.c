//Faça um programa que solicite o ano de nascimento do usuário e apresente sua provável idade.
#include <stdio.h>
void main(){
 int ano,idade;
 printf("Em que ano vc nasceu?\n");
 scanf("%d",&ano);
 idade = 2022-ano;
 printf("Provavelmente vc tem %d anos",idade);
 return 0;
}
