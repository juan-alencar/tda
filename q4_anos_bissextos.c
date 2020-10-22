#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){ //faça um programa que receba um ano e informe se é bissexto ou não

    //declaracao de variaveis
    int ano;
    int bissexto;

    printf("Digite um ano para verificar se ele e bissexto: "); //pedindo os dados
    scanf("%d", &ano);  //verificando os dados

    bissexto = ano % 4; //calculando se o ano e bissexto

    switch (bissexto)   //usando o switch case para mostrar na tela se e verdadeiro ou falso
    {
    case 0:     //se o ano for divisivel por 4, o ano é bissexto

        printf("O ano %d e bissexto.", ano); 
        break;
    
    default:    //caso não, o ano nao é bissexto
          
        printf("O ano %d nao e bissexto.", ano); 
        break;
    }
}