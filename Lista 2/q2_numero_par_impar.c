#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){ //faça um programa que leia um numero e informe se e par ou impar
    
    //declarando variáveis
    int num = 0;
    int resultado = 0;

    //recebendo informacoes
    printf("Digite um numero inteiro, para verificar se e par ou impar\n");
    scanf("%d", &num);

    //calculando o valor
    resultado = num % 2;

    //aplicando o switch case para testar os resultados, e mostrar na tela.
    switch (resultado)
    {
    case 0:
        printf("O numero e par!");
        break;
    
    default:
        printf("O numero e impar");
        break;
    }
}