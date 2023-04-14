//Escreva uma função C chamada calculaDesconto e outra chamada calculaJuros.
//Solicite ao usuário um valor decimal e se ele deseja oferecer desconto ou juros. Na
//função calculaDesconto, retorne o valor obtido com 50% de desconto. Na função
//calculaJuros, retorne o valor obtido com 50% de juros. Imprima o resultado de acordo
//com a opção escolhida pelo usuário.

#include <stdio.h>
#include <math.h>

float calculaDesconto(float num){
    return num*0.5;
}
float calculaJuros(float num){
    return num*1.5;
}
int main(){
    int opc;
    float number;
    do{
    printf("Digite um numero decimal\n");
    scanf("%f",&number);
    printf("Voce quer calular desconto ou juros?\n");
    printf(" 1 - Desconto");
    printf(" 2 - Juros ");
    printf(" 0 - Sair ");
    scanf("%d",&opc);
    }while(opc>2||opc<0);
    if(opc==1){
        printf("Valor com desconto = %.2f",calculaDesconto(number));
    }else if(opc==2){
        printf("Valor com juros = %.2f",calculaJuros(number));
    }else{
        return 0;
    }
    
    return 0;
}
