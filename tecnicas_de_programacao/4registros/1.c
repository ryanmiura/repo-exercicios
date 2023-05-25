//Crie uma estrutura para armazenar os seguintes dados de um estudante:
//● Nome (até 50 caracteres)
//● Curso (até 30 caracteres)
//● Nota1
//● Nota2
//● Media (calcular a partir da nota1 e nota2)
//Em seguida, faça um programa que lê e imprime os dados de n alunos (o valor n
//deve ser solicitado ao usuário).
#include <stdio.h>
#include <string.h>
struct estudante{
    char nome[50];
    char curso[30];
    float n1;
    float n2;
    float med;
};
void main(){
    int i,n;
    printf("Quantos alunos vc quer cadastrar?");
    scanf("%d",&n);
    struct estudante lista[n];
    for(i=0;i<n;i++){
        printf("\n\nDados do aluno: %d\n",i+1);
        printf("\nDigite o nome: ");
        scanf("%s",lista[i].nome);
        printf("\nDigite o curso: ");
        scanf("%s",lista[i].curso);
        printf("Digite a nota 1: \n");
        scanf("%f",&lista[i].n1);
        printf("Digite a nota 2: \n");
        scanf("%f",&lista[i].n2);
        lista[i].med = (lista[i].n1+lista[i].n2)/2;
     }
     for(i=0;i<n;i++){
        printf("\n\nDados do alunos: %d\n",i+1);
        printf("\nNome: %s",lista[i].nome);
        printf("\nCurso: %s",lista[i].curso);
        printf("\nNota 1: %2.f",lista[i].n1);
        printf("\nNota2 : %2.f",lista[i].n2);
        printf("\nMedia: %2.f",lista[i].med);
     }

}
