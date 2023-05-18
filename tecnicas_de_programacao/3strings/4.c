//Escreva um programa que receba 2 nomes completos (até 30 caracteres) e
//imprima-os em ordem crescente
#include <stdio.h>
#include <string.h>
int main() {
    char n1[50],n2[50];
    //int i,comp=0;
    printf("Digite um nome : \n");
    gets(n1);
    printf("Digite outro nome : \n");
    gets(n2);
    if(strlen(n1)<strlen(n2)){
        printf("\n ordem crescente: ");
        printf("\n 1 - %s",n1);
        printf("\n 2- %s",n2);
    }else{
        printf("\n ordem crescente: ");
        printf("\n 1 - %s",n2);
        printf("\n 2- %s",n1);
    }
return 0;
}
