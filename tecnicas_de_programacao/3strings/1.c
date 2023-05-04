//Escreva um programa que receba uma string e depois um caractere, e retorne o
//número de vezes que esse caractere aparece na string.

#include <stdio.h>
#include <string.h>
int main() {
    char frase[50],letra;
    int i,soma=0;
    printf("Digite uma frase : \n");
    gets(frase);
    printf("Digite uma letra : \n");
    scanf("%c",&letra);
    for(i=0;i<strlen(frase);i++){
        if(frase[i]==letra){
            soma++;
        }
    }
    printf("A letra apareceu %d vezes na frase",soma);
return 0;
}
