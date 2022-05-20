//6. Crie três matrizes de 3x3 de inteiros: mat1, mat2 e mult. Em seguida, peça para o
//usuário digitar os valores para mat1 e mat2. Em seguida, o algoritmo deverá preencher
//a matriz mult com a multiplicação das respectivas posições das matrizes anteriores.

#include <stdio.h>

int main (){
    int mat1[3][3],mat2[3][3],mult[3][3],i,j;
    printf("\nDigite os valores para a Primeira matriz 3x3\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("Digite um valor: ");
        scanf("%d",&mat1[i][j]);
        }
    }
    system("clear");
    printf("\nDigite os valores para a Segunda matriz 3x3\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("Digite um valor: ");
        scanf("%d",&mat2[i][j]);
        }
    }
    system("clear");
    printf("\nPrimeira Matriz: \n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
        printf("%d",mat1[i][j]);
        }
    }
    printf("\n\nSegunda Matriz: \n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
        printf("%d",mat2[i][j]);
        }
    }
    printf("\n\nMultiplicacao das Matrizes: \n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
        mult[i][j]=mat1[i][j]*mat2[i][j];
        printf(" %d ",mult[i][j]);
        }
    }

return 0;
}

