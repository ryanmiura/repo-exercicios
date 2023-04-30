//Escreva uma função C chamada calculaConsumo que recebe a quantidade de pessoas,
//a quantidade de copos plásticos utilizados por pessoa em um dia e a quantidade de
//dias. Apresente a quantidade de copos plásticos utilizados ao final de 1 dia, 7 dias, 30
//dias e 365 dias.
#include <stdio.h>
int calculaConsumo(int p,int c, int d){
    int result;
    result = p*c*d;
    return result;
}
void main(){
    int pe, co, di;
    printf("Digite quantas pessoas\n");
    scanf("%d",&pe);
    printf("Digite quantos copos por pessoa\n");
    scanf("%d",&co);
    printf("Digite quantos dias\n");
    scanf("%d",&di);
    printf("Quantidade de copos utilizados = %d",calculaConsumo(pe,co,di));
}
