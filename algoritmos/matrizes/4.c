//4. Crie uma matriz de 3x2, de números inteiros. Populacione-a usando laço para e, por
//fim, apresente todos os valores, mas de forma invertida.

#include <stdio.h>

int main (){
    int mat[3][2],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
        printf("Digite um valor: ");
        scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<2;i++){
        printf("\n");
        for(j=0;j<3;j++){
        printf("%d",mat[j][i]);
        }
    }

return 0;
}
