#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){ //strlen

    char primeiro_nome[100], meio_nome[100], ultimo_nome[100], nome_completo[300];
    int tamanho, i;

    printf("Escreva seu primeiro nome\n");
    scanf("%[ -~]", primeiro_nome);
    getchar();
    
    printf("Escreva seu nome do meio\n");
    scanf("%[ -~]", meio_nome);
    getchar();
    
    printf("Escreva seu ultimo nome\n");
    scanf("%[ -~]", ultimo_nome);
    getchar();

    nome_completo[0] = '\0';
    strcat(nome_completo, primeiro_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, meio_nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, ultimo_nome);

    
    printf("Seu nome completo: %s\n\n", nome_completo);


    //descobrir o tamanho da string resultante da concatenação dos nomes
    tamanho = strlen(nome_completo);

    //mostrar o tamanho
    printf("O seu nome tem %d letras.", tamanho);
	printf("\n\n");

    //escrever cada caractere separado por um Tab  usando estrutura de repetição
    while(nome_completo[i] != '\0'){
		if(nome_completo[i] != ' '){
			printf("%c\t", nome_completo[i++]);
		}
		else{
			nome_completo[i++];
		}
    } 
}