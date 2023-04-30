//Escreva uma função C chamada calculaFatorial que recebe um valor inteiro positivo
//como argumento e imprime o valor recebido (função sem retorno).
#include <stdio.h>
int calculaFatorial(int num){
    int i,guia;
    guia = num - 1;
    for(i=guia;i>0;i--){
        num = num*i;
    }
    printf("O fatorial desse numero eh = %d",num);
}
int main(){
    int number;
    printf("Digite um numero inteiro positivo\n");
    scanf("%d",&number);
    calculaFatorial(number);
    
    return 0;
}
