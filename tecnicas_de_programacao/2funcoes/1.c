//Escreva uma função C chamada maiorValor que recebe dois inteiros positivos como
//argumento e retorna o maior valor recebido. Receba o valor retornado pela função main
//e o imprima. Considere que o segundo valor será maior que o primeiro.

#include <stdio.h>
int maiorValor(int num1,int num2){
    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
return 0;
}
int main(){
    int n1,n2;
    printf("Digite um numero\n");
    scanf("%d",&n1);
    printf("Digite outro numero\n");
    scanf("%d",&n2);
    printf("O maior numero digitado foi : %d",maiorValor(n1,n2));
    return 0;
}
