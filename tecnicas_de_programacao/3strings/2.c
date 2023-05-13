//Escreva um programa que receba o nome de usuário e sua senha de acesso a
//um sistema. Se o usuário for “maria“ e a senha “abc123“, permita o acesso. Caso
//contrário, dê uma mensagem de ACESSO NEGADO.
#include <stdio.h>
#include <string.h>
int main() {
    char login[50],senha[50];
    int compl,comps;
    printf("Login : \n");
    gets(login);
    printf("Senha : \n");
    gets(senha);
    compl = strcmp(login,"maria");
    comps = strcmp(senha,"abc123");
    if(compl==0&&comps==0){
        printf("acesso permitido");
    }else{
        printf("acesso negado");
    }

return 0;
}
