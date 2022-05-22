//2. Faça um algoritmo que tenha um registro (estrutura) que represente um DVD em uma
//locadora. Então, deve ser armazenado o título, gênero, duração e prateleira. O
//programa deve pedir os respectivos dados do DVD. Em seguida, deve apresentá-los

#include <stdio.h>

struct dvd{
    int dur,prat;
    char titu[30],gen[30];
};

int main(){
    struct dvd d1;
    printf("Preencha os dados do dvd : \n");
    printf("Digite o titulo : ");
    scanf("%s",&d1.titu);
    printf("Digite o genero : ");
    scanf("%s",&d1.gen);
    printf("Digite a duracao(em minutos) : ");
    scanf("%d",&d1.dur);
    printf("Numero da prateleira : ");
    scanf("%d",&d1.prat);

    system("clear");
    printf("Dados do dvd : \n");
    printf("Titulo : %s\n",d1.titu);
    printf("Genero : %s\n",d1.gen);
    printf("Duracao: %d minutos\n",d1.dur);
    printf("Prateleira : %d\n",d1.prat);

return 0;
}
