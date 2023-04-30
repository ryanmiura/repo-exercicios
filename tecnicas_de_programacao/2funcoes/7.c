//Escreva uma função C chamada somaIntervalo que recebe dois números inteiros
//positivos e calcula a soma de todos os números pares compreendidos no intervalo dos
//números recebidos. Receba o resultado da soma na função main e o imprima
#include <stdio.h>
int somaIntervalo(int num1,int num2){
    int i,aux,result=0;
    if(num1>num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    for(i=num1 + 1;i<num2;i++){
        if(i%2==0){
            result=result+i;
        }
    }
    return result;
}
int main(){
    int number1,number2;
    printf("Digite um numero inteiro positivo\n");
    scanf("%d",&number1);
    printf("Digite outro numero inteiro positivo\n");
    scanf("%d",&number2);
    printf("A soma dos numeros pares no intevalo desses numeros eh = %d",somaIntervalo(number1,number2));
    
    return 0;
}
