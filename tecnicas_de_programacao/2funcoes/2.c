//Escreva uma função chamada calculaCubo que recebe um valor inteiro positivo e
//retorna o valor ao cubo. Receba o valor retornado pela função main e o imprima.

#include <stdio.h>
int calculaCubo(int num){
    return num*num*num;
}
int main(){
    int number;
    printf("Digite um numero\n");
    scanf("%d",&number);
    printf("O cubo desse numero eh : %d",calculaCubo(number));
    return 0;
}
