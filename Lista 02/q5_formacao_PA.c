#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){ //faça um programa que receba do usuário a quantidade de elementos de uma PA e a razão, gere uma PA em lista com a quantidade de elementos definido pelo usuário e imprima

	//declaracao de variaveis
    int tamanho;
    int razao;
    int pa;
    int a1;
    int cont; 
	
	printf("Formador de Progressoes Aritimeticas (PA)\n\n"); //mensagem inicial
	
	printf("Digite o primeiro termo da PA: "); //solicitando o primeiro termo da PA, o a1
	scanf("%d", &a1);
	
    printf("Digite o totais de termos da PA: "); //solicitando o tamanho da PA
    scanf("%d", &tamanho);
    
    printf("Digite a razao da PA: ");  //solicitando a razao da PA
    scanf("%d", &razao);

	
	printf("A Progressao Aritmetica formada com os dados informados: {"); //print usado para inicializar a mensagem resposta
	
	cont = 0;
    while (cont < tamanho){ //while calculando os termos da PA
		
		pa = a1 + cont * razao;  //formula para calcular os termos de uma PA
		
		printf("%d, ", pa); //mostrando os termos
		cont++;
	}
	printf("\b\b}");  //organizando dentro de uma chave
	
	return 0;
}
