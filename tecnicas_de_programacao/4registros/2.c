//Faça um programa que receba dados de 6 carros, armazenando-os em uma
//estrutura que tenha os seguintes campos:
//● Marca (até 20 caracteres)
//● Ano
//● Preço
//Em seguida, ofereça as seguintes opções ao usuário:
//● 1 - Pesquisar por carros de um determinado ano. Nesse caso, solicite o ano
//e retorne os dados de carros do ano selecionado.
//● 2 - Pesquisar por carros até um determinado valor. Nesse caso, leia um valor
//x do usuário e informe os dados de todos os carros que tenham valor menor
//ou igual a x.
//● 3 - Sair do programa. Repita as opções ao usuário enquanto não for
//selecionada a opção 3.
#include <stdio.h>
#include <string.h>
struct carros{
    char marca[20];
    int ano;
    float preco;
};
void main(){
    int i,opc;
    struct carros lista[6];
    for(i=0;i<6;i++){
        printf("\n\nDados do carro: %d\n",i+1);
        printf("\nDigite a marca: ");
        scanf("%s",lista[i].marca);
        printf("\nDigite o ano: ");
        scanf("%d",&lista[i].ano);
        printf("\nDigite a o preco:");
        scanf("%f",&lista[i].preco);
    }
    do{
        printf("\n\n----MENU----");
        printf("\n1-Pesquisar por carros de um determinado ano");
        printf("\n2-Pesquisar por carros ate um determinado valor");
        printf("\n3-Sair do programa");
        scanf("%d",&opc);
        switch(opc){
            case 1:{
                int ano,j=0;
                printf("\n\nQual ano voce quer pesquisar ?");
                scanf("%d",&ano);
                printf("\nDados de carros desse ano:\n");
                for(i=0;i<6;i++){
                    if(lista[i].ano==ano){
                        j++;
                        printf("\n\nDados do carro %d",j);
                        printf("\nMarca: %s",lista[i].marca);
                        printf("\nAno: %d",lista[i].ano);
                        printf("\nPreco: %2.f",lista[i].preco);
                    }
                }
                break;
                }
            case 2:{
                int j=0;
                float preco;
                printf("Ate que valor vc procura?: ");
                scanf("%f",&preco);
                for(i=0;i<6;i++){
                    if(lista[i].preco<preco){
                        j++;
                        printf("\n\nDados do carro %d",j);
                        printf("\nMarca: %s",lista[i].marca);
                        printf("\nAno: %d",lista[i].ano);
                        printf("\nPreco: %2.f",lista[i].preco);
                    }
                }
                break;
                }
            case 3:
                break;
        }
    }while(opc!=3);

}
