#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
	Implemente a função strcmp de string.h utilizando qualquer estrutura de repetição. 
	A função strcmp compara os conteúdos de duas strings e verifica se são iguais retornando 0.
*/

int main(){ //comparando strs
    //criar duas str
    char nome1[50], nome2[50];
    int comp, num, i, resp;
	
    //entrar com duas palavras e guardar cada uma em um str
    printf("COMPARADOR DE PALAVRAS IGUAIS\n\n");
   
    while (resp != 2){
	    printf("Digite a primeira palavra: \n");
	    scanf("%[ -~]", nome1);
	    getchar();
	
	    printf("Digite a segunda palavra: \n");
	    scanf("%[ -~]", nome2);
	    getchar();
	
	    //comparar ambas
	    comp = strcmp(strupr(nome2), strupr(nome1));
	
	    //verificar a comparação e mostrar o resultado
	switch (comp){
		case 0: 
			printf("\n\n %d = sao iguais\n", comp);
			printf("Deseja fazer outra comparacao? 1 para sim / 2 para nao\n");
			scanf("%d", &resp);
			getchar();

		break;
			
		default:
			printf("\n\n%d - nao sao iguais\n\n", comp);
			printf("Deseja fazer outra comparacao? 1 para sim / 2 para nao\n");
			scanf("%d", &resp);
			getchar();
				
		break;	
		}	
	}	
}