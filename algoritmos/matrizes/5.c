//5.Crie uma matriz de 2x3, de números inteiros e a populacione usando laço para. Por
//fim, calcule e apresente a soma de cada linha.

#include <stdio.h>

int main (){
    int mat[2][3],i,j,soma=0;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
        printf("Digite um valor: ");
        scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
        printf("%d",mat[i][j]);
        soma=soma+mat[i][j];
        }
        printf("    %d",soma);
        soma=0;
    }

return 0;
}

