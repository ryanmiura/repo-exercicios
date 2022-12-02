#include <stdio.h>
#include <string.h>

void main(){
	enum dia{domingo=1,segunda,terca,quarta,quinta,sexta,sabado
	};
	enum dia hoje; 
	printf("Digite um numero para o dia da semana:\n");
	scanf("%d",&hoje);
	switch(hoje){
	
		case 1: printf("Domingo"); break;
		case 2: printf("Segunda-Feira"); break;
		case 3: printf("Terca-Feira"); break;
		case 4: printf("Quarta-Feira"); break;
		case 5: printf("Quinta-Feira"); break;
		case 6: printf("Quinta-Feira"); break;
		case 7: printf("Sabado"); break;
	}
}
