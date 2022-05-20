//1. Crie uma matriz de 2x2, de números inteiros. Populacione-a usando laço para e, por
//fim, apresente todos os valores na tela.

#include <stdio.h>

int main (){
    int mat[2][2],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        printf("Digite um valor: ");
        scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<2;j++){
        printf("%d",mat[i][j]);
        }
    }

return 0;
}
