//Escreva uma função C chamada calculaDesconto e outra chamada calculaJuros.
//Solicite ao usuário um valor decimal e se ele deseja oferecer desconto ou juros. Na
//função calculaDesconto, retorne o valor obtido com 50% de desconto. Na função
//calculaJuros, retorne o valor obtido com 50% de juros. Imprima o resultado de acordo
//com a opção escolhida pelo usuário.

#include <stdio.h>
#include <math.h>

int arredondaValor(float num){
    return round(num);
}
int main(){
    float number;
    printf("Digite um numero decimal\n");
    scanf("%f",&number);
    printf("O arredondamento desse numero eh : %d",arredondaValor(number));
    return 0;
}
