//4. Faça um algoritmo de pokèdex. O pokèdex deve armazenar cinco pokèmons (para isso,
//crie um vetor de pokèmon de 5 posições). Cada pokemon deve possuir os campos
//nome,vida,ataque e defesa. O algoritmo deve pedir os dados dos cinco pokèmons (um
//pokèmon por vez). Em seguida, o algoritmo deve apresentar o seguinte menu: “1-
//Alterar dados do pokèmon; 2-Ver dados do pokémon; Outro número para sair”. Uma
//vez que o usuário escolha entre 1 ou 2, o algoritmo deve pedir qual pokèmon (entre 0
//e 4) o usuário deseja alterar/ver. Se o usuário digitar 1, o algoritmo deverá pedir para
//ele digitar os novos valores do pokémon e retornar ao menu inicial. Se o usuário
//digitar 2, o algoritmo deverá apresentar os dados do usuário e voltar ao menu inicial.
//Isto deve se repetir até que o usuário digite um valor fora do intervalo entre 1 e 2, no
//menu inicial.

#include <stdio.h>

struct poke {
    char nome[30];
    int atk,def,hp;
};

int main (){
    int i,opc,opc2;
    struct poke p[5];
    for(i=0;i<5;i++){
        printf("\nPreencha os dados do pokemon %d : \n",i+1);
        printf("Digite o nome : ");
        scanf("%s",&p[i].nome);
        printf("Quanto de ataque : ");
        scanf("%d",&p[i].atk);
        printf("Quanto de defesa : ");
        scanf("%d",&p[i].def);
        printf("Quanto de vida : ");
        scanf("%d",&p[i].hp);
    }

    system("clear");

    do{
            printf("\n\nMENU : \n");
            printf("\n1 - Alterar dados do pokemon\n");
            printf("\n2 - Ver dados do pokemon\n");
            printf("\nOutro numero para sair\n");
            scanf("%d",&opc);
            switch(opc){
                case 1:
                    system("clear");
                    printf("");
                    printf("\nDigite o numero do pokemon para alterar os dados(1-5) : ");
                    scanf("%d",&opc2);
                    system("clear");
                    if(opc2>0 && opc2<6){
                        opc2=opc2-1;
                        printf("\nDados antigos do pokemon %d : \n",opc2+1);
                        printf("Nome : %s\n",p[opc2].nome);
                        printf("Ataque : %d\n",p[opc2].atk);
                        printf("Defesa: %d\n",p[opc2].def);
                        printf("Vida : %d\n",p[opc2].hp);
                        printf("\n\n");
                        printf("\nPreencha os novos dados do pokemon %d : \n",opc2+1);
                        printf("Digite o nome : ");
                        scanf("%s",&p[opc2].nome);
                        printf("Quanto de ataque : ");
                        scanf("%d",&p[opc2].atk);
                        printf("Quanto de defesa : ");
                        scanf("%d",&p[opc2].def);
                        printf("Quanto de vida : ");
                        scanf("%d",&p[opc2].hp);
                    }else{printf("Pokemon %d não existe",opc2);}
                    break;
                case 2:
                    system("clear");
                    printf("");
                    printf("\nDigite o numero do pokemon para ver os dados(1-5) : ");
                    scanf("%d",&opc2);
                    system("clear");
                    if(opc2>0 && opc2<6){
                        opc2=opc2-1;
                        printf("\nDados do pokemon %d : \n",opc2+1);
                        printf("Nome : %s\n",p[opc2].nome);
                        printf("Ataque : %d\n",p[opc2].atk);
                        printf("Defesa: %d\n",p[opc2].def);
                        printf("Vida : %d\n",p[opc2].hp);
                    }else{printf("Pokemon %d não existe",opc2);}
                    break;

            }

    }while(opc == 1 || opc == 2);

return 0;
}
