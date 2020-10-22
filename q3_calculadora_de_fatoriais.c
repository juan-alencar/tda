#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//faça um programa que leia um número e retorne seu fatorial

int main(){

    //declarando variaveis 
    double num;     //double usado para que possa caucular numeros grandes
    double fatorial;
	

    do {	//programação segura, caso o usuario digite um numero negativo
        
        printf("Digite um numero natural, para calcular seu fatorial: "); //solicitando dados
        scanf("%lf", &num); //recebendo os dados
        
        printf("Voce digitou: %.0lf\n\n", num); //mostrando os dados informados

    

        if(num > 0){ //verificando os dados
            
            //se o numero for maior que 0 executa o programa
            
            for (fatorial = 1; num > 1; num = num - 1){
                printf("%.0lf x ", num);
                
                fatorial = fatorial * num;
            }
            
            printf("1 = %.0lf", fatorial);
        }

        else{   
            
            //se o numero for negativo, mostra uma resposta de erro, e retorna ao inicio

            printf("Por favor digite um numero maior que 0.\n\n");
        }

    }   while (num < 0);  //do while para melhorar a experiencia com o usuario

}