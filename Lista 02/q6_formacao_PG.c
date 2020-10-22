#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){ //faça um programa que receba do usuário a quantidade de elementos de uma PG e a razão, gere uma PG em lista com a quantidade de elementos definido pelo usuário e imprima

	//declaracao de variaveis
    int tamanho;
    int razao;
    int pg = 1;
    int a1;
    int cont = 1; 
	
	printf("Formador de Progressoes Geometricas (PA)\n\n"); //mensagem inicial
	
	printf("Digite o primeiro termo da PG: "); //solicitando o primeiro termo da PG, o a1
	scanf("%d", &a1);
	
    printf("Digite o total de termos da PG: "); //solicitando o tamanho da PG
    scanf("%d", &tamanho);
    
    printf("Digite a razao da PG: ");  //solicitando a razao da PG
    scanf("%d", &razao);

	
	printf("A Progressao Geometrica formada com os dados informados: {"); //print usado para inicializar a mensagem resposta
	
    while (cont < tamanho){ //while calculando os termos da PG
		
		pg = pg * razao;  //formula para calcular os termos de uma PG

		printf("%d, ", pg); //mostrando os termos
		
        cont++; 
	}
	printf("\b\b}");  //organizando dentro de uma chave
}
