//Escreva um programa que receba uma frase e a imprima de maneira invertida,
//trocando as letras C por *.

#include <stdio.h>
#include <string.h>
int main() {
    char frase[50];
    int i;
    printf("Digite uma frase : \n");
    gets(frase);
    for(i=strlen(frase);i>-1;i--){
        if(frase[i]=='c'){
            printf("*");
        }else{
            printf("%c",frase[i]);
        }
    }
return 0;
}


