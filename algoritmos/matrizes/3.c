//3. Cria uma matriz de 3x3, de números reais. Populacione-a usando laço para e, por fim,
//apresente todos os valores na tela, mas na forma de matriz.


#include <stdio.h>

int main (){
    int mat[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("Digite um valor: ");
        scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
        printf("%d",mat[i][j]);
        }
    }

return 0;
}
