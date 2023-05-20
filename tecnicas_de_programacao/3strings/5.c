// Escreva um programa que receba um nome completo e apresenta a quantidade
//de vogais existentes no nome.
#include <stdio.h>
#include <string.h>
int main() {
    char nome[50];
    int i,count=0;
    printf("Digite um nome : \n");
    gets(nome);
    for(i=0;i<strlen(nome);i++){
        if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||nome[i]=='o'||nome[i]=='u'){
            count++;
        }
    }
    printf("Esse nome tem %d vogais",count);
return 0;
}

