//1. Faça um algoritmo que tenha um registro (estrutura) que represente um aluno. O
//usuário deve digitar o RA, nome e endereço do aluno. Em seguida, o algoritmo deve
//apresentar os dados do aluno

#include <stdio.h>
struct aluno{
    int ra;
    char end[30],nome[30];
}    ;

int main(){
    struct aluno a1;
    printf("Digite seu RA : ");
    scanf("%d",&a1.ra);
    printf("Digite seu endereco : ");
    scanf("%s",&a1.end);
    printf("Digite seu nome : ");
    scanf("%s",&a1.nome);
    system("clear");
    printf("Dados do Aluno : \n");
    printf("RA : %d\n",a1.ra);
    printf("Endereco : %s\n",a1.end);
    printf("Nome : %s\n",a1.nome);

return 0;
}
