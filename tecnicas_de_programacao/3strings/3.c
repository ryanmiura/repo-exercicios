//Escreva um programa que receba duas strings e verifique se elas são
//palíndromas mútuas, ou seja, se uma é igual à outra quando lida de trás para
//frente. Exemplo: roma e amor são palíndromas mútuas.
#include <stdio.h>
#include <string.h>
int main() {
    char f1[50],f2[50];
    int i,j,comp=0;
    printf("Digite uma frase : \n");
    gets(f1);
    printf("Digite outra frase : \n");
    gets(f2);
    printf("%d",comp);
    if(strlen(f1)==strlen(f2)){
        for(i=0;i<strlen(f1);i++){
            if(f1[i]!=f2[strlen(f2)-(i+1)]){
                comp=1;
            }
        }
        printf("%d",comp);
        if(comp==0){
            printf("Eh palimdromo");
        }else{
            printf("Nao eh um palindromo");

        }
    }else{
        printf("Nao eh um palindromo");
    }

return 0;
}
