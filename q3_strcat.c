#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	
    //Implemente a função strcat de string.h utilizando qualquer estrutura de repetição. 
	//A função strcat concatena o conteúdo de uma string em outra. DICA: Cuidado com o espaço em memória.
	
    char primeiro_nome[100], meio_nome[100], ultimo_nome[100], nome_completo[300];
	int resp = 0;
	
	while(resp != 2){

	    printf("\nEscreva seu primeiro nome\n");
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

		printf("Deseja escrever outro nome? 1 para sim / 2 para nao\n");
		scanf("%d", &resp);
		getchar();
	}
return 0;
}