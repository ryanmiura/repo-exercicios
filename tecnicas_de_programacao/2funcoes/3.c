//Escreva uma função C chamada arredondaValor que recebe um número decimal e
//arredonda para o inteiro mais próximo. Receba o valor arredondado na função main e o
//imprima. Dica: utilize a função round, da biblioteca math.h.

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
