//MENU: juan

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define OPCAO "VOCE ESCOLHEU A OPCAO: " //definindo constante para usar no menu resposta

int main(){ //faça um menu automatico

    //declarando variaveis
    int user = 0; //variavel usada para perguntar se o usuario vai entrar no menu, ou nao
    int user2 = 0; //variavel usada para verificar as solicitacoes do menu que o usuario fez
    
    //recepcionando e perguntando se o usuario vai continuar com o menu
    printf("Bem vindo(a) ao menu de atendimento automatico! \n");
    printf("Se deseja continuar digite 1, caso nao, digite qualquer tecla\n");
    scanf("%d", &user); //lendo se o usuario vai continuar
    
    if (user == 1){ //se o usuario digitou 1, ou seja, continuou com o menu, executar o while com o menu

        while (user == 1){ //apresentacao do menu
        printf("--------MENU-------\n\n");
        printf("1 - OPCAO 1 DO MENU\n");
        printf("2 - OPCAO 2 DO MENU\n");
        printf("3 - OPCAO 3 DO MENU\n");
        printf("4 - OPCAO 4 DO MENU\n");
        printf("5 - OPCAO 5 DO MENU\n");
        printf("6 - OPCAO 6 DO MENU\n");
        printf("7 - OPCAO 7 DO MENU\n");
        printf("8 - OPCAO 8 DO MENU\n");
        printf("9 - OPCAO 9 DO MENU\n\n");

        printf("DIGITE 0 PARA ENCERRAR O MENU\n\n"); //condicao de saida
        scanf("%d", &user2); //lendo o dado do usuario para testar respostas (variavel user 2, ou seja, segunda interacao com o usuario)
        system("cls"); //funcao para que sempre que o usuario responder, o menu imprimir novamente na tela

            switch (user2){ //testando caso a caso com o switch
                case 0 :    //condicao de saida, caso seja 0, o programa encerra
                    printf("\nAgredecemos a preferencia. Volte sempre!\n\n");
                    return 0;
                case 1 : 
                    printf("\n%s1\n\n", OPCAO); //utilizando a constante OPCAO("VOCE ESCOLHEU A OPCAO: ") para economizar textos
                    break;
                case 2 :
                    printf("\n%s2\n\n", OPCAO);
                    break;
                case 3 :
                    printf("\n%s3\n\n", OPCAO);
                    break;
                case 4 :
                    printf("\n%s4\n\n", OPCAO);
                    break;
                case 5 :
                    printf("\n%s5\n\n", OPCAO);
                    break;
                case 6 :
                    printf("\n%s6\n\n", OPCAO);
                    break;
                case 7 :
                    printf("\n%s7\n\n", OPCAO);
                    break;
                case 8 :
                    printf("\n%s8\n\n", OPCAO);
                    break;
                case 9 :
                    printf("\n%s9\n\n", OPCAO);
                    break;
                default :
                    printf("\nOPCAO INVALIDA\n\n");
                    break;
            }        
        }
    }
    else { //caso o usuario nao queira continuar com o menu
        printf("Estaremos aqui se precisar! =D");
        return 0;
    }
return 0;
}