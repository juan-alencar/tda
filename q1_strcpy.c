#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){ // questao 1 lista 3

    //Implemente a função strcpy de string.h utilizando qualquer estrutura de repetição. 
    //A função strcpy copia o conteúdo de uma string para outra

    //receber uma string
    //utilizar uma estrututura de repetição para perguntar se o user quer digitar outro nome
        //usar while e mostrar o menu dentro dele
    

    char nome1[50], nome2[50];
    int num = 0; 
    
	printf("COPIANDO STRINGS\n\n");

    while (num != 1){
        printf("DIGITE UMA FRASE OU PALAVRA: \n");
        scanf("%[ -~]", nome1);
        getchar();

        strcpy(nome2, nome1);

        printf("A FRASE QUE VOCE DIGITOU FOI: %s\n\n", nome1);
        printf("FOI COPIADA COM SUCESSO: %s\n\n", nome2);

        printf("Se não deseja continuar com o menu digite 1, caso queira, tecle qualquer coisa");
        scanf("%d", &num);
        getchar();
    }
}