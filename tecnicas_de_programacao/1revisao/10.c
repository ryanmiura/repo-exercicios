//Formule um enunciado com base em algum interesse pessoal seu (games, livros, música, etc.)  e apresente sua implementação. Utilize uma estrutura de decisão nesse exercício.
#include <stdio.h>
void main(){
 int valor,result;
 printf("Quais dessas coisa vc gosta mais ?\n");
 printf("Games = 0\n");
 printf("Livros = 1\n");
 printf("Musica = 2\n");
 scanf("%d",&valor);
 switch(valor){
 case 0:
 printf("Vc gosta mais de Games");
 break;
 case 1:
 printf("Vc gosta mais de Livros");
 break;
 case 2:
 printf("Vc gosta mais de Musica");
 break;
 }
 return 0;
}
