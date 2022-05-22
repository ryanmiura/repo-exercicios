//3. Faça um algoritmo que tenha um registro (estrutura) que represente um pokemon. O
//usuário deve digitar o nome, vida, ataque e defesa do pokemon. Em seguida, os dados
//devem ser apresentados.

#include <stdio.h>

struct poke {
    char nome[30];
    int atk,def,hp;
};

int main (){
    struct poke p1;
    printf("Preencha os dados do pokemon : \n");
    printf("Digite o nome : ");
    scanf("%s",&p1.nome);
    printf("Quanto de ataque : ");
    scanf("%d",&p1.atk);
    printf("Quanto de defesa : ");
    scanf("%d",&p1.def);
    printf("Quanto de vida : ");
    scanf("%d",&p1.hp);

    system("clear");
    printf("Dados do pokemon : \n");
    printf("Nome : %s\n",p1.nome);
    printf("Ataque : %d\n",p1.atk);
    printf("Defesa: %d\n",p1.def);
    printf("Vida : %d\n",p1.hp);

return 0;
}
