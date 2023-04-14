//Escreva uma função C chamada calculaFatorial que recebe um valor inteiro positivo
//como argumento e retorna o fatorial desse valor. Receba o valor retornado pela função
//main e o imprima.

#include <stdio.h>
int calculaFatorial(int num){
    int i,guia;
    guia = num - 1;
    for(i=guia;i>0;i--){
        num = num*i;
    }
    return num;
}
int main(){
    int number;
    printf("Digite um numero inteiro positivo\n");
    scanf("%d",&number);
    printf("O fatorial desse numero eh = %d",calculaFatorial(number));
    
    return 0;
}
